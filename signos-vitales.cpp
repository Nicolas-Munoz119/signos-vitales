#include <iostream>
using namespace std;

double farenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}
int main () {
    double farenheit;
   std:: cout << "Ingrese la temperatura en farenheit:";
   std:: cin >> farenheit;
   std:: cout << "La temperatura en Celsius es:" << farenheitACelsius(farenheit) << "grados C" << endl;

    return 0;
}