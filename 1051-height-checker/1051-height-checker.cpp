class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        int n = expected.size();
        
        for (int i = 1; i < n; i++) {          
            int key = expected[i];
            int j;
            for (j = i - 1; j >= 0 && expected[j] > key; j--) {
                expected[j + 1] = expected[j];   
            }
            expected[j + 1] = key;                
        }
        
        int count = 0;
        for (int k = 0; k < n; k++) {
            if (heights[k] != expected[k]) {     
                count++;
            }
        }
        
        return count;
    }
};
