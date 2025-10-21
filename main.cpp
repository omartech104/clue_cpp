#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main (int argc, char *argv[]) {
    string command = "";
    cout << "Enter the command you want to know about: ";
    cin >> command;
    string chst = "mkdir ~/clue_docs/;cd ~/clue_docs;curl http://cht.sh/" + command + " >> "+command+"_doc.txt";
    system(chst.c_str());
    string show = "bat --style plain /home/omartech/clue_docs/" + command+"_doc.txt";
    system(show.c_str());
    return 0;
}

