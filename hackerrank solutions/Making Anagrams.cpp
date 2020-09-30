#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int less = a.size()<b.size()?a.size():b.size();
    string smaller = a.size()<b.size()?a:b;
    string bigger = a.size()<b.size()?b:a;
    int count{0};

    for(int i =0; i < less ; i++){
        auto c = find(bigger.begin(),bigger.end(), smaller[i]);
        if(c != bigger.end()){
            count++;
            bigger.erase(c);
        }

    };
    int sum = (a.size() - count)+(b.size()-count);
    return sum;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
