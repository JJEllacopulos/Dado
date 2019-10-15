#include<iostream>
#include<cstdlib>
#include<clocale>
#include<ctime>
using namespace std;

int main (void){

    int dado;
    int cont;

    srand(time(0));

    for(cont = 0 ; cont < 10 ; cont++){
    dado = ((rand()) % 100) + 1;

    cout<< dado<< endl;
    }

    return 0;
}
