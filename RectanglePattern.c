#include <iostream>
using namespace std;


 // Rectangle pattern
 int main(){
     int rows,col;
     cin >>rows>>col;

     for(int i =0 ; i<rows;i++){
         for(int j = 0;j<col;j++){
             cout<<"*";
         }
         cout<< endl;
     }
 }
