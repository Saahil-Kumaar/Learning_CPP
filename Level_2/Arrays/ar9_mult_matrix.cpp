#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the number of rows and column: ";
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    int an[n1][n3];
    cout<<endl;
    cout<<"First Matrix."<<endl;
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Second Matrix."<<endl;
    for (int i=0;i<n2;i++){
        for (int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            an[i][j]=0;
        }
    }
    for (int i=0;i<n1;i++){
        for (int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                an[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"RESULTANT MATRIX";
    for (int i=0;i<n1;i++){
        for (int j=0;j<n3;j++){
            cout<<an[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}