#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

char myname[5][5] ={{'d','e','r,'e','k'},
                    {'b','a','n','a','s'}};


cout<<"2nd letter in 2nd array" << myname[1][1] << endl;

myname[0][2] = 'e';

cout << "new value" <<myname[0][2] <<endl;

for(int i=1; i<=10; i++){
    

cout << i <<endl;

}
return 0;		
}

