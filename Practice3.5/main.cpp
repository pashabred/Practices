#include <iostream>

using namespace std;

class Library {
	private:
		int numOfBooks;
	public:
		void setNum(int number) {
			numOfBooks = number;			
		}
		void getInfo() {
			cout << "There are " << numOfBooks << " books";
		}
};

int main(){
	int n;
	Library lib;
	
	cout << "Enter number of the books ";
	cin >> n;
	
	lib.setNum(n);
	
	lib.getInfo();
	cout << endl;
	return 0;
}
