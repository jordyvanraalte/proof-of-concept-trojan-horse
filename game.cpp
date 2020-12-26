//
// Created by Jordy on 12/26/2020.
//

#include "game.h"

void Game::start() {
    int number = rand() % 1000 + 1;
    int tries = 1;
    bool done = false;

    while(!done)
    {
        std::cout << "Please enter a guess.\n";
        int guess;
        std::cin >> guess;

        if(found(guess, number)) {
            done = true;
        }
        tries++;
    }
    std::cout << "Well done, you have found the guess.";
}

bool Game::found(int guess, int number) {
    if(guess == number) {
        return true;
    }
    else if(guess > number) {
        std::cout << "Guess was higher than number\n";
        return false;
    }
    else {
        std::cout << "Guess was lower than number\n";
        return false;
    }
}
