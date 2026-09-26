#include <iostream>
#include <vector>
using namespace std;
vector<int>vec={1,2,1,3,4};
int check(vector<int>vec){
    for(auto i=0; i<vec.size(); i++){
        if(vec[i]>vec[i+1]){
            return 0;
        }
        
    }
    return 1;
    
}
int main(){
    cout<<check(vec);
    return 0;
}
