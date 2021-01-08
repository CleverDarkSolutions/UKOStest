
#include <iostream>
#include <string>

using namespace std;
#include <ctime>
#include <random>

void drukowanietabeli(char tabela [3][3]){
    system("cls");
    int i;
    for (i=0;i<3;i++) {
        for (int y = 0;y<3;y++) {
            cout << " " << tabela[i][y] << " ";
            if(y<2){
                cout << "|";
                }
        }
        cout << "\n";
        if(i<2){
        for (int z=0;z<10;z++) {
            cout << "-";
        }
        }
        cout << "\n";
    }    
}

void uzupelnieniemiejsca(char tabela [3][3],const char twojsymbol,const char symbolwroga) {
while (true) {
int n;
   while (true) {
   cout << "podaj pozycje na osi Y: " << "\n";
   cin >> n;
   if(n<3 and n>=0) {
       break;
   }
   cout << "niepoprawna wartość" << "\n";
   }
int m;
   while (true) {
   cout << "podaj pozycje na osi X: " << "\n";
   cin >> m;
   if(m<3 and m>=0) {
       break;
   }
   cout << "niepoprawna wartość" << "\n";
   }
   if(tabela[n][m] == symbolwroga and tabela[n][m] == twojsymbol) {
       cout << "to miejsce jest zajętę";
   }
   if (tabela[n][m] != symbolwroga and tabela[n][m] != twojsymbol)
   {
    tabela [n][m] = twojsymbol; 
    break;
   }
}
}

void uzupelnieniemiejscaprzezwroga(char tabela [3][3],const char symbolwroga,const char twojsymbol) {
    while (true) {
    srand((int)time(0));
    int a = rand()%3;
    int b = rand()%3;
    if(tabela[a][b] != twojsymbol and tabela[a][b] != symbolwroga) { 
        tabela[a][b] = symbolwroga;
        break;
    }
    }

}






int main() {
    system("cls");
    int i;
    int tura = 1;
    char mojsymbol = 'o';
    char symbolwroga = 'x';
    char tabela [3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    drukowanietabeli(tabela);
    while (true) {

    if(tura%2 != 0) {
        uzupelnieniemiejsca(tabela,mojsymbol,symbolwroga);
        tura+=1;
    }
    else if(tura%2 == 0) {
        uzupelnieniemiejscaprzezwroga(tabela, symbolwroga, mojsymbol);
        tura+=1;
    }
    drukowanietabeli(tabela);
    cout << "\n";
    if(tabela[0][0] == 'o' and tabela[0][1] == 'o' and tabela[0][2] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[1][0] == 'o' and tabela[1][1] == 'o' and tabela[1][2] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[2][0] == 'o' and tabela[2][1] == 'o' and tabela[2][2] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[0][0] == 'o' and tabela[1][0] == 'o' and tabela[2][0] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[0][1] == 'o' and tabela[1][1] == 'o' and tabela[2][1] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[0][2] == 'o' and tabela[1][2] == 'o' and tabela[2][2] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[0][0] == 'o' and tabela[1][1] == 'o' and tabela[2][2] == 'o'){
        cout << "wygrywa O!";
        break;
    }
    if(tabela[0][2] == 'o' and tabela[1][1] == 'o' and tabela[2][0] == 'o'){
        cout << "wygrywa O!";
        break;
    // x //;
        if(tabela[0][0] == 'x' and tabela[0][1] == 'x' and tabela[0][2] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[1][0] == 'x' and tabela[1][1] == 'x' and tabela[1][2] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[2][0] == 'x' and tabela[2][1] == 'x' and tabela[2][2] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[0][0] == 'x' and tabela[1][0] == 'x' and tabela[2][0] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[0][1] == 'x' and tabela[1][1] == 'x' and tabela[2][1] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[0][2] == 'x' and tabela[1][2] == 'x' and tabela[2][2] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[0][0] == 'x' and tabela[1][1] == 'x' and tabela[2][2] == 'x'){
        cout << "wygrywa X!";
        break;
    }
    if(tabela[0][2] == 'x' and tabela[1][1] == 'x' and tabela[2][0] == 'x'){
        cout << "wygrywa X!";
        break;
    }
        if(tabela[0][0] != ' ' and tabela[0][1] != ' ' and tabela[0][2] != ' ' and tabela[1][0] != ' ' and tabela[1][1] != ' ' and tabela [1][2] != ' ' and tabela[2][0] != ' ' and tabela[2][1] != ' ' and tabela[2][2] != ' '){
        cout << "pat! nikt nie wygrał";
        break;
    }
    }
    }
}









