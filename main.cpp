#include <iostream>
#include <ctime>

using namespace std;
int main() {
    // pseudo-random = NOT truly random (but close)

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum) {
        case 1: cout << "You win a Pizza\n";
            break;
        case 2: cout << "You win a sticker\n";
            break;
        case 3:cout << "You win a t-shirt!\n";
            break;
        case 4:cout << "You win a free lunch!\n";
            break;
        case 5:cout << "You win a gift card!\n";
            break;
        default:cout << "Game Over!";
            break;
    }
    return 0;
}
