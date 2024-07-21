// Only works for sorted matrices 
// i.e. ascending from top to bottom 
//      ascending from left to right
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the rows and columns: ";
    cin>>n>>m;
    int a[n][m];

    int target;
    cout<<"To find: ";
    cin>>target;
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;      //which is top right position of a matrix
    bool found=false;
    while(r<n && c>=0){
        if(a[r][c]==target){
            found=1;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
            cout<<"Element found.";
        }
        else{
            cout<<"Element not found.";
        }
    return 0;
}