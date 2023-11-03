/*
Adding two numbers of the array to get the target value
*/

#include <stdio.h>
#include <array>
#include <iostream>

int main() {

    printf("Test");


    // Anzahl der Zahlen welche übergeben werden
    int numberCount;
    scanf("%d", &numberCount);

    // Zielwert welcher erreicht werden soll
    int target;
    scanf("%d", &target);

    // Zahlenarray einlesen

    int numbers[numberCount];

    for(int i = 0; i < numberCount; i++) {
        scanf("%d", &numbers[i]);
    }
    

    /*
        Einfache umsetzung mit Quadratischer Komplexität
    */

   bool numbersFound = false;
    
    for(int numberI: numbers) {
        for(int numberJ: numbers) {
            if(numberI + numberJ == target) {
                std::cout << numberI << " ";
                std::cout << numberJ << " ";
                numbersFound = true;
            }
        }
        
        if(numbersFound) {
            break;
        }
    }

    if(!numbersFound) {
        printf("impossible");
    }

    return 0;
}