#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, n_feedbacks, feedback_type;
	map<int, string> map = {};
	map[1] = "Rolien";
	map[2] = "Naej";
	map[3] = "Elehcim";
	map[4] = "Odranoel";
	cin >> n;

	for (int i=0; i < n; i++) {
		cin >> n_feedbacks;
		for (int j=0; j < n_feedbacks; j++) {
			cin >> feedback_type;
			auto it = map.find(feedback_type);
			cout << it->second << endl;
		}

	}
	return 0;
}
