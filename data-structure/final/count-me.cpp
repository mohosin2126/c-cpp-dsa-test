#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string line;
        getline(cin, line);

        map<string, int> freq;
        string word, max_word;
        int max_count = 0;

        line += ' ';

        for (char c : line)
        {
            if (c == ' ')
            {
                if (!word.empty())
                {
                    freq[word]++;
                    if (freq[word] > max_count)
                    {
                        max_count = freq[word];
                        max_word = word;
                    }
                    word = "";
                }
            }
            else
            {
                word += c;
            }
        }

        cout << max_word << " " << max_count << endl;
    }
}
