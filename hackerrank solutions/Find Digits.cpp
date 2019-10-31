#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int a =n , b=0 , c= n;
    int ans=0;
     ofstream fout(getenv("OUTPUT_PATH"));
     fout<<"acrs";
    while(a!=0){
        b=a%10;
        a/=10;
        if(b == 0)continue;
        if(n%b == 0)ans++;
    };
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
