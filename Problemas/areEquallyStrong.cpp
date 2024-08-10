#include <iostream>
using namespace std;

/*bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {

    int MyWeight = yourLeft + yourRight;
    int FriendWeight = friendsLeft + friendsRight;
    if (MyWeight == FriendWeight) {
        int maxWeightMy = max(yourLeft, yourRight);
        int maxWeightFr = max(friendsLeft, friendsRight);
        int minWeightMy = min(yourLeft, yourRight);
        int minWeightFr = min(friendsLeft, friendsRight);
        if (maxWeightFr == maxWeightMy && minWeightFr == minWeightMy) {
            return true;
        }
    }
    return false;
}

/*int main() {
    // Test cases
    cout << std::boolalpha; // To print boolean values as true/false instead of 1/0

    // Test case 1: Both sides equal
    cout << "Test case 1: " << solution(10, 15, 5, 20) << endl; // Expected: true

    // Test case 2: Different total weight
    cout << "Test case 2: " << solution(5, 6, 5, 7) << endl; // Expected: false

    // Test case 3: Same total weight but different distribution
    cout << "Test case 3: " << solution(5, 5, 5, 5) << endl; // Expected: true

    // Test case 4: Different total weight and different distribution
    cout << "Test case 4: " << solution(4, 6, 5, 7) << endl; // Expected: false

    return 0;
}
*/