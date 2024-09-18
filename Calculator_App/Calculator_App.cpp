#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void hub();
float hub_decision(float a);
float addition(float a, float b);
float subtraction(float a, float b);
float divide(float a, float b);
float multiplication(float a, float b);
float square_root(float a);
float cube_root(float a);
float exponent(float a, float b);
float theroum1(float i, float z);
float theroum2(float i, float z);
float theroum3(float i, float z);
void quiz();

int main()
{
	string name; float num;
	cout << "Please enter your name\n";
	getline(cin >> ws, name);
	cout << "Hello " << name << ", please select the option from the calculaot below:\n"; cout << endl;
	hub();
	cin >> num;
	hub_decision(num);




	return 0;
}
void hub()
{
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Divsion\n";
	cout << "5. Square Roots\n";
	cout << "6. Cube Roots\n";
	cout << "7. Exponents\n";
	cout << "8. Pyrthagorean Theroum\n";
	cout << "9. Exit\n";


}

float hub_decision(float a)
{
	float x, y; char q;
	if (a == 1)
	{
		cout << "Please enter two numbers to add\n";
		cin >> x >> y;

		cout << addition(x, y);
	}
	else if (a == 2)
	{
		cout << "Please enter two numbers to subtract\n";
		cin >> x >> y;
		cout << subtraction(x, y);
	}
	else if (a == 3)
	{
		cout << "Please enter two numbers to multiple\n";
		cin >> x >> y;
		cout << multiplication(x, y);
	}
	else if (a == 4)
	{
		cout << "Please input 2 numbers to divide" << endl << "Your first will be divided by second";
		cin >> x >> y;
		cout << divide(x, y);
	}
	else if (a == 5)
	{
		cout << "Please input a number you would like to take the square root of\n";
		cin >> x;
		cout << square_root(x);

	}
	else if (a == 6)
	{
		cout << "Please input a number you would like to take the cube root of\n";
		cin >> x;
		cout << cube_root(x);
	}
	else if (a == 7)
	{
		cout << "Please enter tye number you want to have raised to an exponent\n";
		cin >> x; cout << endl;
		cout << "Now please enter the number you would like to raise " << x << " to\n";
		cin >> y;
		cout << exponent(x, y);
	}
	else if (a == 8)
	{
		cout << "REMINDER: a^2+b^2=c^2 (c being the hypotneus)\n";
		cout << "Please enter the variable you would like to solve for?\n";
		cin >> q;
		if (q == 'c' || q == 'C')
		{
			cout << "Please enter variable a.\n";
			cin >> x;
			cout << "Please enter varaibale b.\n";
			cin >> y; cout << endl;
			cout << x << "^2" << " + " << y << "^2 = " << theroum1(x, y) << "^2";
		}
		else if (q == 'A' || q == 'a')
		{
			cout << "Please enter variable c.\n";
			cin >> x;
			cout << "Please enter varaibale b.\n";
			cin >> y; cout << endl;
			cout << theroum2(x, y) << "^2" << " + " << y << "^2 = " << x << "^2";
		}
		else if (q == 'B' || q == 'b')
		{
			cout << "Please enter variable c.\n";
			cin >> x;
			cout << "Please enter varaibale b.\n";
			cin >> y; cout << endl;
			cout << y << "^2" << " + " << theroum2(x, y) << "^2 = " << x << "^2";
		}
	
	}

	return a;
}

float addition(float a, float b)
{
	return a + b;
}
float subtraction(float a, float b)
{
	return a - b;
}
float multiplication(float a, float b)
{
	return a * b;
}
float divide(float a, float b)
{
	return a / b;
}
float square_root(float a)
{
	return sqrt(a);
}
float cube_root(float a)
{
	return cbrt(a);
}
float exponent(float a, float b)
{
	return pow(a, b);
}
float theroum1(float i, float z)
{

	return sqrt(pow(i, 2) + pow(z, 2));

}
float theroum2(float i, float z)
{
	return sqrt(pow(i, 2) - pow(z, 2));
}
float theroum3(float i, float z)
{
	return sqrt(pow(i, 2) - pow(z, 2));
}