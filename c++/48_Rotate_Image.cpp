/*************************************************************************
	> File Name: c++/48_Rotate_Image.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月02日 星期一 10时21分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const int n = matrix.size();
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n - i; ++j)
                swap(matrix[i][j], matrix[n-1-j][n-1-i]);
        
        for (int i = 0; i < n / 2; ++i)
            for (int j = 0; j < n;++j)
                swap(matrix[i][j], matrix[n -1 - i][j]);
    }
};
