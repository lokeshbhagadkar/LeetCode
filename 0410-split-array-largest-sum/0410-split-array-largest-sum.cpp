class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long low = 0, high = 0;
        //This note is for github
        //This is day 6 of maintaining streak
        // i solve this program by taking gpt help
        // make sure to understand the program and dry run properly
        //This time i try leetcode hard program
        //Today date is 24 aug 26
        //Dry run and understand it properly

        // Maximum possible answer = total sum
        for (int x : nums) {
            low = max(low, (long long)x);
            high += x;
        }

        while (low < high) {
            long long mid = low + (high - low) / 2;

            int parts = 1;
            long long sum = 0;

            for (int x : nums) {
                if (sum + x <= mid) {
                    sum += x;
                } else {
                    parts++;
                    sum = x;
                }
            }

            if (parts > k) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }

        return (int)low;
    }
};