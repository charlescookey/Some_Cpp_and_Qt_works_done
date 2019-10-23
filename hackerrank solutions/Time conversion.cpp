#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     int temp = 0;
     string a;
     if(s[8] == 'A'){
        if(s[0] == '1' && s[1] == '2'){
            s[0] = '0';s[1] = '0';
        }
        s.erase(s.begin()+8 , s.end());
    }else{
        s.erase(s.begin()+8 , s.end());
        if(s[0] == '1' && s[1] == '2'){
            return s;
        }
        a = s.substr(0,2);
        temp = stoi(a) + 12;
        a = to_string(temp);
        s.replace(0,2,a);
    };
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
