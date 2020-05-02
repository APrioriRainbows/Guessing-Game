#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int randomNum;
    int minRange,maxRange;
    int userGuess;
    int remainingGuesses;
    bool hasGuessedNum;
    srand(time(0));
    randomNum = rand() % 100;
    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;
    minRange = 1;
    maxRange = 100;
    remainingGuesses = 5;
    hasGuessedNum = false;
   while(remainingGuesses > 0 && hasGuessedNum == false) {
       cout<<endl;
       cout << "Range:[" << minRange << "-" << maxRange << "], Number of guesses left: " << remainingGuesses<< endl;
       cout << "Your guess: ";
       cin >> userGuess;
       if (remainingGuesses > 1) {
           if (userGuess < randomNum) {
               minRange = userGuess + 1;
               cout << "Wrong! My number is bigger."<<endl;
               remainingGuesses--;
           } else if (userGuess > randomNum) {
               maxRange = userGuess - 1 ;
               cout << "Wrong! My number is smaller." << endl;
               remainingGuesses--;
           } else if (userGuess == randomNum) {
               cout << "Congrats! You guessed my number in " << remainingGuesses << " guesses!";
               hasGuessedNum = true;
           }
       }
       else{
           if (userGuess == randomNum) {
               cout << "Congrats you guessed my number in " << remainingGuesses << " guesses!";
               hasGuessedNum = true;
           }
               else {
               cout << "Out of guesses! My number is " << randomNum;
               hasGuessedNum = true;
           }
       }
   }
}