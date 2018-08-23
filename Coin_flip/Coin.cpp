/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Coin.cpp
 * Author: blairjackson
 * 
 * Created on 23 August 2018, 12:47 PM
 */
#include <cstdlib>
#include <iostream>

#include "Coin.h"

Coin::Coin() {
}

Coin::Coin(const Coin& orig) {
}

Coin::~Coin() {
}

int Coin::toss_coin(){
    int side;
    side = rand()%2;
    return side;
}