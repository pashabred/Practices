#include <iostream>
#include <cmath>

using namespace std;


class Vector {
	private:
		float x1;
		float y1;
		float z1;
		
		float x2;
		float y2;
		float z2;
		
	public:
		void setCoords(float inputX1, float inputY1, float inputZ1, float inputX2, float inputY2, float inputZ2) {
			x1 = inputX1;
			y1 = inputY1;
			z1 = inputZ1;
			
			x2 = inputX2;
			y2 = inputY2;
			z2 = inputZ2;
		}
		
		void getCoords() {
			cout << "x = " << x2 - x1 << ", y = " << y2 - y1 << ", z = " << z2 - z1;
		}
		
		void getLength() {
			cout << "Vector's length is " << sqrt(	pow((x2 - x1),2) + pow((y2 - y1),2) + pow((z2 - z1),2)	);
		}
};


int main() {
	float x1,y1,z1;
	float x2,y2,z2;

	
	cout << "Enter coordinates of the first point: ";
	cin >> x1;
	cin >> y1;
	cin >> z1;
	cout << endl;
	
	cout << "Enter coordinates of the second point: ";
	cin >> x2;
	cin >> y2;
	cin >> z2;
	cout << endl;
	
	Vector v;
	
	v.setCoords(x1,y1,z1,x2,y2,z2);
	
	v.getCoords();
	
	cout << endl;
	
	v.getLength();
	
	cout << endl;
	return 0;
}
