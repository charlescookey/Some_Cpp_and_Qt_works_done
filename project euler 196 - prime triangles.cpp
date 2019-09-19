#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial_adder(int x){
    if(x>0){return x + factorial_adder(x-1);}else{return 0;};
};

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
    return false;
};
int counter=0;long extra_testcase = 0;int z =0;
bool if_prime_triplet(long x,int b){
    counter =0;

    int c =(long)factorial_adder(b-1)+1;
    long a = x - c -1;
    long all,bll,cll;
    all=factorial_adder(b-2)+1;
    bll=factorial_adder(b-1)+1;
    cll=factorial_adder(b)+1;


    if (a != -1){
        if(if_primenumbers(all + a)){counter++;extra_testcase = all+a;z=b-1;};
        if(if_primenumbers(bll + a)){counter++;extra_testcase = bll+a;z=b;};
        if(if_primenumbers(cll + a)){counter++;extra_testcase =cll +a;z=b+1;};
    };
    if(a != b-2){
            if(if_primenumbers(all + a + 1)){counter++;extra_testcase = all+a+1;b=b-1;};
            if(if_primenumbers(bll + a + 2)){counter++;extra_testcase =bll + a + 2;z=b;};
            if(a != b-3){
            if(if_primenumbers(all + a + 2)){counter++;extra_testcase= all+a +2;z=b-1;};
    };
    };
    if(if_primenumbers(cll + a + 1)){counter++;extra_testcase =cll +a +1;z=b+1;};
    if(if_primenumbers(cll + a + 2)){counter++;extra_testcase =cll+a+2;z=b+1;};

    if(counter>=2){return true;};


    return false;
};
bool extracase(){
     if(if_prime_triplet(extra_testcase,z)){return true;};
     return false;
};

long primenumbers_within(long y){
    long x = (long)factorial_adder(y-1)+1;
    long answer = 0;
    for(int i = 0;i < y ;i++){
        if(if_primenumbers(x+i)){
            if(if_prime_triplet(x+i , y)){
                answer += x+i ;}
                   else{
                   if(counter == 1){if(extracase()){answer+=x+i;};;};};
    };

};
return answer;
    };

int main(){
    long a,b;
    long suma,sumb,finsum;
    cin>>a>>b;

    suma = primenumbers_within(a);
    sumb = primenumbers_within(b);
    finsum = suma + sumb;
    cout<<finsum<<endl;

}

