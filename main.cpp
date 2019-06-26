#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include<windows.h>
#include<mmsystem.h>
#include<cstdlib>
#include<ctime>


using namespace std;

void neteisingas ();
bool klausimas (int nr);
int taskai=0;

int main()
{
  vector <int> numeriai = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    random_shuffle(&numeriai[0], &numeriai[9]);
    cout<<"Sveiki atvyke i muzikinio ansamblio RONDO muzikos klausimyna!"<<endl;
    system("pause");
    for(int i=0; i < numeriai.size(); i++)
    {
        if (klausimas(numeriai.at(i)) == 0)
        neteisingas();
        else taskai++;
    }

    cout<<"Sveikiname isgyvenus. Surinkta tasku: " << taskai;


  }



void neteisingas ()
{
  string line;
  ifstream fara ("ivan.txt");
  if (fara.is_open())
  {
    while ( getline (fara,line) )
    {
      cout << line << '\n';
    }
    fara.close();
    cout<<"NETEISINGAI."<< endl;
    PlaySound(TEXT("ugly.wav"), NULL, SND_FILENAME | SND_ASYNC);
    system("pause");
  }
    else cout << "ALEKSANDRAS IVANAUSKAS - FARA NERASTAS";
}


bool klausimas (int nr)
{
    char ats;
    switch(nr)
    {
        case 1 :
            {
               cout << "Kelintais metais susikure grupe RONDO?" << endl;
         cout << "A. 1976" << endl;
         cout <<"B. 1976 pr. kr." <<endl;
         cout << "C. 1979" << endl;
         cin >> ats;
         if (ats == 'a') return true;
         else return false;
         break;
            }


      case 2 :
          {
              cout<<"Kiek viniliniu ploksteliu irase grupe RONDO?" << endl;
          cout << "A. 8" << endl;
          cout <<"B. 4" <<endl;
          cout << "C. 2" << endl;
          cin >> ats;
         if (ats == 'b') return true;
         else return false;
          break;
          }


      case 3 :
          {
         cout << "________ að, jûrø dievas" << endl;
         cout << "Ir ganau savo pievoj"<< endl;
           cout << "Baltasparnius laivus."<< endl;
           cout << "Að po þemæ vaikðèiot nemoku,"<< endl;
           cout << "Su undinëm paðoku,"<< endl;
           cout << "Kaip neptûnas graþus" << endl;
         cout << endl;
         cout <<"Koks zodis praleistas?" <<endl;
         cout << "A. Piratas " << endl;
         cout << "B. Kapitonas " << endl;
         cout << "C. Zvejys " << endl;
         cin >> ats;
         if (ats == 'b') return true;
         else return false;
         break;
          }

      case 4 :
         cout << "Kelinta vieta uzeme RONDO 2004 metu LNK muzikos konkurse Nacionaline Muzikos lyga?" << endl;
         cout << "A. 1 " << endl;
         cout << "B. 2 " << endl;
         cout << "C. 3 " << endl;
         cin >> ats;
         if (ats == 'c') return true;
         else return false;
         break;
      case 5 :
         cout << "Kokiu instrumentu groja Aleksandras Ivanauskas - Fara?" << endl;
         cout << "A. Gitara " << endl;
         cout << "B. Boso gitara " << endl;
         cout << "C. Virsininko gitara " << endl;
         cin >> ats;
         if (ats == 'b') return true;
         else return false;
         break;
      case 6 :
        cout << "Koks yra ankstesnis grupės RONDO pavadinimas? " << endl;
         cout << "A. Provincija " << endl;
         cout << "B. Studentai " << endl;
         cout << "C. Ekspresas " << endl;
         cin >> ats;
         if (ats == 'a') return true;
         else return false;
        break;
      case 7 :
        cout << "Grupeje RONDO klavisiniais groja: " << endl;
         cout << "A. Robertas Mankus " << endl;
         cout << "B. Sergejus Persijanovas " << endl;
         cout << "C. Remigijus Venslova " << endl;
        cin >> ats;
         if (ats == 'c') return true;
         else return false;
        break;
    case 8 :
        cout << "Netikėk, ką priešai suoks" << endl;
        cout << "Ką šnekės tau svetimi" << endl;
        cout << "Šis gyvenimas kitoks" << endl;
        cout << "Reikia būti ______" << endl;
        cout << "A. Tavimi " << endl;
        cout << "B. Savimi " << endl;
        cout << "C. Su tavim " << endl;
        cin >> ats;
         if (ats == 'b') return true;
         else return false;
        break;
    case 9 :
        cout << "Mus išskyrė su draugais, " << endl;
        cout << "Ir nereikia ieškot kaltų. " << endl;
        cout << "Stovi eglė po langais " << endl;
        cout << "Ir ________ - tai aš ir tu. " << endl;
        cout << "A. Batonas " << endl;
        cout << "B. Kastonas " << endl;
        cout << "C. Ciklonas " << endl;
        cin >> ats;
         if (ats == 'b') return true;
         else return false;
        break;
    case 10 :
        cout << "Margarita, Margarita" << endl;
        cout << "Ak, kodėl kiekvieną rytą" << endl;
        cout << "Saulės gaisro sutirpdyta"<< endl;
        cout << "Išnyksti tu, Margarita?"<< endl;
        cout << endl;
        cout << "Tiesiog spauskite c" << endl;
        cin >> ats;
         if (ats == 'a') return true;
         else return false;
        break;

      default :
         cout << "Klaida: klausimas nerastas." << endl;
    }
}

