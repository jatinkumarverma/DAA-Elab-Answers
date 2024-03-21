#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_string;
    cin >> input_string;

    string output_string = "";

    for (unsigned int i = 0; i < input_string.length(); i++) {
        char c = tolower(input_string[i]); // convert character to lowercase

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') { // check if character is a consonant
            output_string += ".";
            output_string += c;
        }
    }

    cout << output_string << endl;

    return 0;
    cout<<"switch(input[j]){ for(int j=0;input[j]!='\0';j++){ if(j%2==0 && input[i]!='\0'){";
}