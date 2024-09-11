// Stone, Paper, Scissor Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int fun()
{
    static int ch;
    ch++;
    return ch;
}

int fun1()
{
    static int ch2;
    ch2++;
    return ch2;
}

int win()
{
    extern char name[20];
    extern int val;
    cout << name << " wins the game and score is " << val << endl;
    return 0;
}

int lost()
{
    extern int val;
    cout << "You lost the game and score is " << val << endl;
    return 0;
}

int ch;
int ch2;
int val;
int val1;
char name[20];

int main()
{
    while (1)
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "1: Stone \n2: Paper \n3: Scissor\nTotal number of turns = 3\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "It is your turn: " << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "Choice of " << name << " is Stone" << endl;
                break;
            case 2:
                cout << "Choice of " << name << " is Paper" << endl;
                break;
            case 3:
                cout << "Choice of " << name << " is Scissor" << endl;
                break;
            default:
                cout << "Enter a valid move" << endl;
            }

            ch2 = rand() % 3 + 1; // Added +1 to match choices 1, 2, 3
            switch (ch2)
            {
            case 1:
                cout << "Choice of computer is Stone" << endl;
                break;
            case 2:
                cout << "Choice of computer is Paper" << endl;
                break;
            case 3:
                cout << "Choice of computer is Scissor" << endl;
                break;
            default:
                cout << "Enter a valid move" << endl;
            }

            if (ch == 1 && ch2 == 2)
            {
                val1 = fun1();
            }
            else if (ch == 1 && ch2 == 3)
            {
                val = fun();
            }
            else if (ch == 2 && ch2 == 1)
            {
                val = fun();
            }
            else if (ch == 2 && ch2 == 3)
            {
                val1 = fun1();
            }
            else if (ch == 3 && ch2 == 1)
            {
                val1 = fun1();
            }
            else if (ch == 3 && ch2 == 2)
            {
                val = fun();
            }
        }

        if (val > val1)
        {
            win();
            goto end;
        }
        else if (val1 > val)
        {
            lost();
            goto end;
        }
        else if (val1 == val)
        {
            cout << "Draw.\nPlay Again.\n";
        }
    }
end:
    cout << "----------------------";
    return 0;
}