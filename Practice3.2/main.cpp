#include <iostream>
#include <string>

using namespace std;

class Group {
	private:
		string name;
		int numOfStud;
		float aver;
	public:
		void setGroup(string groupName, int groupNumOfStud, float groupAver) {
			name = groupName;
			numOfStud = groupNumOfStud;
			aver = groupAver;
		}
		void getInf() {
			cout << "Group: " << name << endl << "Number of students: " << numOfStud << endl << "Average grade: " << aver << endl;
		}
};

int main() {
	string name;
	int numOfStud;
	float aver;
	cout << "Enter group name: ";
	cin >> name;
	cout << "Enter number of students: ";
	cin >> numOfStud;
	cout << "Enter average grade: ";
	cin >> aver;
	Group group1;
	group1.setGroup(name, numOfStud, aver);
	group1.getInf();
	
	return 0;
}
