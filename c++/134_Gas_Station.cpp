/*************************************************************************
	> File Name: c++/134_Gas_Station.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月03日 星期二 10时25分29秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int j = -1;
        
        for  (int i = 0, sum = 0; i < gas.size(); ++i){
            sum += gas[i] - cost[i];
            total += gas[i] - cost[i];
            if (sum < 0){
                j = i;
                sum = 0;
            }
        }
        return total >= 0 ? j+1 : -1;
    }
};
