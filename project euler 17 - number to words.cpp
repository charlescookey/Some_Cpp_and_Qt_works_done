#include <cmath>
#include <iostream>
using namespace std;
void unit(int x){
    switch(x){
        case 1 :
            cout<<"One ";
            break;
        case 2 :
            cout<<"Two ";
            break;
        case 3 :
            cout<<"Three ";
            break;
        case 4 :
            cout<<"Four ";
            break;
        case 5 :
            cout<<"Five ";
            break;
        case 6 :
            cout<<"Six ";
            break;
        case 7 :
            cout<<"Seven ";
            break;
        case 8 :
            cout<<"Eight ";
            break;
        case 9 :
            cout<<"Nine ";
            break;
        default:
            cout<<" ";
        };
};

void tens(int x){
    switch(x){
        case 0 :
            cout<<"Ten ";
            break;
        case 1 :
            cout<<"Eleven ";
            break;
        case 2 :
            cout<<"Twelve ";
            break;
        case 3 :
            cout<<"Thirteen ";
            break;
        case 4 :
            cout<<"Fourteen ";
            break;
        case 5 :
            cout<<"Fifteen ";
            break;
        case 6 :
            cout<<"Sixteen ";
            break;
        case 7 :
            cout<<"Seventeen ";
            break;
        case 8 :
            cout<<"Eighteen ";
            break;
        case 9 :
            cout<<"Nineteen ";
            break;
        default:
            cout<<" ";
};};

void tensuper(int x){
     switch(x){
        case 2 :
            cout<<"Twenty ";
            break;
        case 3 :
            cout<<"Thirty ";
            break;
        case 4 :
            cout<<"Forty ";
            break;
        case 5 :
            cout<<"Fifty ";
            break;
        case 6 :
            cout<<"Sixty ";
            break;
        case 7 :
            cout<<"Seventy ";
            break;
        case 8 :
            cout<<"Eighty ";
            break;
        case 9 :
            cout<<"Ninety ";
            break;
        default:
            cout<<" ";
};};

void grp_three(int x){
    int b,c;
    b=x/10;

    if(x>99){unit(x/100); cout<< "Hundred ";}
    if(b%10 > 1){tensuper(b%10);unit(x%10);};
    if(b%10 == 1){tens(x%10);};
    if(b%10 == 0){unit(x%10);};

};

void addextra(long double x){
    if(x >= pow(10,12)){cout<<"One Trillion"<<endl;return;};

    if(x >= pow(10,9)){long a = (x/pow(10,9));grp_three(a%1000);cout<<"Billion ";};
    if(x >= pow(10,6)){int a = (x/pow(10,6));grp_three(a%1000);cout<<"Million ";};
    if(x >= pow(10,3)){int a = (x/pow(10,3));grp_three(a%1000);cout<<"Thousand ";};
    grp_three((int)x%1000);
};
int main(){
    int t;
    cin >> t;
    long double numbs[t];
    for(int i = 0; i < t; i++){
        cin >> numbs[i];
    };
    for(int i = 0; i < t; i++){
        addextra(numbs[i]);
        cout<<endl;
    };
    return 0;
}
