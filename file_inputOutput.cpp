
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    string s;
    
    fstream fptr;
    fptr.open("test.txt", ios::in|ios::out);
    if ( fptr.fail()){
        cout << "Couldn't open the file" <<endl;
        return 0;
    }
    
    while ( fptr ){
        getline(cin,s);
        if (s == "-1")
            break;
        fptr << s;
    }
    
    fptr.seekg(0,ios::beg);
    s.clear();
    while( !fptr.eof()){
        getline(fptr,s);
        cout << s << endl;
    }
    fptr.close();
    return 0;
}
