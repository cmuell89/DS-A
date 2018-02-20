#include <insertion.h>

std::vector<string> getWords(string filename){
    vector<string> words;
    string line;
    ifstream myfile(filename);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            words.push_back(line);
        }
        myfile.close();
    }
    else cout << "Unable to open file";

    return words;
}

