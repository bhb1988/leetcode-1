class Solution { //Manacher's Algorithm
public:
    string longestPalindrome(string s) 
    {
        //重新构造新的字符串t，这样新的字符串的字符个数始终为奇数个
        string t="&#";  //加&是为了防止越界，后面自带'\0'
        for(int i=0;i<s.size();++i)
        {
            t+=s[i];
            t+="#";
        }
        //新建P[i]用来存放以t[i]字符为中心的回文子串的半径
        vector<int> P(t.size(),0);

        int mx=0; //是回文串能延伸到的最右端位置
        int iD=0;   //每个回文串的中间点
        int resLen=0,resCenter=0;
        for(int i=1;i<t.size();++i)
        {   
            /*当i<mx时，能对称取值得下标，当半径小于mx-i时，就是本身，
             *大于则只能取mx-iD，超过的部分只能++的比较。当i>mx时，只能++的比较。*/
            P[i]=mx>i?min(P[2*iD-i],mx-i):1;    

            while(t[i+P[i]]==t[i-P[i]])
                ++P[i];           //以i点为中心的P[i]的最大值

            if(mx<i+P[i])           //重新选择中心点并改变mx
            {
                mx=i+P[i];
                iD=i;
            }
            if(resLen<P[i])         //记录最大的半径和对应的中间点的值
            {
                resLen=P[i];
                resCenter=i;
            }

        }
        return s.substr((resCenter-resLen)/2,resLen-1);
    }
 };
