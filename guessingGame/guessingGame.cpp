#include <iostream>
using namespace std;

int main() {
    cout << "Think of a number between 1 and 100 (inclusive)." << endl;
    cout << "I will try to guess it in at most 7 questions." << endl;
    cout << "Answer with '>' if your number is greater, '<' if it's smaller, and '=' if I guessed it." << endl;

    int low = 1, high = 100, attempts = 0;

    while (low <= high && attempts < 7) {
        int guess = low + (high - low) / 2; // Среднее значение
        attempts++;

        cout << "Is your number " << guess << "? (>, <, =): ";
        char response;
        cin >> response;

        if (response == '=') {
            cout << "I guessed your number in " << attempts << " attempt(s)! It's " << guess << "." << endl;
            return 0;
        }
        else if (response == '>') {
            low = guess + 1; // Искомое число больше
        }
        else if (response == '<') {
            high = guess - 1; // Искомое число меньше
        }
        else {
            cout << "Invalid response. Please enter '>', '<', or '='." << endl;
            attempts--; // Не считать некорректный ответ
        }
    }

    cout << "I couldn't guess your number within 7 attempts. Are you sure you followed the rules?" << endl;
    return 0;
}
