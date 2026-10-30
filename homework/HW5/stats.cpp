#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("Text.txt");

    if (!file.is_open())
    {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    int lines = 0;
    int words = 0;

    while (getline(file, line))
    {
        lines++;

        string word;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] != ' ')
            {
                word += line[i];
            }
            else if (!word.empty())
            {
                words++;
                word.clear();
            }
        }

        if (!word.empty())
        {
            words++;
        }
    }

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;

    file.close();
}