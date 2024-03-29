#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

struct my {
    string var, pav;
    vector <int> paz; // Namu darbai
    int kd; // kontrolis darbas
    double vid; //vidurkis
};

double vidurkis( vector <int> paz);
double mediana(vector <int> paz);

int main()
{
    vector <my> lent;
    my temp; int int_temp=1; char uzkl, arfailas, uzkl2; my vid;

    cout <<"Ar norite duomenis ivesti RANKINIU budu? (t/n)?"; cin >> arfailas; cout << endl;
    if (arfailas=='t')
    {
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
        cout<< "Ivesti dar viena? (t/n) "; cin>>uzkl; cout << endl;
        }
        while (uzkl!='n');

        cout<<"Vidurkis/mediana (v/m)?"; cin >>uzkl2;
        if (uzkl2=='m') double v=mediana(temp.paz);
                double v=vidurkis(temp.paz);

        cout << setfill ('_') << setw (60) << '\n' << setfill(' ');
        cout.width(20);
        cout<< left <<"VARDAS";cout.width(20);
        cout<< left << "PAVARDE";cout.width(19);
        cout<< right << "VIDURKIS" << '\n';

        for (my z: lent){
            cout.width(20);
            cout<< left <<z.var;
            cout.width(20);
            cout << left <<z.pav;
            cout.width(19);
         //   for (int a: z.paz)
         //   cout<<a<<"; "<<endl;
           // cout<<endl;
            cout<< right <<v<<'\n';
        }
    }
        string line;
        ifstream failas ("ivedimas.txt");
        vector <my> db;
        while(getline(failas, line))
        {
            std::stringstream str;
            str<<line;
            my temp; int temp_nd;
            temp.paz.clear();
            str<<temp.var; str<<temp.pav;
            for(int i=0; i<6; i++)
            {
                str>>temp_nd;
                temp.paz.push_back(temp_nd);
            }
            temp.kd=temp.paz.back();
            temp.paz.pop_back();
        }

    }

    double vidurkis( vector <int> paz)
    {

         return accumulate(paz.begin(), paz.end(), 0.0)/paz.size() ;

    }

    double mediana(vector <int> paz)
    {
        sort(paz.begin(), paz.end());
        return (paz.size()%2==0) ? (paz[paz.size()/2-1]+paz[paz.size()/2])/2 : paz[paz.size()/2];
    }
