#include<iostream>
using namespace std; 
int main( ) 
{  /* int row, column;
    cin>>row>>column;
      int  s[row][column];
      int  i, j;
      cout<<"\n2D Array Input:\n";
	  for(i=0;i<row;i++)
	  {
	  	for(j=0;j<column;j++)
	  	{
	  		cout<<"\ns["<<i<<"]["<<j<<"]=  ";
	  		cin>>s[i][j];
		}
	  } 
	  
	  cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<row;i++)
	  {
	  	for(j=0;j<column;j++)
	  	{
	  		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	  } 

      string letters[2][2][2] = {
  {
    { "A", "B" } //<0
    { "C", "D" } //<1
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";
    }
  }
}*/

/*string a[2][2]={
    {1,2}{3,4}
};
string b[2][2]={
    {5,6}{7,8}
};
cout<<a<<endl<<b;*/

int a;
int b;
cin>>a;
cin>>b;
int array[a][b];
int num=1;
for(int r=0;r<a;r++){
    if (r%2==0){
    for(int c=0;c<b;c++){
        array[r][c]=num;
        num++;
    }}
    if(r%2==1){
    for(int c=b-1;c>=0;c--){
         array[r][c]=num;
        num++;
    }}
}
for(int r=0;r<a;r++){
    for(int c=0;c<b;c++){
       cout<<array[r][c]<<"\t";
    }
    cout<<endl;
}
}