#include <iostream>
using namespace std;

void reversearr(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

    int main(){
        int size=6;
        int arr[size]={2,4,0,5,3,1};
        reversearr(arr,size);
        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
        
    }
