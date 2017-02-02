// input : num1, nu2, num3, num4, num5
//output: new fraction, double(num2), and messages that tell which function operation is being done
// program that takes in fractions and uses a variety of operation in different ways to get
// the same number and outputs the answer in fraction and decimal form

#include "stdafx.h"	// only for Microsoft Visual Studio C++
#include "Rational.h"   // double quotes = find file in project folder
#include <iostream>     // angle brackets = find file in compiler folder
using namespace std;

// function prototypes
void displayNumbers(double, Rational, Rational, Rational, Rational);

int main(int argc, char* argv[])
{
	//  class    object
	//    |        |
	//    V        V
	double   num1 = 1.5;    // sample definition of a double number
	Rational num2;          // call the constructor with no arguments
	Rational num3(3, 4);     // call the constructor setting num3 to 3/4
	Rational num4(2, 3);     // call the constructor setting num4 to 2/3
	Rational num5;          // call the constructor with no arguments
	displayNumbers(num1, num2, num3, num4, num5);

	// use the add member method
	//num2 = num3.add(num4);    // num3 + num4 = 3/4 + 2/3 = 9/12 + 8/12 = 17/12
	//cout << "num2 = num3.add(num4)" << endl << "num2,display();" << endl;
	//num2.display();           //   using the display( ) member function
	//cout << endl << endl;

	// use the operator+  method
	//num2 = num3.operator+(num4);    // num3 + num4 = 3/4 + 2/3 = 9/12 + 8/12 = 17/12
	//cout << "num3.operator+(num4)" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the + overloaded operator, use the friend operator << to display the result
	//num2 = num3 + num4;              	// num3 + num4 = 3/4 + 2/3 = 9/12 + 8/12 = 17/12
	//cout << "num2 = num3 + num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the + overloaded operator, use the friend operator << to display the result
	//num5 = num3 += num4;              	// num3 + num4 = 3/4 + 2/3 = 9/12 + 8/12 = 17/12
	//cout << "num5 = num3 += num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);



	 //use the divide member method
	num2 = num3.divide(num4);    // num3 + num4 = 3/4 / 2/3 = 3/4 * 3/2 = 9/8
	cout << "num2 = num3.divide(num4)" << endl << "num2,display();" << endl;
	num2.display();           //   using the display( ) member function
	cout << endl << endl;
	
	// use the operator/  method
	num2 = num3.operator/(num4);    // num3 + num4 = 3/4 + 2/3 = 9/8
	cout << "num3.operator/(num4)" << endl;
	displayNumbers(num1, num2, num3, num4, num5);

	// use the / overloaded operator, use the friend operator << to display the result
	num2 = num3 / num4;              	// num3 + num4 = 3/4 / 2/3 = 3/4 *3/2 = 9/8
	cout << "num2 = num3 / num4" << endl;
	displayNumbers(num1, num2, num3, num4, num5);

	// use the / overloaded operator, use the friend operator << to display the result
	num5 = num3 /= num4;              	// num3 + num4 = 3/4 / 2/3 = 3/4 * 3/2 = 9/8
	cout << "num5 = num3 /= num4" << endl;
	displayNumbers(num1, num2, num3, num4, num5);




	// use the equal member method
	//num2 = num3.equal(num4);    // num3 = num4 = 3/4 = 2/3 = 2/3
	//cout << "num2 = num3.equal(num4)" << endl << "num2,display();" << endl;
	//num2.display();           //   using the display( ) member function
	//cout << endl << endl;

	// use the operator=  method
	//num2 = num3.operator=(num4);    // num3 = num4 = 3/4 = 2/3 = 2/3
	//cout << "num3.operator=(num4)" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the = overloaded operator, use the friend operator << to display the result
	//num2 = num3 = num4;              	// num3 + num4 = 3/4 = 2/3 = 2/3
	//cout << "num2 = num3 = num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the = overloaded operator, use the friend operator << to display the result
	//num5 = num3 == num4;              	// num3 = num4 = 3/4 = 2/3 = 2/3
	//cout << "num5 = num3 = num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);




	// use the multiplication  member method
	//num2 = num3.multiplication(num4);    // num3 + num4 = 3/4 * 2/3 =  6/12
	//cout << "num2 = num3.multiplication(num4)" << endl << "num2,display();" << endl;
	//num2.display();           //   using the display( ) member function
	//cout << endl << endl;

	// use the operator*  method
	//num2 = num3.operator*(num4);    // num3 + num4 = 3/4 + 2/3 = 6/12
	//cout << "num3.operator*(num4)" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the * overloaded operator, use the friend operator << to display the result
	//num2 = num3 * num4;              	// num3 * num4 = 3/4 * 2/3 = 6/12
	//cout << "num2 = num3 * num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the * overloaded operator, use the friend operator << to display the result
	//num5 = num3 *= num4;              	// num3 * num4 = 3/4 + 2/3 = 6/12 
	//cout << "num5 = num3 *= num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);




	// use the minus member method
	//num2 = num3.minus(num4);    // num3 + num4 = 3/4 - 2/3 = 1/12
	//cout << "num2 = num3.minus(num4)" << endl << "num2,display();" << endl;
	//num2.display();           //   using the display( ) member function
	//cout << endl << endl;

	// use the operator-  method
	//num2 = num3.operator-(num4);    // num3 + num4 = 3/4 - 2/3 = 9/12 - 8/12 = 1/12
	//cout << "num3.operator-(num4)" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	 //use the - overloaded operator, use the friend operator << to display the result
	//num2 = num3 - num4;              	// num3 + num4 = 3/4 - 2/3 = 9/12 - 8/12 = 1/12
	//cout << "num2 = num3 - num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);

	// use the - overloaded operator, use the friend operator << to display the result
	//num5 = num3 -= num4;              	// num3 + num4 = 3/4 - 2/3 = 9/12 - 8/12 = 1/12
	//cout << "num5 = num3 -= num4" << endl;
	//displayNumbers(num1, num2, num3, num4, num5);


	num3 = Rational(3, 4);
	cout << "Reset num3 back to 3/4" << endl;
	displayNumbers(num1, num2, num3, num4, num5);

	// convert the Rational number to double 
	cout << "double(num2) = " << double(num2) << endl; // 17/12 = 1.4166
	cout << endl;
	return 0;
}

void displayNumbers(double num1, Rational num2, Rational num3,
	Rational num4, Rational num5)
{
	cout << "num1\t num2\t num3\t num4\t num5\n";
	cout << num1 << "\t " << num2 << "\t " << num3 << "\t "
		<< num4 << "\t " << num5 << endl << endl;
}
