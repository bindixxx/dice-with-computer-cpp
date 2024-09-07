#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned int>(time(0)));
    int playerRoll = rand() % 6 + 1;
    int computerRoll = rand() % 6 + 1;

    cout << "Бросок для определения первого ходящего:" << endl;
    cout << "Пользователь выбросил: " << playerRoll << endl;
    cout << "Компьютер выбросил: " << computerRoll << endl;

    string firstPlayer;
    if (playerRoll > computerRoll) {
        firstPlayer = "Пользователь";
    }
    else if (computerRoll > playerRoll) {
        firstPlayer = "Компьютер";
    }
    else {
        cout << "Ничья при определении первого ходящего! Повторите бросок." << endl;
        return 1;
    }

    cout << firstPlayer << " ходит первым!" << endl << endl;

    int playerTotalScore = 0;
    int computerTotalScore = 0;

    for (int i = 0; i < 4; ++i) {
        cout << "Раунд " << i + 1 << endl;

        int computerRoll1 = rand() % 6 + 1;
        int computerRoll2 = rand() % 6 + 1;
        int computerScore = computerRoll1 + computerRoll2;
        computerTotalScore += computerScore;

        cout << "Компьютер бросил: " << endl;
        if (computerRoll1 == 1) cout << "[     ]\n[  *  ]\n[     ]" << endl;
        if (computerRoll1 == 2) cout << "[*    ]\n[     ]\n[    *]" << endl;
        if (computerRoll1 == 3) cout << "[*    ]\n[  *  ]\n[    *]" << endl;
        if (computerRoll1 == 4) cout << "[*   *]\n[     ]\n[*   *]" << endl;
        if (computerRoll1 == 5) cout << "[*   *]\n[  *  ]\n[*   *]" << endl;
        if (computerRoll1 == 6) cout << "[*   *]\n[*   *]\n[*   *]" << endl;

        if (computerRoll2 == 1) cout << "[     ]\n[  *  ]\n[     ]" << endl;
        if (computerRoll2 == 2) cout << "[*    ]\n[     ]\n[    *]" << endl;
        if (computerRoll2 == 3) cout << "[*    ]\n[  *  ]\n[    *]" << endl;
        if (computerRoll2 == 4) cout << "[*   *]\n[     ]\n[*   *]" << endl;
        if (computerRoll2 == 5) cout << "[*   *]\n[  *  ]\n[*   *]" << endl;
        if (computerRoll2 == 6) cout << "[*   *]\n[*   *]\n[*   *]" << endl;

        cout << "Очки компьютера за бросок: " << computerScore << endl;

        int playerRoll1 = rand() % 6 + 1;
        int playerRoll2 = rand() % 6 + 1;
        int playerScore = playerRoll1 + playerRoll2;
        playerTotalScore += playerScore;

        cout << "Пользователь бросил: " << endl;
        if (playerRoll1 == 1) cout << "[     ]\n[  *  ]\n[     ]" << endl;
        if (playerRoll1 == 2) cout << "[*    ]\n[     ]\n[    *]" << endl;
        if (playerRoll1 == 3) cout << "[*    ]\n[  *  ]\n[    *]" << endl;
        if (playerRoll1 == 4) cout << "[*   *]\n[     ]\n[*   *]" << endl;
        if (playerRoll1 == 5) cout << "[*   *]\n[  *  ]\n[*   *]" << endl;
        if (playerRoll1 == 6) cout << "[*   *]\n[*   *]\n[*   *]" << endl;

        if (playerRoll2 == 1) cout << "[     ]\n[  *  ]\n[     ]" << endl;
        if (playerRoll2 == 2) cout << "[*    ]\n[     ]\n[    *]" << endl;
        if (playerRoll2 == 3) cout << "[*    ]\n[  *  ]\n[    *]" << endl;
        if (playerRoll2 == 4) cout << "[*   *]\n[     ]\n[*   *]" << endl;
        if (playerRoll2 == 5) cout << "[*   *]\n[  *  ]\n[*   *]" << endl;
        if (playerRoll2 == 6) cout << "[*   *]\n[*   *]\n[*   *]" << endl;

        cout << "Очки пользователя за бросок: " << playerScore << endl;

        cout << "Промежуточный результат: Пользователь " << playerTotalScore
            << " - Компьютер " << computerTotalScore << endl << endl;
    }

    cout << "Итоговый счет: Пользователь " << playerTotalScore
        << " - Компьютер " << computerTotalScore << endl;
    if (playerTotalScore > computerTotalScore) {
        cout << "Пользователь выиграл!" << endl;
    }
    else if (computerTotalScore > playerTotalScore) {
        cout << "Компьютер выиграл!" << endl;
    }
    else {
        cout << "Ничья!" << endl;
    }
    return 0;
}
