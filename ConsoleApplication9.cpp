#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//void compareFiles(string file1, string file2) {
//    ifstream f1(file1);
//    ifstream f2(file2);
//
//    string line1, line2;
//    int lineNumber = 0;
//
//    while (true) {
//        lineNumber++;
//
//        getline(f1, line1);
//        getline(f2, line2);
//
//        if (f1.eof() && f2.eof()) {
//            break; 
//        }
//
//        if (line1 != line2) {
//            if (!f1.eof()) {
//                cout << "File 1, line " << lineNumber << ": " << line1 << endl;
//            }
//            if (!f2.eof()) {
//                cout << "File 2, line " << lineNumber << ": " << line2 << endl;
//            }
//        }
//    }
//
//    f1.close();
//    f2.close();
//}
//
//int main() {
//    string file1, file2;
//
//    cout << "Enter the path to the first file: ";
//    cin >> file1;
//    cout << "Enter the path to the second file: ";
//    cin >> file2;
//
//    compareFiles(file1, file2);
//}
//

//2

//
//void generateStatistics(string inputFile, string outputFile) {
//    ifstream input(inputFile);
//    ofstream output(outputFile);
//
//    if (!input.is_open() || !output.is_open()) {
//        cerr << "Error opening files." << endl;
//        return;
//    }
//
//    string line;
//    int charCount = 0;
//    int lineCount = 0;
//    int vowelCount = 0;
//    int consonantCount = 0;
//    int digitCount = 0;
//
//    while (getline(input, line)) {
//        lineCount++;
//        for (char ch : line) {
//            charCount++;
//            ch = tolower(ch); 
//
//            if (ch = 'a' && ch <= 'z') {
//                vowelCount += (ch == 'a') + (ch == 'e') + (ch == 'i') + (ch == 'o') + (ch == 'u');
//                consonantCount += (ch != 'a') && (ch != 'e') && (ch != 'i') && (ch != 'o') && (ch != 'u');
//            }
//            if (ch = '0' && ch <= '9') {
//                digitCount++;
//            }
//        }
//    }
//
//    output << "Character count: " << charCount << endl;
//    output << "Line count: " << lineCount << endl;
//    output << "Vowel count: " << vowelCount << endl;
//    output << "Consonant count: " << consonantCount << endl;
//    output << "Digit count: " << digitCount << endl;
//
//    input.close();
//    output.close();
//}
//
//int main() {
//    string inputFile, outputFile;
//
//    cout << "Enter the path to the input file: ";
//    cin >> inputFile;
//    cout << "Enter the path to the output file: ";
//    cin >> outputFile;
//
//    generateStatistics(inputFile, outputFile);
//
//}
