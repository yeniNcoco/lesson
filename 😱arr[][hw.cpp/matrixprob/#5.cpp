#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int arr[a][b];
    int num=1;
    for(int i=0; i<a+b-1; i++){
    int r=i,c=0;
    for(int n=0; n<a+b-1; n++){
        if((r>=0&&r<a)&&(c>=0&&c<b)){
        arr[r][c]=num;
        num++;
        r--;
        c++;
        }
        else{
        r--;
        c++;
            continue;
        }
    }}
    for(int r=0; r<a; r++){
    for(int c=0; c<b; c++){
        cout<< arr[r][c]<<"\t";
    }cout<<endl;
}



}