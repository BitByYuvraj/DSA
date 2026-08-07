class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int left = 0, ans = 0, maxfreq = 0;
        for(int r = 0; r < s.size(); r++) {
            freq[s[r]]++;
            maxfreq = max(maxfreq, freq[s[r]]);
            while((r - left + 1) - maxfreq > k) {
                freq[s[left]]--;
                left++;
            }
            ans = max(ans, r - left + 1);
        }
        return ans;
    }
};