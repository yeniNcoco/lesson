#include <iostream>
using namespace std;
int main(){
    /*int a,b;
    cin>>a;
    cin>>b;
    int arr[a][b];
    int num=1;
    for(int i=0; i<a+b-1; i++){
    int r=0,c=i;
    for(int n=0; n<a+b-1; n++){
        if((r>=0&&r<a)&&(c>=0&&c<b)){
        arr[r][c]=num;
        num++;
        }
        r++;
        c--;
    }}
    for(int r=0; r<a; r++){
    for(int c=0; c<b; c++){
        cout<< arr[r][c]<<"\t";
    }cout<<endl;
}*/

int a,b;
    cin>>a;
    cin>>b;
    int arr[a][b];
    int num=1;
    for(int i=0; i<a+b-1; i++){ //대각선 진행횟수
    int r=0+i, c=b-1; //시작위치 (boundary 넘기 전 규칙까지만 써주면 됨)
    for(int n=0; n<a+b-1; n++){ //element 채우는 코드
        if((r>=0&&r<a)&&(c>=0&&c<b)){ //bound 설정
        arr[r][c]=num;
        num++;
        }
        r--; //대각선 숫자 규칙 (남동)
        c--;
    }}
    for(int r=0; r<a; r++){
    for(int c=0; c<b; c++){
        cout<< arr[r][c]<<"\t";
    }cout<<endl;
}





}