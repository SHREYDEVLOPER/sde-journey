class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<string, int> rc;
        long long result = 0;

        for (const auto& rectangle : rectangles) {
            int width = rectangle[0];
            int height = rectangle[1];

             int g = gcd(width, height);

             width /= g;
            height /= g;

             string ratio = to_string(width) + ":" + to_string(height);

             if (rc.find(ratio) != rc.end()) {
                result += rc[ratio];
            }

             rc[ratio]++;
        }

        return result;
    }
};