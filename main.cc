// Kevin Hames
// Ece 2602 1/10/15
// Lab 4 Extra Credit Part 1

#include <iostream>
#include<fstream>

using namespace std;

// Finds the max of 5 integers
int findmax(int x1, int x2, int x3, int x4, int x5)
{
	int max = x1;
	int vals[5] = {x1, x2, x3, x4, x5};
	for(int x = 0; x < 5; x++)
	{
		if(max < vals[x]) { max = vals[x]; }
	}		
	return max;
}

int main()
{
	// Reading in Text File
	ifstream  infile;
	ofstream  outfile;
	infile.open("lab4_input.txt");
	outfile.open("lab4_output.txt");

	// Declaring variables for use in the lab
	/* int n, x1, x2, x3, x4, x5;
	cout << "Please enter the number of lines" << endl;
	cin >> n;

	// Reads the values from the txt file in groups of 5, finds the max, then puts the max in an array
	int *ray = new int[n];
	if (infile.is_open())
	{
		for(int i= 0; i < n; ++i) 
		{
			infile >> x1 >> x2 >> x3 >> x4 >> x5;
			*(ray+i) = findmax(x1,x2,x3,x4,x5);
		}
	} */

	// Extra Credit Part 1 (with n lines inputed commented out above)
	int x1, x2, x3, x4, x5;
	int n=0;
	int i=0;
	int *ray = new int[100];
	if (infile.is_open())
	{
		 while (infile >> x1 >> x2 >> x3 >> x4 >> x5)   
		{
			*(ray+i) = findmax(x1,x2,x3,x4,x5);
			i++;
			n++;
		}
	} 

	// Putting the max values from the array into a txt file
	for(int k = 0; k < n; ++k) 
	{ 
		outfile << *(ray+k) << endl;
	}
	infile.close();
	outfile.close();
	delete[] ray;
	return 0;
}

