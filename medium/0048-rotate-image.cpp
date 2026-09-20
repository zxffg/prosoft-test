// Название задачи: LRU Cache
// Ссылка на LeetCode: https://leetcode.com/problems/lru-cache/
// Сложность: Medium

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // транспонируем
        for (int i{0}; i < n; ++i) {
            for (int j{i + 1}; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // отражение столбцов с середины
        for (int i{0}; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    int n = matrix.size();

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    Solution sol;
    sol.rotate(matrix);

    cout << "Матрица после поворота:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}