#include <iostream>
#include <string>

using namespace std;

class car {
private:
	int fuel;
	string brand;
	string color;
	bool WheelDrive;
public:
	void initcar(int f, string b, string c, bool w);
	void printinfo();
};

int main() {
	car HennesseyVenomF5;
	car KoenigseggAgeraRS;
	car BugattiChiron;
	car NissanGTR;

	HennesseyVenomF5.initcar(12, "HennesseyVenomF5", "silver", false);
	KoenigseggAgeraRS.initcar(12, "KoenigseggAgeraRS", "red", false);
	BugattiChiron.initcar(99, "BugattiChiron", "black", false);
	NissanGTR.initcar(23, "NissanGTR", "blue", false);

	HennesseyVenomF5.printinfo();
	KoenigseggAgeraRS.printinfo();
	BugattiChiron.printinfo();
	NissanGTR.printinfo();

}
void car::initcar(int f, string b, string c, bool w) {
	fuel = f;
	brand = b;
	color = c;
	WheelDrive = w;
}
void car::printinfo() {
	cout << "car is " << brand << endl;
	cout << "fuel is " << fuel << endl;
	cout << "color is " << color << endl;
	cout << "do you have 4 Wheel Drive? " << WheelDrive << endl;

}