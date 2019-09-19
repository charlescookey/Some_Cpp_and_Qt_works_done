#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a;
    int arrayhol[a];
    for(int i=0;i<a;i++){
    cin>>arrayhol[i];
    };

    b=a*2;
    double e;
    int c,finalnum,d,k,counter;
    c=finalnum=d=e=counter=0;
    int f =pow(10,b-1);
    int g =pow(10,b-2);
    int h = sqrt(g);
    for(int i=h;i<sqrt(f);i++){
        c =pow(i,2);
        for(int j=0;j<a;j++){
            d = (j*2)+2;
            e= pow(10,b-d);
            k=c/e;
            if(b-d >= 0){
                if(  k%10==arrayhol[j]  ){counter++;}};
        };
        if(counter == a){
                finalnum = i;
                break;
                }else{counter = 0;
                };

    };
    cout<<finalnum<<endl;
    return 0;
}
