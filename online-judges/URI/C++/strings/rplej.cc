#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    string input, n1, n2;
    int o1, o2;
    char var;
    bool p1 = false;

    while (cin >> input){
	if (cin.eof()) break;
	else{
	    o1=0;
	    o2=0;
	    for (char c : input){
		if (c==43 or c==61 or c==0) p1=true;
		else if (c >= 48 and c <= 57){
		    if (!p1) n1.push_back(c);
		    else n2.push_back(c);
		}
		else if(c!=43 and c!=61 and c!=0){
		    var = c;
		}
	    }
	    cout << n1 << n2 << endl;
	    o1 = stoi(n1);
	    o2 = stoi(n2);
	    if (var == 74) printf("%d\n", o1 + o2);
	    else if (var == 82) printf("%d\n",o2 - o1);
	    else printf("%d\n",o2 - o1);
	}
    }
    //printf("%s\n", input);
    return 0;
}
