#include "Dice.h"

int Dice::roll(int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, size);
    int random_num = dis(gen);

    return random_num;
}