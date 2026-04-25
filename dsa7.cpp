#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={2,0,2,1,1,0};
   int n=vec.size();
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(vec[mid]==0){
            swap(vec[low],vec[mid]);
            low++,mid++;
        }
        else if(vec[mid]==1){
            mid++;
        }
        else{
            swap(vec[mid],vec[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}