class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        int n = expected.size();
        
        for (int i = 1; i < n; i++) {           // start from 1
            int key = expected[i];
            int j;
            for (j = i - 1; j >= 0 && expected[j] > key; j--) {
                expected[j + 1] = expected[j];   // only shifting here
            }
            expected[j + 1] = key;                // key placed AFTER loop ends
        }
        
        int count = 0;
        for (int k = 0; k < n; k++) {
            if (heights[k] != expected[k]) {      // fixed: k not i
                count++;
            }
        }
        
        return count;
    }
};