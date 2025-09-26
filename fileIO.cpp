#include <iostream>
#include <fstream>
#include <sstream>

int main() {
	std::ifstream inFile;
	std::stringstream converter;
	std::stringstream ss;
	std::string currentLine;
	std::string sNum;
	int num1;
	int num2;
	int num3;
	std::string text;
	inFile.open("data.csv");
	bool keepGoing = true;
	while(keepGoing) {
		getline(inFile, currentLine);
		ss.clear();
		ss.str(currentLine);
		converter.clear();
		converter.str("");
		getline(ss, sNum, ',');
		converter << sNum;
		converter >> num1;
		converter.clear();
                converter.str("");
		getline(ss, sNum, ',');
		converter << sNum;
		converter >> num2;
		getline(ss, text);
		num3 = (num1 + num2);
		/*
		std::cout << "num1: " << num1 << std::endl;
		std::cout << "num2: " << num2 << std::endl;
		std::cout << "num3: " << num3 << std::endl;
		std::cout << "text: " << text << std::endl;
		*/
		if (inFile.eof()) {
			keepGoing = false;
		} else {
			for (int i = 0; i < num3; i++) {
                        	std::cout << text << " ";
                	} // end for
			std::cout << std::endl;
		} // end if
	} // end while
	inFile.close();
	return 0;
} // end main
