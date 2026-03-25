#include <iostream>
#include <vector>
using namespace std;


int singlenum(vector<int>vec, int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans=ans^vec[i];
        
    }
    return ans;
    
}
int main(){
    vector<int>vec={4,1,2,1,2,8,4};
    int size=vec.size();
    cout<< singlenum(vec,size);
    return 0;
}
