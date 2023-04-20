#include <iostream>
using namespace std;
bool Apalindromo(const int array[], int t){
  int td = t - 1;
  for (int i = 0; i <= td/2; i++){
      if(array[i] != array[td - i] ){
        return false;
      }
      else{
        return true;
      }
  }  
}

int main(){
  
}

///Recursiva


