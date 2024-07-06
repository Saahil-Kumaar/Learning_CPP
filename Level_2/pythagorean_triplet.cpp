#include<iostream>
using namespace std;
bool pyth(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    if (pyth(x,y,z)){
        cout<<"Pythagorean triplets."<<endl;        
    }
    else{
        cout<<"Not Pythagorean triplets."<<endl;
    }
    
    return 0;
}