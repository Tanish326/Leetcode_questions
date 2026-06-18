class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12){
            hour = 0;
        }
        double hour_angle = 0.5*minutes + 30*hour;
        double min_angle = 6*minutes;
        double diff = abs(hour_angle-min_angle);
        return min(diff,360-diff);
    }
};