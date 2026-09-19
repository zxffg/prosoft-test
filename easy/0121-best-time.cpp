// Название задачи: Best Time to Buy and Sell Stock
// Ссылка на LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Сложность: Easy

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if (prices.size() < 2) {
            return 0;
        }
    
        int left{0}, max_profit{0};

        for (int right{1}; right < prices.size(); right++) {
            if (prices[right] < prices[left]) {
                left = right;
            } else {
                max_profit = max(max_profit, prices[right] - prices[left]);
            }
        }

        return max_profit;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {7,1,5,3,6,4};
    auto res = sol.maxProfit(nums);
    cout << res << endl;
    return 0;
}