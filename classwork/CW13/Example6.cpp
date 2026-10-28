#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    cout << "1. Write" << endl;
    cout << "2. Read" << endl;

    int choice = 0;
    cin >> choice;

    switch (choice)
    {
        case 1:
            {
                // Создание выходного файлового потока и связывание с ним файла, который открывается на запись в 
                // текстовом режиме.
                ofstream out("Text.txt");

                // Если файл удалось открыть.
                if (out.is_open())
                {
                    // Смещение файлового указателя в выходном потоке на 5 позиций от начала.
                    out.seekp(5, ios::beg);

                    // Вывод строки в выходной поток.
                    out << "Hello";

                    // Закрытие файлового потока.
                    out.close();
                }
                else
                {
                    cout << "Could not open the file" << endl;
                }
            }
            break;
        case 2:
            {
                char string[80] = {};

                // Создание выходного файлового потока и связывание с ним файла, который открывается на чтение в 
                // текстовом режиме.
                ifstream in("Text.txt");

                // Если файл удалось открыть.
                if (in.is_open())
                {
                    // Смещение файлового указателя во входном потоке на 5 позиций от конца.
                    in.seekg(5, ios::end);

                    // Считывание текстовой строки из входного потока.
                    in >> string;
                    // Вывод считанной строки на экран.
                    cout << string << endl;

                    // Закрытие файлового потока.
                    in.close();
                }
                else
                {
                    cout << "Could not open the file" << endl;
                }
            }
            break;
        default:
            cout << "Invalid action" << endl;
            break;
    }

    return 0;
}