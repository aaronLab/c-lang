//
//  main.c
//  ConstantAndVariable
//
//  Created by Aaron Lee on 2021/11/17.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int money;
    money = 3000;
    printf("You have $%d.\n", money);
    
    money += 3000;
    
    printf("You have $%d.\n", money);
    
    return 0;
}
