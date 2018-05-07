class Solution {
public:
    int longestValidParentheses(string s) {
     int max_len = 0, last = -1; //保存')'的位置
     stack<int> lefts; //保存未匹配的左括号位置
     
     for (int i = 0; i < s.size(); ++i){
         if (s[i] == '('){
             lefts.push(i);
         }else{
             if (lefts.empty()){
                 last = i;
             }else{
                 lefts.pop();
                 if (lefts.empty()){
                     max_len = max(max_len, i-last);
                 }else{
                     max_len = max(max_len, i-lefts.top());
                 }
             }
         }
     }
        return max_len;
    }
};
