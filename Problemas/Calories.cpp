#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int miles(int calories, int chocolate) {
    return pow(2, chocolate - 1) * calories;
}

int greddy(std::vector<int> calorie, int chocolate) {
    if (chocolate == 0) {
        return 0;
    } else {
        return miles(calorie[chocolate - 1], chocolate) + greddy(calorie, chocolate - 1);
    }
}

long marcsCakewalk(std::vector<int> calorie) {
    sort(calorie.rbegin(), calorie.rend());
    int chocolates = calorie.size();
    int totalMiles = greddy(calorie, chocolates);
    return totalMiles;
}


/*int main() {
    std::vector<int> calories = {7, 4, 9,6}; // Aquí coloca tus valores de calorías
    long result = marcsCakewalk(calories);
    std::cout << "Resultado: " << result << std::endl;
    return 0;
}*/
