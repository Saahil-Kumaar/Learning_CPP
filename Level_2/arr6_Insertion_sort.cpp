//Insertion sort
//Time complexity: O(n^2)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
    //  0,  1,  2,  3,  4, 5
    //----------------------
    // 12, 45, 23, 51, 19, 8
    // 12, 45, 23, 51, 19, 8
    // 12, 23, 45, 51, 19, 8
    // 12, 23, 45, 51, 19, 8
    // 12, 23, 45, 51, 19, 8
    // 12, 19, 23, 45, 51, 8
    //  8, 12, 19, 23, 45, 51