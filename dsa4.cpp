#include <iostream>
#include <vector>
using namespace std;

int singlenum(vector<int>nums, int size){
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count==1){
        return nums[i];
            

        }
        return -1;
        }
    
    }
    int main(){
        vector<int>nums={4,1,2,1,2,4};
        int size=nums.size();

        cout<< singlenum(nums,size);
        return 0;
    }
