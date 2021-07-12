//calculator
//Wow
#include <iostream>
using namespace std;
int main(){
  int num1;
  int num2;
  string op;
  cout << "enter first number" << endl;
  cin >> num1;
  cout << "enter second number" << endl;
  cin >> num2;
  cout << "enter operator" << endl;
  cin >> op;
  if(op == "Add"){
    cout << num1 + num2;
  }
  else if(op == "Subtract"){
    cout << num1 - num2;
  }
  else if(op == "Multiple"){
    cout << num1 * num2;
  }
  else if(op == "Divide"){
      cout << num1 / num2;
    }
  else{
    cout << "Invalid operator please check your spelling" << endl;
  }
  return 0;
}
