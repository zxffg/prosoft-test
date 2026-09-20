// Название задачи: Trapping Rain Water
// Ссылка на LeetCode: https://leetcode.com/problems/trapping-rain-water/
// Сложность: Hard

#include <iostream>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int left{0}, right = height.size() - 1;
        int left_max{0}, right_max{0};
        int max_water{0};

        while (left < right) {
            if (height[left] < height[right]) {
                // здесь левая сторона
                if (height[left] >= left_max) {
                    left_max = height[left];
                } else {
                    max_water += left_max - height[left];
                }
                ++left;
            } else {
                // здесь правая стена
                if (height[right] >= right_max) {
                    right_max = height[right];
                } else {
                    max_water += right_max - height[right];
                }
                --right;
            }
        }

        return max_water;
    }
};

int main() {
    Solution sol;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << sol.trap(height) << endl; // ожидается: 6
    return 0;
}
