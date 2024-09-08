#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"원하는 정방행렬의 크기를 입력하시오 :";
    cin>>a;
    int arr[a][a];
    int num=1;
    for(int c=0;c<a;c++){
        if(c%2==1){
            for(int r=a-1;r>=0;r--){
                arr[r][c]=num;
                num++;
            }
        }
        if(c%2==0){
            for(int r=0;r<a;r++){
            arr[r][c]=num;
            num++;
        }
        }
    }
    for(int r=0;r<a;r++){
        for(int c=0;c<a;c++){
            cout<<arr[r][c]<<"\t";
        }cout<<endl;
    }
}