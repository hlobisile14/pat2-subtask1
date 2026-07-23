// PAT Task 2: MOrse Code Translator
// Name: Hlobisile
// Date: 23 july 2026
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

// Function to convert a single character to morse code
// Return thr morse code string for A-Z
string getMorse(char c) {
    switch(c) {
        case 'A': return ".-"; case 'B': return "-..."; case 'C': return "-.-.";
        case 'D': return "-.."; case 'E': return "."; case 'F': return "..-.";
        case 'G': return "--."; case 'H': return "...."; case 'I': return "..";
        case 'J': return ".---"; case 'K': return "-.-"; case 'L': return ".-..";
        case 'M': return "--"; case 'N': return "-."; case 'O': return "---";
        case 'P': return ".--."; case 'Q': return "--.-"; case 'R': return ".-.";
        case 'S': return "..."; case 'T': return "-"; case 'U': return "..-";
        case 'V': return "...-"; case 'W': return ".--"; case 'X': return "-..-";
        case 'Y': return "-.--"; case 'Z': return "--..";
        default: return "";
    }
}

//Output Morse code for each letter and the full messageS
int main() {
    string input;
    string fullMorse = "";// will store the full translated message
    
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, input); // get full line including spaces

    for(int i = 0; i < input.length(); i++) {
        char ch = toupper(input[i]); // convert to uppercase for A-Z  
        
        if(isalpha(ch)) { // only process letters A-Z 
            string code = getMorse(ch);
            cout << ch << ": " << code << endl; // individual breakdown
            
            if(fullMorse!= "") 
                fullMorse += " "; // add space between letters
            fullMorse += code;
        }
    }

    cout << "\nFull Morse Code Message: " << fullMorse << endl;
    return 0;
//Tested with input: HELLO
}
