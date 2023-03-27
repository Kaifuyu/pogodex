#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){
    string b;

string a="ddd";
int i =1;
while(i==1){
cout<<"Witaj w POGDEX"<<endl;

cout<<"Wpisz miasto z polski"<<endl;
cin>>a;
cout<<"Temperatura"<<endl;
srand(time(NULL));
cout<<rand()%22+1;
cout<<"C"<<endl;
cout<<"Ciœnienie"<<endl;
cout<<"10";
cout<<rand()%25+1;
cout<<"hekotpaskale"<<endl;
cout<<"Prêdkoœæ wiatru"<<endl;

cout<<rand()%25+1;
cout<<"km/h"<<endl;
cout<<"Wilgotnoœæ"<<endl;
cout<<"7";
cout<<rand()%8<<endl;
i--;
cout<<"czy chcesz wpisaæ drugie miasto(wpisz t je¿eli tak i n je¿eli nie)"<<endl;
cin>>b;

if(b=="t"){

    i++;
}

}
}

