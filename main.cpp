#include <iostream>

using namespace std;

void funnel(string word, string testWord)
{
    string cWord;
    for (unsigned int i = 0; i < word.length(); i++){
        cWord = word;
        cWord.erase(cWord.begin()+i);
        cout << cWord << endl;
        if(cWord == testWord){
            cout << "true";
            break;
        }else if(cWord != testWord && i == word.length()-1){
            cout << "false";
        }
    }
}

int main()
{
    string word("Penis");
    cout << *(word.begin()+1);
    return 0;
}
