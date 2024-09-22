 class Solution {
public:
    string maximumTime(string time) {
        string fm = "2"; 
        string sm = "9"; 
        string sm2 = "3"; 
        string tm = "5"; 
        string lm = "9";
        
        if(time[0] == '?') {
            time[0] = (time[1] == '?' || time[1] < '4') ? fm[0] : '1';
        }
        if(time[1] == '?') {
            if(time[0] == '2') {
                time[1] = sm2[0];
            } else {
                time[1] = sm[0];
            }
        }
        if(time[3] == '?') {
            time[3] = tm[0];
        }
        if(time[4] == '?') {
            time[4] = lm[0];
        }
        
        return time;
    }
};

