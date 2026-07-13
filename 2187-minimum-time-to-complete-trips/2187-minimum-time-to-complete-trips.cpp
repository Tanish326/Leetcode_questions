class Solution {
public:
   long long check(vector<int>& time, long long currTime) {
    long long trips = 0;

    for (int t : time) {
        trips += currTime / t;
    }

    return trips;
}

long long minimumTime(vector<int>& time, int totalTrips) {

    long long l = 1;
    long long h = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;

    long long ans = h;

    while (l <= h) {

        long long mid = l + (h - l) / 2;

        if (check(time, mid) >= totalTrips) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return ans;
}
};