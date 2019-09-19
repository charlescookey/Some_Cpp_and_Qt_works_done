#include <cmath>
#include <iostream>
using namespace std;

long factorial(int x){
    if(x ==0){return 1;};
    return (long)x * factorial(x-1);

};
long sum_factorial(int x){
    long y = factorial(x);
    long sum = 0;
    int z =0;
    while(z != -1){
            sum += y % 10;
            if (y>0){y = y / 10;}else{z = -1;};
    };
    return sum;
};
int main() {
   int t;
    cin >> t;
    int numbs[t];
    for(int i = 0; i < t; i++){
        cin >> numbs[i];
    };
    for(int i = 0; i < t; i++){
        cout<<sum_factorial(numbs[i])<<endl;
    };

    return 0;
}