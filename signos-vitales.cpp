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




