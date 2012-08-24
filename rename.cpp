#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    char oldname[] = "hedy.txt";
    char newname[] = "yes.txt";
    int result;
    
    result = rename(oldname, newname);
    
    if ( result == 0 )
        puts ( "File successfully renamed" );
    else
        perror( "Error renaming file" );
    cout << oldname <<endl; 
    system("pause");
    return 0;
}
