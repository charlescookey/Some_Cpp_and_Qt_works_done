#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set <int> ss;
    set<int>::iterator swe;
    int x=0,a=0,b=0;
    cin>>x;
    for(int i = 0; i < x ; i++){
        cin>>a>>b;
        swe = ss.find(b);
        switch (a){
            case 1:
                ss.insert(b);
                break;
            case 2:
                if(swe!=ss.end())ss.erase(b);
                break;
            case 3:
                if(swe==ss.end())cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
                break;
                
        }
    };  
    return 0;
}



