//MATEUSZ ANTCZAK KL. 1D
#include <bits/stdc++.h>

using namespace std;

int czysc()
{
    system("cls");
    cout << "||||||||||||||||||||||||||||||||\n";
    cout << "|| << WITAJ W GRZE WARCABY >> ||\n";
    cout << "|| [ Autor: Mateusz Antczak ] ||\n";
    cout << "||||||||||||||||||||||||||||||||\n";
}
int main()
{
    czysc();
    char plansza[10][10];
    for(int w = 0; w <10; w++)
    {
        for(int k = w; k < (10+w); k++)
        {
            if(k%2 == 0)
            {
                plansza[w][k-w] = 'b';
            }
            else
            {
                plansza[w][k-w] = 'c';
            }
        }
    }
    /*cout << "\n";
    for(int w  = 0; w < 10; w++)
    {
        for(int k = 0; k < 10; k++)
        {
            cout << plansza[w][k] << " ";
        }
        cout << "\n";
    }
    */
    czysc();
}
