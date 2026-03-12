#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For parsing lines
using namespace std;

void parseCSV(const string&);

int main() {
   parseCSV("students.csv");

   return 0;
}

void parseCSV(const string& csvFile) 
{
    ifstream inputFile(csvFile);
    string studentRow;

    while (getline(inputFile, studentRow)) 
    {
        stringstream input(studentRow);
        string word;

        while (input >> word)
        {
            for (int i = 0; i < word.length(); i++)
            {
                cout << word[i];

                if (word[i] == ':')
                    cout << " ";
            }
            cout << endl;
        }

        cout << endl;
    }
}