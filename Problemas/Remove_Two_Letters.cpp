/*#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int step = 0; step < cases; step++) {
        int large;
        cin >> large;
        string original;
        cin >> original;

        unordered_map<string, int> cadenas;
        int pointer1 = 0;
        int pointer2 = pointer1 + 1;

        while (pointer2 < original.size()) {
            string newOriginal = original;
            newOriginal.erase(pointer1, 2);
            cadenas[newOriginal]++;
            pointer1++;
            pointer2++;
        }


        cout << cadenas.size() << endl;
    }

    return 0;
}
*/