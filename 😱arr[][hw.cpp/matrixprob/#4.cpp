#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    int arr[a][b];
    int num=1;
    if(a%2==1){
for(int r=a-1; r>=0; r--){
    if(r%2==0){
        for(int c=b-1; c>=0; c--){
            arr[r][c]=num;
            num++;
        }
    }
    if(r%2==1){
        for(int c=0; c<b; c++){
            arr[r][c]=num;
            num++;
        }
    }
}}
else{
    for(int r=a-1; r>=0; r--){
    if(r%2==1){
        for(int c=b-1; c>=0; c--){
            arr[r][c]=num;
            num++;
        }
    }
    if(r%2==0){
        for(int c=0; c<b; c++){
            arr[r][c]=num;
            num++;
        }
    }
}}
for(int r=0; r<a; r++){
    for(int c=0; c<b; c++){
        cout<< arr[r][c]<<"\t";
    }cout<<endl;
}
}