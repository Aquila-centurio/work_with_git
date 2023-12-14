#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
    ifstream file("Example.rar",ios::binary);
    if (!file)
    {
        cout << "Файл не открыт";
    }
    cout << "Файл успешно открылся" << "\n";
    file.seekg(0, ios::end);
    int length=file.tellg();
    file.seekg(0, ios::beg);
    unsigned char* buff = new unsigned char[length];
    file.read((char*)buff, length);
    file.close();

}