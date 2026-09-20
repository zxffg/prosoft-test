// Название задачи: Longest Substring Without Repeating Characters
// Ссылка на LeetCode: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Сложность: Medium

#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> last_pos(256, -1);

        int left{0}, max_size{0};

        for (int right{0}; right < s.size(); right++) {
            char current_char{s[right]};

            if (last_pos[current_char] >= left) {
                left = last_pos[current_char] + 1;
            } 
            last_pos[current_char] = right;

            max_size = max(max_size, right - left + 1);
        }
        return max_size;
    }
};

int main() {
    Solution sol;
    cout << sol.lengthOfLongestSubstring("abcabcbb") << endl; // ожидается: 3
    cout << sol.lengthOfLongestSubstring("bbbbb") << endl;    // ожидается: 1
    return 0;
}
