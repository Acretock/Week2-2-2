#include <vector>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	vector<bool> que;
	int N;
	int count = 0;
	string line,command;
	int temp;
	cin >> N;
	for (int i = 0; i <= N; i++) {
		getline(cin, line);
		stringstream ss(line);
		ss >> command;
		ss >> temp;

		if (command == "COME") {
			cout << temp;
			if (temp > 0)
				for (int i = 0; i < temp; i++)
					que.push_back(false);
			else
				for (int i = 0; i > temp; i--)
					que.pop_back();
		}
		if (command == "WORRY") {
			que[temp-1] = true;
		}
		if (command == "QUIET") {
			que[temp-1] = false;
		}
		if (command == "WORRY_COUNT") {
			for (auto q : que)
				if (q)
					count++;
			cout << count << endl;
			count = 0;
		}
	}
	
}
