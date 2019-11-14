#include <iostream>

using namespace std;

int main(){
  
  int num = 3;
  int res = 0;
  res = num % 2;
  
  if(res == 0){
    cout << "Es par" << endl;
  }
  else{
    cout << "Es impar" << endl;
  }

  return 0;
}
