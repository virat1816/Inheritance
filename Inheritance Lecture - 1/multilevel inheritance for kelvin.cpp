#include <iostream>

using namespace std;


class P {
public:
    int temperature; 
public:
    P(int temp) {
        temperature = temp;
    }
};


class Q : public P {
public:
    Q(int temp) : P(temp) {}

    
    int toFahrenheit() {
        return (temperature * 9/5) + 32;
    }
};


class R : public Q {
public:
    R(int temp) : Q(temp) {}

    
    int toKelvin() {
        return (toFahrenheit() + 459.67) * 5/9;
    }
};

int main() {
    int celsiusTemp;
    cout << "Enter temperature in Celsius: ";
    cin >> celsiusTemp;

    R objR(celsiusTemp);

    int fahrenheitTemp = objR.toFahrenheit();
    cout << "Temperature in Fahrenheit: " << fahrenheitTemp << endl;

    int kelvinTemp = objR.toKelvin();
    cout << "Temperature in Kelvin: " << kelvinTemp << endl;

    return 0;
}
