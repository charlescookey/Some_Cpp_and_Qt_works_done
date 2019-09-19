#include<vector>
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>


using namespace std;
bool if_primenumbers(int x){
    int c =2;
    while(c!= -1){

        if (x==c){
        return true;
        c = -1;
        continue;
    }else if (x >c){
            if ((x % c )==0){return false;c = -1;}
           else{c++;continue;}
    }
    };
    return false;};

long answer(int x){
    if(if_primenumbers(x)){return x;};
    int primes[10000];
    int j =0;
    for(int i=2;i<100;i++){primes[i]=0;};
    for(int i=2;i<x;i++){if(if_primenumbers(i)){primes[j]=i;j++;};};
    for(int i=0;i<x;i++){if(primes[i]==0){j=i;primes[i]='\0';break;}};
    for(int i=j-1;i>0;i--){if(x % primes[i] == 0){return primes[i];};};
    return 0;




};

int main(){
    int t;
    cin >> t;
    int numbs[t];
    for(int i = 0; i < t; i++){
        cin >> numbs[i];
    }
    for(int i = 0; i < t; i++){
        cout<< answer(numbs[i])<<endl;
    }
    return 0;
}
