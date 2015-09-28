//
//  main.c
//  popbottle
//
//  Created by Arsalan Vakili on 2015-06-12.
//  Copyright (c) 2015 Arsalan Vakili. All rights reserved.


// I used recursion to do the following problem.

#include <stdio.h>

int popsPurchase(int moneySpent);
int popsBackFromEmptyBottles(int bottles);
int popsBackfromCapBottles (int bottles);
void lightHouseRecyclingProgram();



int main(int argc, const char * argv[]) {
   
    lightHouseRecyclingProgram();
    
    return 0;
}


void lightHouseRecyclingProgram(){
    
    printf("Welcome to lightHouse recycling program\n");
    printf("Please Enter the amount of money you would like to purchase pops?");
    int investment;
    scanf("%d", &investment);
    int popsBought= popsPurchase(investment);
    printf("You have puchased %d bottles\n", popsBought);
    int emptyBottles= popsBought;
    int popsRedemedFromEmptyBottles= popsBackFromEmptyBottles(emptyBottles);
    printf("You have obtained %d pops from your empty botlles recycling\n", popsRedemedFromEmptyBottles);
    int popsRedemedFromBottleCap= popsBackfromCapBottles(popsBought);
    printf("You have obtained %d pops from you botlle caps recycling\n", popsRedemedFromBottleCap);
    int remainderOfRedmeedFromEmptyBottles= investment % 2;
    int remainderOfRedmeedFromCapBottles= investment % 4;
    if (remainderOfRedmeedFromEmptyBottles != 0 || remainderOfRedmeedFromCapBottles != 0) {
        printf("You have %d emptybottles remaining and %d caps remaining.\n", remainderOfRedmeedFromEmptyBottles, remainderOfRedmeedFromCapBottles);
        printf("Would you like to buy more pops to use you existing empty bottles to redeem more free Pops?\n");
        printf("Press Y for yes and N for No: \n");
        char answer;
        scanf("%s",&answer);
        if (answer == 'Y') {
            printf("We are happy to sell you more pops");
            lightHouseRecyclingProgram();
        }
        else
            printf("Thank you for shopping, see you next time");
        
    }
    
}


int popsPurchase(int moneySpent){
    int popsBought;
    popsBought= moneySpent/2;
    return  popsBought;
}

int popsBackFromEmptyBottles(int bottles){
    int emptyBottlesRecycle;
    emptyBottlesRecycle= bottles/2;
    return  emptyBottlesRecycle;
}

int popsBackfromCapBottles (int bottles){
    int emptyBottleCapRecycle;
    emptyBottleCapRecycle= bottles / 4;
    return  emptyBottleCapRecycle;
}
