/*


*/

#include <stdio.h>
#include <iostream>

#include <unordered_map>
using namespace std;

int main() {

    // Wie lange das array sein soll
    int arrayLen;
    scanf("%d", &arrayLen);

    // Array erstellen
    int array[arrayLen];


    // Alles einlesen und in das array packen 

    for(int i = 0; i < arrayLen ;i++) {
        scanf("%d", &array[i]);
    }


    // alles in ein key-value datenbums
    // das machen wir damit wir alle einzeln hinterlegt haben 
    unordered_map<int, int> unordered_map;


    for(int i : array){
            unordered_map[i]++;
    }

    for(int i : array){
        if(unordered_map[i] == 1) {
            cout << unordered_map[i];
            return 0;
        }
    }
    
}


