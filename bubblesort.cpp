#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={12,4,16,10,9};
    int n=vec.size();
    for(int i=0; i<n-1; i++){
        for(auto j=0; j<n-1; j++){
        if (vec[j]>vec[j+1]){
            swap(vec[j],vec[j+1]);
        }
       
    }
    }
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}