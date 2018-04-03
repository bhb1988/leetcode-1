/*************************************************************************
	> File Name: c++/135_Candy.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月03日 星期二 11时08分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution { //hard
public:
    int candy(vector<int>& ratings) {
        vector<int>  f(ratings.size());
        int sum = 0;
        for (int i = 0; i < ratings.size(); ++i)
            sum += slove(ratings, f, i);
        return sum;
    }
    
    int slove(const vector<int>& ratings, vector<int>& f, int i){
        if (f[i] == 0){
            f[i] = 1;
            if (i > 0 && ratings[i] > ratings[i-1])
                f[i] = max(f[i], slove(ratings, f, i-1) + 1);
            if (i < ratings.size() -1 && ratings[i] > ratings[i + 1])
                f[i] = max(f[i], slove(ratings, f, i + 1) + 1);
        }
        return f[i];
    }
};
