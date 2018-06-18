////Exercise 4
//#include<iostream>
//#include<fstream>
//using namespace std;


//void main()
//{	
//	ifstream fin;
//	const int MAX_LENGHT = 40;
//	char fullName[MAX_LENGHT];	
//	char rollNo[MAX_LENGHT];	
//	int date;
//	char month[MAX_LENGHT];
//	int year;
//	float semester_work;
//
//	
//	fin.open("input2.txt",ios::in);	// opening file input.txt.
//
//	if(!fin)	//Check if file has been opened or not.
//	{
//		cout<<"Could not open the input file.\n";
//		return;
//	}
//
//	cout<<"Reading data from file...\n";
//
//	
//	fin.getline(fullName,MAX_LENGHT,'\n');		
//	cout<<"Full Name:\t"<<fullName<<endl;		
//
//	fin>>rollNo;		
//	cout<<"Roll Number:\t"<<rollNo<<endl;		
//		
//	fin>>date;		//reading an integer.
//	cout<<"Date:\t"<<date<<endl;
//
//	fin>>month;		
//	cout<<"Month:\t"<<month<<endl;		
//
//	fin>>year;		
//	cout<<"Year:\t"<<year<<endl;		
//
//	fin>>semester_work;
//	cout<<"Semester Work:\t"<<semester_work<<endl;
//
//	
//	fin.close();		//Close file after reading data.
//
//	
//	
//	// Writing data in File
//
//	ofstream fout;	//Object to write data in file.
//
//	fout.open("Output.txt", ios::out);		//open file output.txt. (Previous data in the file will be truncated.)
//
//	if( fout )		//Check if file has been opened or not.
//	{
//		fout<<"Roll No:\t"<<rollNo<<endl;
//		fout<<"Name:\t"<<fullName<<endl;
//		fout<<"Date of Birth:\t"<<date<<" "<<month<<", "<<year<<endl;
//		fout<<"Semester Work:\t"<<semester_work<<endl;
//
//		fout.close();		//Close the file after writing all the data.
//	}
//	else
//	{
//		//If file could not be opened, print error message.
//		cout<<"Output.txt could not be opened.\n";
//	}
//
//
//}


////Exercise 3
//#include<iostream>
//#include<fstream>
//using namespace std;
//
//
//void main()
//{
//	// Reading data from File
//
//	ifstream fin;	// object to read data from file.
//	char myString[80];	
//	int line_count = 0;
//
//	fin.open("input.txt",ios::in);	// opening file input.txt.
//
//	if(!fin)	//Check if file has been opened or not.
//	{
//		cout<<"Could not open the input file.\n";
//		return;
//	}
//
//	cout<<"Reading data line by line:\n";
//
//	while (!fin.eof())		//Read until end of file.
//	{
//		fin.getline(myString,80,'\n');		//Read a line from file.
//		cout<<line_count<<":\t"<<myString<<endl;		
//		line_count++;
//	}
//	
//	fin.close();		//Close file after reading data.
//
//	cout<<"Lines Count = "<<line_count<<endl;
//	
//	// Writing data in File
//
//	ofstream fout;	//Object to write data in file.
//
//	fout.open("Output.txt", ios::out);		//open file output.txt. (Previous data in the file will be truncated.)
//
//	if( fout )		//Check if file has been opened or not.
//	{
//		//Writing in the file.
//		fout<<"Lines Count = "<<line_count<<endl;
//
//		fout.close();		//Close the file after writing all the data.
//	}
//	else
//	{
//		//If file could not be opened, print error message.
//		cout<<"Output.txt could not be opened.\n";
//	}
//
//
//}



////Exercise 2
//#include<iostream>
//#include<fstream>
//using namespace std;
//
//
//void main()
//{
//	// Reading data from File
//
//	ifstream fin;	// object to read data from file.
//	char myString[80];	
//	int word_count = 0;
//
//	fin.open("d:\\input.txt",ios::in);	// opening file input.txt.
//
//	if(!fin)	//Check if file has been opened or not.
//	{
//		cout<<"Could not open the input file.\n";
//		return;
//	}
//
//	cout<<"Reading data character by character:\n";
//
//	while (!fin.eof())		//Read until end of file.
//	{
//		fin>>myString;		//Read a word from file.
//		cout<<word_count<<":\t"<<myString<<endl;		
//		word_count++;
//	}
//	
//	fin.close();		//Close file after reading data.
//
//	cout<<"Word Count = "<<word_count<<endl;
//	
//	// Writing data in File
//
//	ofstream fout;	//Object to write data in file.
//
//	fout.open("d"\\input.txt", ios::out);		//open file output.txt. (Previous data in the file will be truncated.)
//
//	if( fout )		//Check if file has been opened or not.
//	{
//		//Writing in the file.
//		fout<<"Word Count = "<<word_count<<endl;
//
//		fout.close();		//Close the file after writing all the data.
//	}
//	else
//	{
//		//If file could not be opened, print error message.
//		cout<<"Output.txt could not be opened.\n";
//	}
//
//
//}

//Exercise 1
#include<iostream>
#include<fstream>
using namespace std;


void main()
{
	// Reading data from File

	ifstream fin;	// object to read data from file.
	char ch;
	int character_count = 0;

	fin.open("input.txt",ios::in);	// opening file input.txt.

	if(!fin)	//Check if file has been opened or not.
	{
		cout<<"Could not open the input file.\n";
		return;
	}

	cout<<"Reading data character by character:\n";
	
	while (!fin.eof())		//Read until end of file.

	{
		ch = fin.get();		//Read a character from file.
		cout<<character_count<<"\t"<<ch<<endl;
		if( ch != '\n')
			character_count++;
	}


	fin.close();		//Close file after reading data.

	
	// Writing data in File

	ofstream fout;	//Object to write data in file.

	fout.open("Output.txt", ios::out);		//open file output.txt. (Previous data in the file will be truncated.)

	if( fout )		//Check if file has been opened or not.
	{
		//Writing in the file.
		fout<<"Total Number of characters:\t"<<character_count<<endl;

		fout.close();		//Close the file after writing all the data.
	}
	else
	{
		//If file could not be opened, print error message.
		cout<<"File could not be opened.\n";
	}
	
	cin >> ch;
}