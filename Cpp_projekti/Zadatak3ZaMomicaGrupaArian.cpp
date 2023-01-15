#include <iostream>
using namespace std;

int main()
{
    int baka, roditelji, brat, ukupno, sladoled;
    cout<<"Unesi koliko novaca je baka dala Maji: ";
    cin>>baka;
    cout<<"Unesi koliko novaca su roditelji dali Maji: ";
    cin>>roditelji;
    cout<<"Unesi koliko novaca je brat uzeo Maji: ";
    cin>>brat;
    ukupno = baka + roditelji - brat;  // zbrojis i oduzmes da saznas koliko Maja ukupno ima novaca
    sladoled = ukupno / 5; // dijelis s 5 jer je to kuna jedne kuglice
    cout<<"Maja moze kupiti "<<sladoled<<" kuglica sladoleda.";
    system("PAUSE");
    return 0;
}