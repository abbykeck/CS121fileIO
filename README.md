# Algorithm for CS121fileIO
## Algorithm for main
1. create inFile for data.csv
1. create stringstream
1. create a string for the whole line
1. create a string to convert the numbers
1. create an int for the first number
1. create an int for the second number
1. create an int to add both numbers
1. create a string for the remaining text
1. open file with inFile
1. create boolean keepGoing for while loop
1. while(keepGoing)
    1. get line and put it in the string for the whole line
    1. clear the stringstream
    1. put whole line into stringstream
    1. read first value and put it into converter string
    1. convert it into an int and put it into the first int
    1. read second value and put it into converter string
    1. convert it into an int and put it into the second int
    1. read the rest of the line and put it into the last tring
    1. add the two numbers and put it into the third int
    1. for (int i = 0; i < third int; i++)
        1. print text
    1. end for
    1. print new line
    1. if (inFile.eof())
        1. keepGoing = false;
    1. end if
1. end while
1. close file with inFile
1. end main
