#include <iostream>
#include <cmath>

int solution(int n) {
    int area = 1;
    for (int i = 1; i < n; i++) {
        area += pow(2, i+1);
    }
    return area;
}

/*int main() {
    int sides;
    std::cout << "Ingrese el número de lados del polígono: ";
    std::cin >> sides;

    int totalArea = solution(sides);
    std::cout << "El área del polígono con " << sides << " lados es: " << totalArea << std::endl;

    return 0;
}*/
