//Аффинный шифр

#include "iostream"
#include "string"

using namespace std;

//всего 91 символов
//первый 32, последний 122

const short SizeAlf = 91;
const short FirstSymbol = 32;

int main()
{
    
    string str;
    
    cout << "Enter message: ";
    getline(cin, str);

    cout << "Encrypted message: ";
    for (int i = 0; i < str.length(); i++)
    {
        cout << (char)(((str[i] - FirstSymbol) * 4 + 21) % SizeAlf + FirstSymbol);
    }

    cout << "\n\nEnter encrypted message: ";
    getline(cin, str);

    cout << "Decrypted message: ";
    for (int i = 0; i < str.length(); i++)
    {
        cout << (char)(((str[i] - FirstSymbol) + SizeAlf - 21) * 23 % SizeAlf + FirstSymbol);
    }

    cout << endl;

}