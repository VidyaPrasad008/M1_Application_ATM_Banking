/**
 * @file feature.h
 * @author Vidya Prasad
 * @brief 
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef FEATURE_H_
#define FEATURE_H_


#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <math.h>


/**
 * @brief declared function for login
 * 
 */

    int option;
    //float balance = 15000.00;
    int choose;

   // bool again = true;

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();



#endif

/**
 * @brief end of function declaration
 * 
 */
