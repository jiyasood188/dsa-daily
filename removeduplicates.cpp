#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int>vec={1,1,2,2,3};
int bruteforce(vector<int>vec){
    set<int>st;
    for(int x: vec){
        st.insert(x);
    }

    int i=0;
    for(int x: st){
        vec[i]=x;
        i++;
    }
    return i;
}

int better(vector<int>vec){
    vector<int>temp;
    temp.push_back(vec[0]);
    for(int i =0; i<vec.size(); i++){
        if(vec[i]!=temp.back()){
            temp.push_back(vec[i]);
        }

    }
    for (int i = 0; i < temp.size(); i++) {
        vec[i] = temp[i];
    }

    return temp.size();
}

int main(){
    cout<<"by brute force: "<<bruteforce(vec)<<endl;
    cout<<"by brute force: "<<better(vec)<<endl;
    return 0;
}