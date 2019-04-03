#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct mokinys
{
    string vardas, pavarde;
    int egz;
    double galutinis;

}ID[100];

int main()
{
    int i=1, j=0, k=0, a=0,b=0, m=0;
    while( i==1)
    {
        char tn;
        cout << "Ar norite ivesti nauja mokini i sistema? (t/n): " << endl;
        cin >> tn;
        if (tn == 'n')
        {
            i=0;
        }
        else if (tn =='t')
        {
            i=1;
            cout << "Mokinio vardas: " << endl;
            cin >> ID[j++].vardas;
                cout << "Mokinio pavarde: "<< endl;
                cin >> ID[k++].pavarde;
                cout << "Egzamino balas: ";
                cin >> ID[a++].egz;
                int ND[100], tarpinis=0;
                for (int h=0; h<99; h++)
                {
                    cout << "iveskite namu darbu pazymius (0 nutraukia ivedima): ";
                    cin >> ND[h];
                    if (ND[h]==0){
                        break;
                        ID[b++].galutinis=(tarpinis+ID[m++].egz)/h;
                    }
                    tarpinis+ND[h];

                }

        }
    }
    return 0;
}
