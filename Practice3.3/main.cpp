#include <iostream>

using namespace std;

class Car {
	private:
		string carBrand;
		string typeOfCar;
		string color;
	public:
		void setCar(string inputCarBrand, string inputTypeOfCar, string inputColor) {
			carBrand = inputCarBrand;
			typeOfCar = inputTypeOfCar;
			color = inputColor;
		}
		void getInf() {
			cout << "Car: " << carBrand << ", type of the car: " << typeOfCar << ", " << "color: " << color;
		}
		
};


int main() {
	string carBrand;
	string typeOfCar;
	string color;
	
	Car car;
	
	cout << "Enter brand of the car ";
	cin >> carBrand;
	cout << "Enter type of the car ";
	cin >> typeOfCar;
	cout << "Enter the color ";
	cin >> color;
	cout << endl;
	car.setCar(carBrand,typeOfCar,color);
	car.getInf();
	return 0;
}
