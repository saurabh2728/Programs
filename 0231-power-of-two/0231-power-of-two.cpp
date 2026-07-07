
// using recursion
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n==1) return 1;
//         if(n%2!=0 || n<=0) return 0;
//         return isPowerOfTwo(n/2);
        
//     }
// };

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        while (n > 1) {
            if (n % 2 != 0)
                return false;

            n /= 2;
        }

        return true;
    }
};