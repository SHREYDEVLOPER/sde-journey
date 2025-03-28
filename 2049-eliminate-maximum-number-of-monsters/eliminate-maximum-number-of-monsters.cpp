 class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        int count = 0;
        int n = dist.size();
        vector<double> time(n);

        for(int i = 0; i < n; i++)
        {
            time[i] = (double)dist[i] / speed[i];
        }

        sort(time.begin(),time.end());

        int t = 0;
        for(auto x : time)
        {
            if(x > t)
            {
                count++;
                t++;
            }
            else break;
        }

        return count;
    }
};