The basic form of declaring two dim arr is:

data_type name_of_arr[x][y];

arr을 합치면 matrix가 됨.


** a multidim arr is an arr of arrays

int arr[4][5]; 
ㅁㅁㅁㅁㅁ
ㅁㅁㅁㅁㅁ
ㅁㅁㅁㅁㅁ
ㅁㅁㅁㅁㅁ
20 elements
sizeofarr=20*4 <byte

방법1:

int a[2][3] = {1, 2, 3, 4, 5, 6}; //가끔 헷갈림

방법2 :

int a[2][3] = {{1, 2, 3}, {4, 5, 6}}; //row 단위로 정리

How can we access?
a[0][1] <index

How to Print?
int a[5] = {1, 2, 3, 4, 5}

for(i=0; i<5; i++)
{
     printf("%d", a[i])
}

two nested form loop

for(i=o; i<2; i++)
{
    for(j=0; j<3; j++)
    {
        printf("%d", a[2][3]);
    }
}
