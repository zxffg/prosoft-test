// Название задачи: Valid Parentheses
// Ссылка на LeetCode: https://leetcode.com/problems/valid-parentheses/
// Сложность: Easy

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for (int i{0}; i < s.size(); ++i) {
            switch (s[i]) {
                case ')': if (!st.empty() && st.top() == '(') { st.pop(); } else { return false; }
                    break;
                case ']': if (!st.empty() && st.top() == '[') { st.pop(); } else { return false; }
                    break;
                case '}': if (!st.empty() && st.top() == '{') { st.pop(); } else { return false; }
                    break;
                default:
                    st.push(s[i]);
                    break;
            }
        }
        if (!st.empty()) { return false; }
        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isValid("()[]{}") << endl;  // ожидается: true
    cout << boolalpha << sol.isValid("(]") << endl;      // ожидается: false
    return 0;
}
