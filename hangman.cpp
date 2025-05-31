#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "code";
    string guessed(word.size(), '_');
    int tries = 6;
    char guess;

    while (tries > 0 && guessed != word) {
        cout << "Word: " << guessed << "\nGuess a letter: ";
        cin >> guess;

        bool correct = false;
        for (size_t i = 0; i < word.size(); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                correct = true;
            }
        }
        if (!correct) tries--;

        cout << (correct ? "Correct!\n" : "Wrong!\n");
        cout << "Tries left: " << tries << "\n\n";
    }

    if (guessed == word)
        cout << "You won! The word was: " << word << endl;
    else
        cout << "You lost! The word was: " << word << endl;

    return 0;
}
