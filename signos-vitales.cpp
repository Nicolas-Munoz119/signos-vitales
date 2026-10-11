#include <iostream>

std::string clasificarFrecuenciaCardiaca(int latidos) {
    if (latidos < 60) {
        return "bradicardia";
    } else if (latidos <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}


int main (){
    return 0;
}

