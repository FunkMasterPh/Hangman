#include <iostream>
#include "word_handling.hpp"

using namespace std;
int totalChars = 0;
char userGuess;

int main(){
    string wordToGuess = generateWordToGuess();
    for(int i = 0; wordToGuess[i] != '\0'; i++){
        totalChars++;
    }
    string* finalWord = new string[totalChars];
    for(int i = 0; i < totalChars; i++){
        finalWord[i] = '_';
    }
    cout << "Guess the word!" << endl;
    while(1){
    for(int i = 0; i < totalChars; i++){
        cout << finalWord[i];
    }
    cout << endl;
        cout << endl;
        cout << "Your guess: " << endl;
        cin >> userGuess;
        for(int i = 0; i < totalChars; i++){
            if(userGuess == wordToGuess[i]){
                finalWord[i] = userGuess;
            }
        }
    }
 
    return 0;
}