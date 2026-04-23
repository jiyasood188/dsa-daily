#include <iostream>
using namespace std;
void selectionsort(int arr[], int n){
  
   for(int i=0;i<n-1;i++){
    int minimum_element=i;
    for(int j=i+1;j<n;j++){
        if (arr[j]<arr[minimum_element]){
            minimum_element=j;

    

        }
        
    }
    swap(arr[i],arr[minimum_element]);
     
   }

}
int main(){
    int n=10;
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}