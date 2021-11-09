#ifndef WORDHANDLING_H
#define WORDHANDLING_H

using namespace std;

string generateWordToGuess();
int getTotalChars(string wordToGuess);
string* getGuessedWord(int totalChars);
void printGuessedWord(int totalChars, string* guessedWord);

#endif