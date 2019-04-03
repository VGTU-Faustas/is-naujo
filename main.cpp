#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct mokinys
{
    string vardas, pavarde;
    int ND[100];


}ID[100];

int main()
{
    int i=1, j=0, k=0;
    while( i==1)
    {
        char tn;
        cout << "Ar norite ávesti nauja mokini i sistema? (t/n): " << endl;
        cin >> tn;
        if (tn == 'n')
        {
            i=0;
        }
        else if (tn =='t')
        {
            i=1;
            cout << "Mokinio vardas: " << endl;

                cin >> ID[j++].vardas[j++];
                cout << "Mokinio pavarde: "<< endl;
                cin >> ID[k++].pavarde[k++];
                //cout << "Namu darbo pazymys (neigiams skaicius nutraukia ivedima): " << endl;
               // int nr=1;
               // ID[1].ND[1]=1;
              //  while (ID[1].ND[nr]==0)


        }
    }
    return 0;
}
