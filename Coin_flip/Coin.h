/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Coin.h
 * Author: blairjackson
 *
 * Created on 23 August 2018, 12:47 PM
 */

#ifndef COIN_H
#define COIN_H


class Coin {
public:
    Coin();
    Coin(const Coin& orig);
    virtual ~Coin();
    
    int toss_coin();
private:
   
    
};

#endif /* COIN_H */

