#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int counter = 0;
    int answer = 0;
    bool check = false;
    for(int i = 0 ; i < s.size() ; i++ ){
        if(s[i] == 'D') {
            if(counter == 0){
                check = true;
            }
            counter--;
        }
        if(s[i]  == 'U'){ 
            counter++;
            if(counter == 0 && check == true){
                answer++;
                check = false;
            };        
        }

    };
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
