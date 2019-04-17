#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b){
  return a+b;
}
float sum(float a, float b){
  return a+b;
}

int dif(int a, int b){
  return a-b;
}
float dif(float a, float b){
  return a-b;
}

int com(int a, int b){
  return a*b;
}
float com(float a, float b){
  return a*b;
}

float divi(int a, int b){
  try {
    return a/b;
  }
  catch (overflow_error e){
    cout << "u've tried to divide by zero";
  }
}
float divi(float a, float b){
  try {
    return a/b;
  }
  catch (overflow_error e){
    cout << "u've tried to divide by zero";
  }
}


int main(int argc, char const *argv[]) {
  int ia,ib;
  float fa,fb;
  string ans;
  char act;

  cout << "Enter type of the nums (int/float) ";

  cin >> ans;
  if (ans == "int") {
    cout << "Enter first number ";
    cin >> ia;
    cout << "Enter second number ";
    cin >> ib;
    cout << "Enter the action (+-*/) ";
    cin >> act;
    switch (act) {
      case '+':
        cout << sum(ia,ib);
        break;
      case '-':
        cout << dif(ia,ib);
        break;
      case '*':
        cout << com(ia,ib);
        break;
      case '/':
        cout << divi(ia,ib);
        break;
    }
  }
  if (ans == "float") {
    cout << "Enter first number ";
    cin >> fa;
    cout << "Enter second number ";
    cin >> fb;
    switch (act) {
      case '+':
        cout << sum(fa,fb);
        break;
      case '-':
        cout << dif(fa,fb);
        break;
      case '*':
        cout << com(fa,fb);
        break;
      case '/':
        cout << divi(fa,fb);
        break;
    }
  }

  return 0;
}
