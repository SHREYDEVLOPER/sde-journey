class NumArray {
    vector<int> ps;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        ps.resize(n);
        ps[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            ps[i] = ps[i - 1] + nums[i];
        }
    }
    int sumRange(int left, int right) {
        if (left == 0) return ps[right];
        return ps[right] - ps[left - 1];
    }
};
 