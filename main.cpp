#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
struct my{
string var, pav;
vector <int> paz;
};

int main() {
  vector <my> lent;
  my temp;
  int int_temp=1;
  cout << "Vardas <tarpas> pavarde: ";
  cin>>temp.var>>temp.pav;
  cout<<"iveskite pazymius";
  while (int_temp!=0){
    cin>>int_temp;
    if(int_temp>=1 && int_temp<=10) temp.paz.push_back(int_temp);
    else cout<<"Klaidinga ivestis"<<endl;
  
  }
  lent.push_back(temp);
  cout<<lent[0].var<<endl;
  cout<<lent[0].pav<<endl;
  for (int a: lent[0].paz)
  cout<<a<<"; ";
}
