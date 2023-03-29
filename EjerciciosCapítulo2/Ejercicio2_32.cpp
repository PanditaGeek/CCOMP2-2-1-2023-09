#include <iostream>
using namespace std;

int main(){

  int edad;
  cout << "Ingrese su edad: " << endl;
  cin >> edad;

  float MHR1 = 220 - edad;

  float MHR2 = 208 - 0.7*edad;

  float MHR3 = 207 - 0.7*edad;
  
  float MHR4 = 211 - 0.64*edad;

  float max, min;

  if(MHR1 < MHR2 && MHR1 < MHR3 && MHR1 < MHR4)

  min = MHR1;

  if(MHR1 > MHR2 && MHR1 > MHR3 && MHR1 > MHR4)

  max = MHR1;

  

  if(MHR2 < MHR1 && MHR2 < MHR3 && MHR2 < MHR4)

  min = MHR2;

  if(MHR2 > MHR1 && MHR2 > MHR3 && MHR2 > MHR4)

  max = MHR2;

  

  if(MHR3 < MHR2 && MHR3 < MHR1 && MHR3 < MHR4)

  min = MHR3;

  if(MHR3 > MHR2 && MHR3 > MHR1 && MHR3 > MHR4)

  max = MHR3;

  

  if(MHR4 < MHR2 && MHR4 < MHR3 && MHR4 < MHR1)

  min = MHR4;

  if(MHR4 > MHR2 && MHR4 > MHR3 && MHR4 > MHR1)

  max = MHR4;
    
  cout << "El MRH máximo es: " << max << endl;
  cout << "El MRH mínimo es: " << min << endl;
  
    return 0;

}

