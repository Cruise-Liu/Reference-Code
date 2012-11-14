#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char **argv)
{
	if(argc != 3)
		throw runtime_error("Parameters are not right!"
		   " Such as main.exe hello.txt  hello");

	string filename(argv[1]), search_item(argv[2]);
	
	fstream file;
	file.open(filename);
	if(!file)
		throw runtime_error("Cannot open the file");

	string line, word;
	map<int, string> include_word_line;
	int row = 1, sum = 0;
	while(getline(file, line))
	{
		istringstream stream(line);
		while(stream >> word)
		{
			if(search_item.compare(word) == 0)
			{
				include_word_line.insert(make_pair(row, line));
				++sum;
			}
		}
		++row;
	}

	cout << search_item << " occurs " 
		 << sum << " times" << endl;
	for(map<int, string>::const_iterator iter = include_word_line.begin();
		     iter != include_word_line.end(); ++iter)
		cout << "(line " << iter->first << ") " 
		     << iter->second << endl;

	system("pause");
	return 0;
}
