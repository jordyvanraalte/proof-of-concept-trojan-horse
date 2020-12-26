//
// Created by Jordy on 12/26/2020.
//

#ifndef PROOF_OF_CONCEPT_TROJAN_HORSE_GAME_H
#define PROOF_OF_CONCEPT_TROJAN_HORSE_GAME_H
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
class Game {

public:
    void start();

private:
    bool found(int guess, int number);
};


#endif //PROOF_OF_CONCEPT_TROJAN_HORSE_GAME_H
