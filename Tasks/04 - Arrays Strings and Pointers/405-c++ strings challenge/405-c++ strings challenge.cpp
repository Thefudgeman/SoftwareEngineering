#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";
    cout << input << endl;
    //Write solution here
    char arr[512];
    strcpy_s(arr, input.c_str());
    cout << "Title number is ";
    for (unsigned int i = 45; i < 512; i++)
    {
        if (arr[i] == '1' || arr[i] == '2' || arr[i] =='3' || arr[i] == '4' || arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9' || arr[i] == '0')
        {
            cout << "" << arr[i];
        }
    }
    cout << "" << endl;


    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    int wordCount = 0;
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    while (iss >> word)         //Read the next word (if there is one)
    {
        cout << word << endl;   //Output each word in turn
        if (word == "the")
        {
            wordCount++;
        }
    }
    cout << "The word 'the' appeared " << wordCount << " times" << endl;

}

