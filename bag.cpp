#include <vector>
#include <limits>

int knapsack1(const std::vector<int>& wts, const std::vector<int>& cost, int W)
{
	size_t n = wts.size();
	std::vector<int> dp(W + 1);
	dp[0] = 0;
	for (int w = 1; w <= W; w++)

	return dp[W];
}