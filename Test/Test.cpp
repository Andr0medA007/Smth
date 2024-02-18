#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string str, words[100];
	string ans;
	int cnt = 0;
	int max = 0;
	int word_index = 0;
	int c = 0, k = 0;
	getline(cin, str);
	int word_count = 1;
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] == 32 && str[i + 1] != 32) word_count++;
	}
	for (int i = c; i < str.size(); i++) {
		if (str[i] != 32) {
			int ii = i;
			while (str[ii] != 32 && str[ii] != '\0')ii++;
			c = ii - i;
			words[k] = str.substr(i, c);
			word_index++;
			k++;
			i = ii - 1;
		}
	}
	for (int i = 0; i < word_count; i++)
	{
		cnt = 0;
		for (int j = i + 1; j < word_count; j++)
		{
			if (words[i] == words[j]) {
				cnt++;
				if (max < cnt) {
					max = cnt;
					ans = words[i];
				}
			}
		}
	}
	cout << ans;
}
