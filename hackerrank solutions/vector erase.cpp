#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a ,temp = 0;
    cin>>a;
    vector <int> arr;
    for(int i=0 ; i< a ; i++ ){
        cin>>temp;
        arr.push_back(temp);        
    };
    vector<int>::iterator at,bt;
    cin >> a;
    at = arr.begin() + a - 1;
    arr.erase(at);
    cin>>a>>temp;
    at = arr.begin() + a - 1;
    bt = arr.begin() + temp - 1;
    arr.erase(at,bt);   
    cout<<arr.size()<<endl;;
    for(auto i = arr.begin() ;i != arr.end() ;i++ ){
        cout<<*i<<' ';
    };

    return 0;
}
