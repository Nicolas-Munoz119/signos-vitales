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

std::string clasificarFrecuenciaCardiaca(int latidos) {
    if (latidos < 60) {
        return "bradicardia";
    } else if (latidos <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

int main (){
    return 0;
}
