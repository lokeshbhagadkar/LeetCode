class Solution {
public:
    int fib(int n) {
        //note for github--> this is just a recursive way
         if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};