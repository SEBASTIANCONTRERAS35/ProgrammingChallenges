/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    std::cin >> n;
    std::vector<int> beauty(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> beauty[i];
    }

    int max_beauty = *max_element(beauty.begin(), beauty.end());
    int min_beauty = *min_element(beauty.begin(), beauty.end());
    int max_diff = max_beauty - min_beauty;

    // Contar cuántas veces aparece el mínimo y el máximo
    int count_min = std::count(beauty.begin(), beauty.end(), min_beauty);
    int count_max = std::count(beauty.begin(), beauty.end(), max_beauty);

    if (max_diff == 0) {
        // Si todos los elementos son iguales, elige cualquier par
        std::cout << 0 << " " << (n * (n - 1)) / 2 << std::endl;
    } else {
        std::cout << max_diff << " " << count_min * count_max << std::endl;
    }

    return 0;
}*/