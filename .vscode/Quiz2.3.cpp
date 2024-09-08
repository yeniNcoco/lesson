#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Carprocon{ //class wide <=>instance wide 
private:
 static int budget;
 double price;
 string model;
 vector<string> pros;
 vector<string> cons;
 vector<int> propoints;
 vector<int> conpoints;
public:
 Carprocon(int budget2){

 }
 void setcar(string makemodel, double price2){
    model = makemodel;
    price = price2;
 }
 void setpro(string pro, int points){
    pros.push_back(pro);
    propoints.push_back(points);
 }
 void setcon(string con, int points){
    cons.push_back(con);
    conpoints.push_back(points);
 }
 void printit(){
    cout<< "Name of the model: " << model <<endl;
    cout<< "Out budget: " << budget<<endl;
    cout<< "The price of this car:  " << price <<endl;
    cout << "The followings are pros of this car"<< endl;
      for (int i =0; i< pros.size(); i++){
       cout << pros[i] << " : " << propoints[i] << endl;
   } cout << "The followings are cons of this car"<< endl; 
   for (int i =0; i< cons.size(); i++){
       cout << cons[i] <<": "<< conpoints[i]<< endl;
   }
}
int sum(vector<int> sum2){
 int summation = 0;
    for (int i =0; i< sum2.size(); i++){
       summation = summation + sum2[i];
   } return summation;

}
void compare(Carprocon c){
   int ctotal = sum(c.getpropoints())-sum(c.getconpoints());
   int ctot2= sum(propoints) - sum(conpoints);
    cout << "The total score of the  " <<c.getmodel() << " is  "<< ctotal<<endl;
    cout << "The total score of the  " << model <<  " is  "<< ctot2<<endl;
   if(ctotal> ctot2){
    cout << c.getmodel() << "is recommanded because the total point of this car is larger than "<< model << endl;
   }else{
    cout << model << " is recommanded because the total point of this car is larger than "<< c.getmodel() << endl;
   }
}
 string getmodel(){
    return model;
 }
 vector<int> getpropoints(){
    return propoints;
 }
 vector<int> getconpoints(){
    return conpoints;
 }
};
int Carprocon:: budget = 50000;
int main(){
 Carprocon car1(50000), car2(50000); //instances
 car1.setcar("P", 40000);
 car2.setcar("L", 38000);
 //max score of pro and con  is 5 and the min score is 1
 car1.setpro("Fuel efficiency is good", 4);
 car1.setpro("Design is pretty ", 4);
 car1.setpro("material is sturdy", 4);
 car2.setpro("Cheaper than P model", 5);
 car2.setpro("steady seller", 2);
 car2.setpro("It's a Domestic car", 2);

 car1.setcon("Uses Disel Fuel", 3);
 car1.setcon("expensive", 2);
 car2.setcon("second hand car ", 3);
 car2.setcon("Out dated design ", 1);
 
 cout << "Info of car1 " <<endl;
 car1.printit();
 cout << endl;
 cout << "Info of car2 " <<endl;
 car2.printit();
 cout << endl;
 
 car1.compare(car2);

 

}