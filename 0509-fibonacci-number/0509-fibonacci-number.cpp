// class Solution {
// public:
//     int fib(int n) {
//         if (n <= 1) return n;
//         int a = 0, b = 1;

//         for (int i = 2; i <= n; i++) {
//             int c = a + b;
//             a = b;
//             b = c;
//         }
//         return b;
//     }
// };

// class Solution {
// public:
//     int solve(int n, vector<int>& memo) {
//         if (n <= 1) return n;

//         if (memo[n] != -1) 
//             return memo[n];

//         memo[n] = solve(n - 1, memo) + solve(n - 2, memo);
//         return memo[n];
//     }

//     int fib(int n) {
//         vector<int> memo(n + 1, -1);
//         return solve(n, memo);
//     }
// };   
class Solution {
public:
    int fib(int n) {
        int dp[n + 1];

        if (n == 0 || n == 1) return n;

        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};     