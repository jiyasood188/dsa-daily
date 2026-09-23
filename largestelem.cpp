//bruteforce


#include <iostream>
using namespace std;
#include <vector>
vector<int>v={3,2,1,5,2};
int bruteforce(vector<int>v) {
        for(auto i=0; i<v.size() ; i++){
    for(int j=i+1; j<v.size(); j++){
        if (v[i]>v[j]) {
            swap(v[i], v[j]);
        }
    }
} 
    
   return v[v.size()-1];
    }
    int optimal(vector<int>v){
        for(int i=0; i<v.size(); i++){
            int lar=v[0];
            if(v[i]>v[0]){
                lar=v[i];
                return v[i]; 
            }
          
            
        }
          
    }
int main(){
    
    cout<<optimal(v)<<endl;
    cout<<bruteforce(v)<<endl;
return 0;
}


