#include<iostream>

using namespace std;


int main(){

// logical operators,if else statement

  int age=70;

  int ageAtLastExam=15;

  bool isnotintoxicated = true;

  if((age>=1) && (age<16))
  {

   cout<<"you can't drive"<<endl;

  } 
  else if(! isnotintoxicated)
  {
   
  cout << "you can't drive"<< endl;

  }
 else if(age>=80 && ((age > 100) || ((age - ageAtLastExam) > 5)))
   {
  
   cout<< "you can't drive"<< endl;

   }
 else
    {

     cout << "you can drive" << endl;

    }

 return 0;
}
