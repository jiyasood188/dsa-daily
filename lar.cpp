#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec={4,8,1,5,11,0};


    int larelem=0;
    int seclarelem=-1;
    for(int j=1; j<vec.size(); j++){
        if (vec[j]>vec[larelem]){
            seclarelem=larelem;
            larelem=j;
           

        }
        else if(seclarelem == -1 || vec[j] > vec[seclarelem]){
                seclarelem = j;
        
    }
}
     cout<<vec[seclarelem]; 


return 0;
}