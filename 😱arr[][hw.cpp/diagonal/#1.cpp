#include <iostream>
using namespace std;
int main(){

int a, b;
cin>>a;
cin>>b;
int arr[a][b];
int num =1;
for(r=a-1; r>=0; r--){
    for(c=0; c<b; c++){
        arr[r][c]=num;
        num++;
    }
}
for(int r=0;r<a;r++){
        for(int c=0;c<a;c++){
    cout<<arr[r][c]<<"\t";
    }cout<<endl;}
}