#include <iostream>
#include "word_handling.hpp"

using namespace std;

int totalChars;
char userCharGuess;
int totalGuesses = 5;

int main(){
    string wordToGuess = generateWordToGuess();
    totalChars = getTotalChars(wordToGuess);
    string* guessedWord = getGuessedWord(totalChars);
    cout << "********GUESS THE WORD********" << endl;
    while(1){
        cout << "Guesses remaining: " << totalGuesses << endl << endl;
        printGuessedWord(totalChars, guessedWord);
        cout << endl;
        cout << "Your guess: ";
        cin >> userCharGuess;
        for(int i = 0; i < totalChars; i++){
            if(userCharGuess == wordToGuess[i]){
                guessedWord[i] = userCharGuess;
            }
        }
        if(totalGuesses <= 0){
            cout << "No guesses remaining... Game Over." << endl;
            break;
        }
    }
    return 0;
}