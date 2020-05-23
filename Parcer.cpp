#include "Parcer.h"

std::list<std::vector<std::string>> Parcer::parce()
{
	separators SEPARATORS;
	int i, j;
	std::ifstream input;
	std::string line; // each line from input file
	std::vector<std::string> lexemes; // each lexeme from each line
	std::list<std::vector<std::string>> result;
	try
	{
		input.open(_fname);
	}
	catch (const std::exception & ex)
	{
		throw ex;
	}
	while (std::getline(input, line)) {
		//deleting all extra ' ' symblols
		i = 0;
		while (i < line.size()) {
			if (line[i] == ' ') {
				//creating starting point to delete
				if (i == 0) j = 0;
				else j = i + 1;

				while (j < line.size() && line[j] == ' ') line.erase(j, 1);
				
				if (j == line.length()) line.erase(i, 1); // if last is ' ' - deleting i

				else if(SEPARATORS.isSeparator(line[j])) line.erase(i, 1); // if "A[EAX<space>] - deleting space"
				if (i != 0 && SEPARATORS.isSeparator(line[i - 1])) line.erase(i, 1); //if "A[<space>EAX] - deleting space"	
			}
			else {
				//deleting symbols from ';' to end of line
				if (line[i] == ';') {
					line.erase(i, line.size() - i + 1);
					break;
				}
			}
			i++;
		}
		for (i = 0; i < line.size(); i++) line[i] = toupper(line[i]);
		if (line.empty()) continue; // if line is empty we are not writing it to our list
		//creating lexemes vector for each row
		i = 0;
		j = 0; // when last lexeme started
		lexemes.clear();
		lexemes.push_back("");//our first lexeme
		for (auto i : line) {
			if (SEPARATORS.isSeparator(i)) {
				lexemes.push_back("");
				lexemes.back().push_back(i);
				lexemes.push_back("");
			}
			else {
				if(i == ' ') lexemes.push_back("");
				else lexemes.back().push_back(i);
			}
		}
		result.push_back(lexemes);
	}
	input.close();
	return result;
}