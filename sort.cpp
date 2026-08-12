#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int>vec={2,8,9,1,5};
for(auto i=0; i<vec.size() ; i++){
    for(int j=i+1; j<vec.size(); j++){
        if (vec[i]>vec[j]) {
            swap(vec[i], vec[j]);
        }
    }
}
for(auto i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";
}
return 0;
}
