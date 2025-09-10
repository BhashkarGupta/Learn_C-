// 1. Define a class Game with an array of 5 int variables as instance member to store the score of
// each of 5 rounds. Provide method to setScore(int round, int score). Also provide method
// getScore(int round).
// 2. In question 6, derive a class GameResult with an array of 5 int type variables to store the result
// in each round. Result value is 2 for win, 0 for loose and 1 for draw. Provide methods to set Result
// and getResult. Write method to calculate final result of the game.

#include <iostream>
using namespace std;

class Game
{
private:
    int gameResult[5];

public:
    void setScore(int round, int score)
    {
        gameResult[round - 1] = score;
    }
    int getScore(int round)
    {
        return gameResult[round - 1];
    }
};

class GameResult : public Game
{
private:
    void printMessage()
    {
        cout << "Use: \n'w' for Win\n'd' for Draw\n'l' for Loose\n";
    }
    int point(char c)
    {
        if (c == 'w' || c == 'W')
        {
            return 2;
        }
        if (c == 'd' || c == 'D')
        {
            return 1;
        }
        if (c == 'l' || c == 'L')
        {
            return 0;
        }
    }

public:
    void setResult(int round)
    {
        cout << "please enter result of the round\n";
        printMessage();
        char r;
        cin >> r;
        setScore(round, point(r));
    }
    void setResult()
    {
        cout << "Please Enter the result of all 5 game\n";
        printMessage();
        for (int i = 1; i <= 5; i++)
        {
            char r;
            cin >> r;
            setScore(i, point(r));
        }
    }
    int getTotalScore()
    {
        int score = 0;
        for (int i = 1; i <= 5; i++)
        {
            score += getScore(i);
        }
        return score;
    }
};

int main()
{
    GameResult g1;
    g1.setResult();
    cout << g1.getTotalScore() << endl;
    return 0;
}