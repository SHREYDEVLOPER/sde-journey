 class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int mind = INT_MAX;
        vector<int> fin;
        
        for(int i = 1; i <= area; i++) {
            if(area % i == 0) {
                int d = area / i;
                if(i >= d) {
                    if(abs(i - d) < mind) {
                        mind = abs(i - d);
                        fin.clear();
                        fin.push_back(i);
                        fin.push_back(d);
                    }
                }
            }
        }
        return fin;
    }
};
