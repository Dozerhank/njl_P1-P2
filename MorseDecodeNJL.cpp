#include <iostream>
#include <sstream>
using namespace std;

int main()  {
    string line, decode, morse[100];
    int totalMorse = 0;
    
    cout << "Enter Morse words, one per line: " << endl;
    getline(cin, line);
    while (line != "Quit")  {
        stringstream ss(line);
        for (int i = 0; ss >> morse[i]; i++)    {
            totalMorse++;
        }
        
        for (int i = 0; i < totalMorse; i++)    {
            if (morse[i] == ".-")   {
                decode += "A";
            }   else if (morse[i] == "-...")   {
                decode += "B";
            }   else if (morse[i] == "-.-.")    {
                decode += "C";
            }   else if (morse[i] == "-..") {
                decode += "D";
            }   else if (morse[i] == ".")    {
                decode += "E";
            }    else if (morse[i] == "..-.")    {
                decode += "F";
            }    else if (morse[i] == "--.")    {
                decode += "G";
            }    else if (morse[i] == "....")    {
                decode += "H";
            }    else if (morse[i] == "..")    {
                decode += "I";
            }    else if (morse[i] == ".---")    {
                decode += "J";
            }    else if (morse[i] == "-.-")    {
                decode += "K";
            }    else if (morse[i] == ".-..")    {
                decode += "L";
            }    else if (morse[i] == "--")    {
                decode += "M";
            }    else if (morse[i] == "-.")    {
                decode += "N";
            }    else if (morse[i] == "---")    {
                decode += "O";
            }    else if (morse[i] == ".--.")    {
                decode += "P";
            }    else if (morse[i] == "--.-")    {
                decode += "Q";
            }    else if (morse[i] == ".-.")    {
                decode += "R";
            }    else if (morse[i] == "...")    {
                decode += "S";
            }    else if (morse[i] == "-")    {
                decode += "T";
            }    else if (morse[i] == "..-")    {
                decode += "U";
            }    else if (morse[i] == "...-")    {
                decode += "V";
            }    else if (morse[i] == ".--")    {
                decode += "W";
            }    else if (morse[i] == "-..-")    {
                decode += "X";
            }    else if (morse[i] == "-.--")    {
                decode += "Y";
            }    else if (morse[i] == "--..")    {
                decode += "Z";
            } 
        }
        totalMorse = 0;
        decode += " ";
        getline(cin, line);
    }
    
    cout << endl << decode;
}
