
#include <iostream>
using namespace std;
/*int solution(int min1, int min2_10, int min11, int s) {
    int totalMin=0;
    s-=min1;
    if (s>=0){
        totalMin++;
    }
    while (totalMin<10&&s>=0){
        int check=s;
        if (check-min2_10>=0){
            s-=min2_10;
            totalMin++;
        }else {
            break;
        }
    }
if (totalMin==10){
    while (s>=0){
        int check=s;
        if (check-min11>=0){
            s-=min11;
            totalMin++;
        }else {
            break;
        }
    }
}


    return totalMin;
}


/*int main() {
    int min1 = 1;    // Minutos requeridos para el primer período
    int min2_10 = 2; // Minutos requeridos para los siguientes 9 períodos
    int min11 = 1;   // Minutos requeridos para los períodos restantes
    int s = 6;      // Minutos disponibles en total

    int totalMin = solution(min1, min2_10, min11, s);
    std::cout << "Total de minutos necesarios: " << totalMin << std::endl;

    return 0;
}*/