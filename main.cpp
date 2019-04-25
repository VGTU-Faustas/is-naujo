#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct my {
    string var, pav;
    vector <int> paz; // Namu darbai
    int kd; // kontrolis darbas
    double vid; //vidurkis
};

int main()
{
    vector <my> lent;
    my temp; int int_temp=1; char uzkl; my vid;
    do{
        int_temp=1;

        cout<<"Iveskite: Vardas <tarpas> Pavarde: "; cin>>temp.var>>temp.pav;
        cout<<"Iveskite pazymius: "; temp.paz.clear();
        while(int_temp!=0){
            cin>>int_temp;
            if(int_temp>=1 && int_temp<=10) temp.paz.push_back(int_temp);
                else cout<<"Ivestis klaidinga arba nutraukta " << endl;

        }
        lent.push_back(temp);
        cout<<"Iveskite kontrolinio darbo rezultata: "; cin>>temp.kd;
        cout<< "Ivesti dar viena? (t/n) "; cin>>uzkl;
        }
        while (uzkl!='n');

        for (my z: lent){
            cout<<z.var<<endl;
            cout<<z.pav<<endl;
            for (int a: z.paz)
            cout<<a<<"; ";
            cout<<endl;
        }
    }
