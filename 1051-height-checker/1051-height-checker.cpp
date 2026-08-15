class Solution {
public:
    int heightChecker(vector<int>& heights) {
         vector<int> expected = heights;
        int n=heights.size();
        for(auto i=0; i<n; i++){
            int swaps=0;
            for(auto j=0; j<n-i-1; j++){
                if (expected[j] > expected[j+1]){
                    swap(expected[j], expected[j+1]);
                    swaps=1;
                }
              
            }
            if (swaps==0){
                break;
            }
        }
         int count=0;
        for(int i=0; i<n; i++){
           
            if(heights[i]!= expected[i]){
                count++;
            }
           
        }
       return count;  
    }
};