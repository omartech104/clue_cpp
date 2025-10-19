#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main (int argc, char *argv[]) {
    string command = "";
    cout << "Enter the command you want to know about: ";
    cin >> command;
    string chst = "curl http://cht.sh/" + command;
    system(chst.c_str());
    return 0;
}

