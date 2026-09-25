#include <iostream>
using namespace std;
#include <vector>
#include<climits>
vector<int>vec={2,1,4,7,5,7};
int bruteforce(vector<int>vec){
for(auto i=0; i<vec.size() ; i++){
    for(int j=i+1; j<vec.size(); j++){
        if (vec[i]>vec[j]) {
            swap(vec[i], vec[j]);
        }
    }
} 
for(auto i=vec.size()-1; i>=0; i--){
    if(vec[i]==vec[vec.size()-1]){
        continue;
    }
    else{
        
        return vec[i];
    }
}

}
int optimal(vector<int>vec){
    int largest = INT_MIN;
int secondLargest = INT_MIN;

for(int i = 0; i < vec.size(); i++) {

    if(vec[i] > largest) {
        secondLargest = largest;
        largest = vec[i];
    }

    else if(vec[i] > secondLargest && vec[i] != largest) {
        secondLargest = vec[i];
        
    }
   
}
return secondLargest;
}
int main(){
   cout<<"second largest elemet:"<< bruteforce(vec)<<endl;
   cout<<"by optimal "<< optimal(vec);
   return 0;
}