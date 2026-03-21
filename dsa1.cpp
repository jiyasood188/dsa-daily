#include <iostream>
using namespace std;
int num[6];
void largest_element(){
    int current_max;
    current_max=num[0];
    for(int i=0; i<6;i++){
        if(num[i]>current_max){
            current_max=num[i];
        }
    }
    cout<<current_max<<endl;
}
int main(){
    num[0]=3;
    num[1]=2;
    num[2]=1;
    num[3]=5;
    num[4]=4;
    num[5]=6;
    largest_element();
    return 0;
}



