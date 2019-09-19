#include <iostream>
#include <cmath>
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
long concat(long x , int y){
    int z = x%10;
    int a = x /10;
    int c = pow(10,y) + 0.5;
    int b = z * c;
    return b + a;
    };

bool whole_test(long x){
    if(if_primenumbers(x)){}else{return false;};

    if( x>10 && x<100){
        if(if_primenumbers(concat(x,1))){}else{return false;};
    };
    if( x>100 && x<1000){
        long y = concat(x,2);
        if(if_primenumbers(y)){}else{return false;};
        if(if_primenumbers(concat(y,2))){}else{return false;};
    };
    if( x>1000 && x<10000){
        long y = concat(x,3);long z = concat(y,3);
        if(if_primenumbers(y)){}else{return false;};
        if(if_primenumbers(z)){}else{return false;};
        if(if_primenumbers(concat(z,3))){}else{return false;};
    };
    if( x>10000 && x<100000){
        long y = concat(x,4);long a = concat(y,4);long z = concat(a,4);
        if(if_primenumbers(y)){}else{return false;};
        if(if_primenumbers(a)){}else{return false;};
        if(if_primenumbers(z)){}else{return false;};
        if(if_primenumbers(concat(z,4))){}else{return false;};
    };
    if( x>100000 && x<1000000){
        long y = concat(x,5);long a = concat(y,5);long b = concat(a,5);long z = concat(b,5);
        if(if_primenumbers(y)){}else{return false;};
        if(if_primenumbers(a)){}else{return false;};
        if(if_primenumbers(b)){}else{return false;};
        if(if_primenumbers(z)){}else{return false;};
        if(if_primenumbers(concat(z,5))){}else{return false;};
    };


    return true;
    };
int main(void) {
    int x;
    cin>>x;
    long sum = 0;
    for(int i =2 ;i<x;i++){
        if(whole_test(i)){sum+=i;}
    };
    cout<<sum<<endl;

    return 0;
}

