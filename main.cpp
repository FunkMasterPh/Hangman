#include <iostream>
#include <string.h>
#include "word_handling.hpp"

using namespace std;

int totalChars;
char userCharGuess;
int totalGuesses = 8;
bool correctGuess;
string mysteryWord;

int main(){
    string wordToGuess = generateWordToGuess();
    totalChars = getTotalChars(wordToGuess);
    for(int i = 0; i < totalChars; i++){
        mysteryWord[i] = '_';
    }
    cout << "********GUESS THE WORD********" << endl;
    while(1){
        correctGuess = false;
        cout << "Guesses remaining: " << totalGuesses << endl << endl;
        printMysteryWord(totalChars, mysteryWord);
        printMysteryWord(totalChars, wordToGuess);
        cout << endl;
        cout << "Your guess: ";
        cin >> userCharGuess;
        for(int i = 0; i < totalChars; i++){
            if(userCharGuess == wordToGuess[i]){
                mysteryWord[i] = userCharGuess;
                correctGuess = true;
            }
        }
        if(correctGuess == false){
            totalGuesses--;
        }
        //if(totalGuesses <= 0){
        //    cout << "No guesses remaining... Game Over." << endl;
        //    break;
        //}
        if(wordToGuess.compare(mysteryWord) == 0){
            cout << "Congratulations, you guessed the word correctly!" << endl;
            break;
        }else{
            cout << "nope" << endl;
        }
    }
    return 0;
}