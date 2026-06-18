class Solution {
public:
    double angleClock(int hour, int minutes) {
        int H = 0;
        if(hour == 12){
            H = 12;
        }
        if (hour < 12){
            H = hour;
        }
        if (hour>12){
            H = hour%12;
        }
        double hr = (30.0*H) + (0.5 * minutes);
        double min = 6.0*minutes;
        double deg = abs(hr - min);
        if (deg > 180.0) {
            return 360.0 - deg;
        }
        return deg;
    }
};