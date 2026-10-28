#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream in("Portal 2.jpg", ios::binary | ios::in);

    if (in)
    {
        in.seekg(0, ios::end);

        cout << "Size of file: " << in.tellg() << " bytes" << endl;

        in.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }

    return 0;
}