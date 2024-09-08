/*#include <iostream>

using namespace std;
int main(){
int age[5] = {22,25,30,32,35};
int newArray[5];
int n = 0;

// Initializing elements of the array separately
for(n=0; n<sizeof(newArray)/sizeof(newArray[0]); n++)
{
    newArray[n] = n; 
}}

#include <iostream> 
using namespace std;

#include <iomanip> 
using std::setw;

int main () {

    int newArray[5];
    int n = 0, p =0;

    // Initializing elements of array seperately         
    for (n=0; n<sizeof(newArray)/sizeof(newArray[0]); n++) {
        newArray[n] = n+50;
    }
    // print heading
    cout << "Element" << setw(10) << "Value" << endl;

    // print element's value in loop                    
    for (p=1; p<4; p++) {
        cout << setw(5) << p << setw(10) << newArray[p] << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    char greeting[6] = {'C', 'l', 'o', 'u', 'd', '\0'};
    int array[5] = {1,2,3,4,5};
    char array2[3] = {greeting[0], greeting[1], greeting[2]};
    string st = "hello";
    string st2 = st.substr(0,3);
    cout << st2;
    cout << "Tutorials" << greeting << array << endl;
    cout << greeting[0] << greeting[1] << endl;
    cout << st << endl;
    cout << st[0];
    st = st + "홍길동";
    cout << st;
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int array[5];
    int n;
    for(n=0;n<5;n++){
        cin >> array[n];
    }
    int s = array[0] + array[2] + array[4];
    cout << s;
}*/

#include <iostream>
using namespace std;
int main(){
    /*int st[10];
    int n;
    for(n=0;n<10;n++){
        cin >> st[n];
    }int k;
    int s = 0;
    for(k=0;k<10;k=k+2){
        s = s + st[k];
    }cout << s <<endl;
    int w;
    int sum = 0;
    for(w=1;w<10;w=w+2){
        sum= sum + st[w];
    }cout << sum;

    int a[100];
    int n;
    int b = 0; 
    for(n=0;n<100 && b!=-1;n++){
    cin >> b;
    a[n] = b;
    }
    cout <<a[n-2]<< ' '<< a[n-3]<<' '<< a[n-4]<<endl; */
    int st[100];
    int n;
    int b = 0;
    for(n=0;n<100 && b!=999;n++){
        cin >> b;
        st[n] =b;
    }
    int k = st[0];
    int t = 0;
    for(t=0;t<n-1;t++){
        if(k>st[t]){
            k=st[t];
        }
    }cout<<k;

}