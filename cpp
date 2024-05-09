class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long ans = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        int n = happiness.size();
        for(int i = 0; i < n; i++) {
            if(happiness[i] <= i) break;
            if(k == 0) break;
            ans += happiness[i] - i;
            k--;
        }
        return ans;
    }
};
