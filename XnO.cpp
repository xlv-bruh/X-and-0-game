#include <iostream>
using namespace std;
bool gameover;
char choice[10] = { 'o','1','2','3','4','5','6','7','8','9' };

void Draw() {
    system("cls");
    const int WIDTH = 60;
    const int HEIGHT = 30;

    sizeof(choice[0]);
    sizeof(choice[1]);


    cout << endl;
    cout << endl;



    cout << "     |     |     " << endl;
    cout << "  " << choice[1] << "  |  " << choice[2] << "  |  " << choice[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << choice[4] << "  |  " << choice[5] << "  |  " << choice[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << choice[7] << "  |  " << choice[8] << "  |  " << choice[9] << endl;

    cout << "     |     |     " << endl << endl;
}


void InputX() {
    gameover = false;
    int numberX;

    cout << "nr for X: ";
    cin >> numberX;

    if (choice[numberX] != 'O') {
        choice[numberX] = 'X';
    }
    else if (isdigit(choice[numberX]) == false) {
        cout << "This slot is taken!" << endl;
        cin >> numberX;
        if (choice[numberX] != 'O') {
            choice[numberX] = 'X';
        }
    }
}

void InputY() {
    int numberO;


    cout << "nr for O: ";
    cin >> numberO;
    if (choice[numberO] != 'X') {
        choice[numberO] = 'O';
    }
    else if (isdigit(choice[numberO]) == false) {
        cout << "This slot is taken!" << endl;
        cin >> numberO;
        if (choice[numberO] != 'X') {
            choice[numberO] = 'O';
        }
    }
}



bool tie = false;

void Win() {
    if ((choice[1] == choice[2] && choice[2] == choice[3]) || (choice[4] == choice[5] && choice[5] == choice[6]) || (choice[7] == choice[8] && choice[8] == choice[9]) || (choice[1] == choice[4] && choice[4] == choice[7]) || (choice[2] == choice[5] && choice[5] == choice[8]) || (choice[3] == choice[6] && choice[6] == choice[9]) || (choice[1] == choice[5] && choice[5] == choice[9]) || (choice[3] == choice[5] && choice[5] == choice[7])) {
        cout << "You won";
        gameover = true;
    }
    else if ((choice[1] == 'X' || choice[1] == 'O') && (choice[2] == 'X' || choice[2] == 'O') && (choice[3] == 'X' || choice[3] == 'O') && (choice[4] == 'X' || choice[4] == 'O') && (choice[5] == 'X' || choice[5] == 'O') && (choice[6] == 'X' || choice[6] == 'O') && (choice[7] == 'X' || choice[7] == 'O') && (choice[8] == 'X' || choice[8] == 'O') && (choice[9] == 'X' || choice[9] == 'O')) {
        cout << "Its a tie" << endl;
        gameover = true;
        tie = true;
    }
}


int main() {
    while (!gameover)
    {
        Draw();
        InputX();
        Draw();
        Win();
        if (gameover == true && tie == false)
        {
            cout << " X" << endl;
            break;
        }
        else if (gameover == true && tie == true) {
            break;
        }

        InputY();
        Draw();
        Win();
        if (gameover == true && tie == false)
        {
            cout << " O" << endl;
            break;
        }
        else if (gameover == true && tie == true) {
            break;
        }

    }


    if (gameover == true)
    {
        system("pause");
    }
    return 0;

}