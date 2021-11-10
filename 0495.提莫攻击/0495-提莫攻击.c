int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration){
    /*
    int res = 0;
    for (int i = 1; i < timeSeriesSize; ++i) {
        res += fmin(timeSeries[i] - timeSeries[i - 1], duration);
    }
    return res + duration;
    */

            int ans = 0;
        int expired = 0;
        for (int i = 0; i < timeSeriesSize; ++i) 
        {
            if (timeSeries[i] >= expired) 
            {
                ans += duration;
            } 
            else
            {
                ans += timeSeries[i] + duration - expired;
            }
            expired = timeSeries[i] + duration;
        }
        return ans;
}