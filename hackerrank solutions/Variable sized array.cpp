#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int temp;
    int n,q;
    cin>>n>>q;
    int k[n];
    vector<vector<int>> a(n);
    vector<vector<int>> b(q);

    for(int i = 0 ; i < n ; i ++ ){
        cin>>k[i];
        for(int j = 0 ; j < k[i] ; j++ ){
            cin>>temp;
            a[i].push_back(temp);
        }
    };

    for(int i = 0 ; i < q ; i++){
        cin>>temp;
        b[i].push_back(temp);
        cin>>temp;
        b[i].push_back(temp);
    };
    for(int i = 0 ; i< q ; i++){
        cout<<a[b[i][0]][b[i][1]]<<endl;
    }; 
     
    return 0;
}

