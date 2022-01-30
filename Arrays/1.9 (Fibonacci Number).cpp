class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
        {
            return n;
        }
        if(n == 2)
        {
            return 1;
        }
        int a = 1;
        int b = 1;
        int x;
        for(int i = 3; i <=n ; i++)
        {
            x = a + b;
            b = a;
            a = x;
        }
        return a;
    }
};


/*
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
        {
            return n;
        }
        
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= n ; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
*/
