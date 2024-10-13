#include <iostream>
using namespace std;

/**
 * Problem:
 * Write a program to read a text and encrypt it, decrypt it.
 * Input:
 * Mohammed
 * Output:
 * Text Before Encryption : Mohammed
 * Text After Encryption : Oqjcoogf
 * Text After Decryption : Mohammed
*/

string ReadText(string Message)
{
    string Text;

    cout << Message << endl;
    getline(cin, Text);

    return Text;
}

int CountText(const string& Text)
{
    int Count = 0;

    while (Text[Count] != '\0')
        Count++;

    return Count;
}

void PrintOriginalText(string Text)
{
    cout << "Text Before Encrytion: " << Text << endl;
}

string EncryptText(string Text, int Count)
{
    string EncryptedText(Count, '\0');

    for (int i = 0; i < Count; i++)
    {
        EncryptedText[i] = Text[i] + 2;
    }
    cout << "Text After Encryption: " << EncryptedText << endl;

    return EncryptedText;
}

string DecryptText (string Text, int Count)
{
    string DecryptedText(Count, '\0');

    for (int i = 0; i < Count; i++)
    {
        DecryptedText[i] = Text[i] - 2;
    }
    cout << "Text After Decryption: " << DecryptedText << endl;

    return DecryptedText;
}

int main()
{
    string Text = ReadText("Please enter the text to encrypt");
    int Count = CountText(Text);

    PrintOriginalText(Text);
    string EncryptedText = EncryptText(Text, Count);
    string DecryptedText = DecryptText(EncryptedText, Count);

    return 0;
}