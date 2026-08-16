class Solution {
public:
    int fib(int n) {
        //note for github--> this is just a recursive way

        //....point to be noted//
        //we have to do it with dynamic programming way
         if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};