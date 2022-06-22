#include <iostream>
#include <format>
#include <cmath>
using namespace std;

int main() {

	int foot{};
	double inches_height{};
	double weight{};

	cout << "This program will calculate your BMI (Body Mass Index). Please, enter your weight in pounds and height in feet and inches";
	cout << endl;
	cout << " Enter you weight: ";
	cin >> weight;
	cout << "Enter your height (feet): ";
	cin >> foot;
	cout << "Enter your height (inches): ";
	cin >> inches_height;
	cout << endl;

	int inches{ 12 };
	double converting_foot_to_inches = static_cast<double>(foot * inches);
	inches_height += converting_foot_to_inches;
	double BMI_formula = (weight / (pow(inches_height, 2)))*703;

	if (BMI_formula < 18.5) {
		cout << format("Your BMI is {:.2f}. You have underweight.", BMI_formula);
	}

	else if (BMI_formula >= 18.5 && BMI_formula <= 24.9) {
		cout << format("Your BMI is {:.2f}. You have a normal weight. ", BMI_formula);
	}

	else if (BMI_formula > 25 && BMI_formula < 29.9) {
		cout << format("Your BMI is {:.2f}. You have overweight.", BMI_formula);
	}

	else if (BMI_formula < 30) {
		cout << format("Your BMI is {:.2f}. You have obesity.", BMI_formula);
	}

	return 0;
}
