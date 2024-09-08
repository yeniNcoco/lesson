#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"원하는 행렬의 크기: "<<endl;
    cin>>a;
    cin>>b;
    int arr[a][a];
    int num=1;
    for(int c=b-1; c>=0; c--){
        for(r=a-1; r>=0; r--){
        arr[r][c]=num;
          num++;
     }}

    for(int r=0;r<a;r++){
        for(int c=0;c<a;c++){
    cout<<arr[r][c]<<"\t";
    }cout<<endl;
}}