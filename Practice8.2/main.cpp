#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  ofstream fout("file.txt");
  string s;
  cout << "Type '....' to stop" << '\n';
  cin >> s;
  while (s != "....") {
    cin >> s;
    fout << s;
  }
  fout.close();
  return 0;
}
