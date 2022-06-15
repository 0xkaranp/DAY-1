#include <string>
#include <fstream>
#include <iostream>


using namespace std;

int main(){

int greetingoption = 2;

switch(greetingoption)
{
 
  case 1:
      cout << "bonjour" <<endl;
  break;

 case 2:
      cout << "hola" <<endl;
  break;

 case 3:
      cout << "holla" <<endl;
  break;


 default:
      cout <<"hello" <<endl;
}

return 0;
}
