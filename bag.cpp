#include <vector>
#include <limits>

int knapsack1(const std::vector<int>& wts, const std::vector<int>& cost, int W)
{
	size_t n = wts.size();
	std::vector<int> dp(W + 1);
	dp[0] = 0;
	for (int w = 1; w <= W; w++)
	{
		dp[w] = dp[w - 1];
		for (size_t i = 0; i < n; i++)
		{
			if (wts[i] <= w)
			{
				dp[w] = std::max(dp[w], dp[w - wts[i]] + cost[i]);
			}
		}
	}
	return dp[W];
}