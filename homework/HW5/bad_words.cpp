#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("Text2.txt");

    if (!file.is_open())
    {
        cout << "File not found!" << endl;
        return 1;
    }

    string bannedWords[] = { "spam", "virus", "hack", "cheat" };

    string word;
    int count = 0;

    while (file >> word)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (ispunct(word[i]))
            {
                word.erase(i, 1);
                i--;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            if (word == bannedWords[i])
            {
                count++;
                cout << "Found: " << word << endl;
            }
        }
    }

    cout << "\nTotal banned words: " << count << endl;

    file.close();
}