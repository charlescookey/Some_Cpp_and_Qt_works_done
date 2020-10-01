#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */

        cout.unsetf(ios_base::uppercase);

        cout<<left<<showbase<<hex<<(long long)A<<endl;
        cout<<setfill('_')<<setw(15)<<dec<<noshowbase<<setprecision(2)<<fixed<<showpos<<right<<B<<endl;
        cout<<scientific<<noshowpos<<setprecision(9)<<setiosflags(ios::uppercase)<<C<<endl;

	}
