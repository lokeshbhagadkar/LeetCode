class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long low = 0, high = 0;
        //This note is for github
        //This is day 6 of maintaining streak
        // i solve this program by taking gpt help
        // make sure to understand the program

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

            // Need more than k subarrays
            // => mid is too small
            if (parts > k) {
                low = mid + 1;
            }
            else {
                // mid is possible, try smaller
                high = mid;
            }
        }

        return (int)low;
    }
};