/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blairjackson
 *
 * Created on 23 August 2018, 12:45 PM
 */

#include <cstdlib>
#include <iostream>

#include "Coin.h"

/*
 * 
 */
enum{
    HEADS, TAILS
};


int main(int argc, char** argv) {

    int flips, heads = 0 , tails = 0;
    bool exit = false;
    Coin coin;

    std::cout << "how many times would you like to flip a coin?\n";
    std::cin >> flips;

    for (int i = 0; i < flips; i++) {
        
        if(coin.toss_coin() == HEADS){
            heads++;
        }else{
            tails++;
        }
    }

    std:: cout << "Heads: " << heads << "\n";
    std::cout << "Tails: " << tails << "\n";


    return 0;
}

