class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        /*
        int res = 0;
        for (int i = 1; i < timeSeries.length; ++i) {
            res += Math.min(timeSeries[i] - timeSeries[i - 1], duration);
        }
        return res + duration;
        */

        int ans = 0;
        int expired = 0;
        for (int i = 0; i < timeSeries.length; ++i) {
            if (timeSeries[i] >= expired) {
                ans += duration;
            } else {
                ans += timeSeries[i] + duration - expired;
            }
            expired = timeSeries[i] + duration;
        }
        return ans;
    }
}