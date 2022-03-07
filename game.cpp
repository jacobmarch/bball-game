#include <fstream>
#include <iostream>
#include <string>

using namespace::std;



int main(){
    ofstream myFile;
    myFile.open("scores.txt");
    myFile << "65-58";
    myFile.close();
    return 0;
}