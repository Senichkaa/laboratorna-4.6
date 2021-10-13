#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double P, S;
    int j, i;


    S = 0;
    j = 2;
    while (j <= 20)
    {
        P = 1;
        i = pow(j,2);
        while (i <= 400)
        {
            P *= i;
            i++;
        }
        S += j / (pow(j, 2) + P);
        j++;
    }
    cout << S << endl;

    S = 0;
    j = 2;
    do
    {
        P = 1;
        i = pow(j, 2);
        do
        {
            P *= i;
            i++;
        } while (i <= 400);
        S += j / (pow(j, 2) + P);
        j++;
    } while (j <= 20);
    cout << S << endl;

    S = 0;
    for (j = 2; j <= 20; j++)
    {
        P = 1;
        for (i = pow(j, 2); i <= 400; i++)
        {
            P *= i;
        }
        S += j / (pow(j, 2) + P);
    }
    cout << S << endl;

    S = 0;
    for (j = 20; j >= 2; j--)
    {
        P = 1;
        for (i = 400; i >= pow(j, 2); i--)
        {
            P *= i;
        }
        S += j / (pow(j, 2) + P);

    }
    cout << S << endl;


    return 0;
}