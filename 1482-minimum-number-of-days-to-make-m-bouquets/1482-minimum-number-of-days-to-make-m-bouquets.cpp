class Solution {
public:

    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        //This note is for github
        //This question is directly solved
        //This is day 4 of maintaining streak
        //Today is date 21 aug 26
        //make sure to understand & solve question properly
        //just make sure to dry run code 
        int bouquets = 0;
        int flowers = 0;

        for (int x : bloomDay) {

            if (x <= day) {
                flowers++;

                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            }
            else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};