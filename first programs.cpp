#include <iostream>
  
using namespace std;

int main(){


cout<<"hello world"<< endl;


const double pi=3.1415676;   // this value cannot be changed by ading const

char mgrade='A';

bool ishappy= true;

int myage=18;

float favno=2.727878;

double favnum=1.676791871;

cout<<"size of int"<< sizeof(myage)<<endl;     // showing how many bytes occupied
 

cout<<"size of float"<<sizeof(favno)<<endl;    // showing how many bytes occupied
 

cout<<"size of double"<<sizeof(favnum)<<endl;   // showing how many bytes occupied

int largest=2147483647;

cout<<"largest int"<<largest<<endl;6 

cout<<"5 + 2="<<5+266<<endl;

cout<<"5 - 2="<<5-2<<endl;

cout<<"5 * 2="<<5*2<<endl;

cout<<"5 / 2="<<5/2<<endl;6

int five=5;

cout << "5++" <<five++ <<endl;
cout << "--5" <<five++ <<endl;
cout << "5--" <<five++ <<endl;
cout << "--5" <<five++ <<endl;

 //order of operation
cout <<" 1 + 2 - 3 * 2= "<<1 + 2 -3 * 2 <<endl;   //output is diffrent

cout <<" (1 + 2 - 3 )* 2= "<<(1 + 2 -3) * 2 <<endl;  //output is diffrent

cout<<" 4 / 5 = " << 4 /5 <<endl;           // output will be zero

cout<<" 4 / 5 = " <<(float) 4 /5 <<endl;    //output in point




return 0;


}