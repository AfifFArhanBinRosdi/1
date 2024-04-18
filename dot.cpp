/*
	Program Purpose: Convert Temperature between Celsius and Fahrenheit or vice versa.
	Programmer	   : Firdaus Azimi Bin Syahrulnizam
	Date 		   : 19/04/2024
*/

#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    double temperature;
    char scale;

    cout << "Enter Temperature: ";
    cin >> temperature;
    cout << "Enter Scale (C/F): ";
    cin >> scale;

    if (scale == 'C' || scale == 'c')
    {
        double convertedTemp = celsiusToFahrenheit(temperature);
        cout << "Converted Temperature: " << convertedTemp << "F" << endl;
    }
    else if (scale == 'F' || scale == 'f')
    {
        double convertedTemp = fahrenheitToCelsius(temperature);
        cout << "Converted Temperature: " << convertedTemp << "C" << endl;
    }
    else
    {
        cout << "Invalid scale entered!" << endl;
    }

    return 0;
}
