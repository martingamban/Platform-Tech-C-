#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;
//Global Variable
const int MAX_SIZE = 50;
// Function Prototypes
int displayNumbers(fstream&, char[]);
int binarySearch(char[], int, int);
int searchList(int[], int, int);
void displayMenu(int);
void generateNumbers(int);
void draw();
int main(int argc, char *argv[])
{
    fstream lottoFile;                              //To read the numbers from a file
    char input[MAX_SIZE];                           //To hold the numbers
    int lottoFoundBinary,
        lottoFoundLinear,
        random_lotto;
    
    displayNumbers(lottoFile, input);
    
    generateNumbers(random_lotto);
        
    lottoFoundBinary = binarySearch(input, MAX_SIZE, random_lotto); 
    
       
    system("PAUSE");
    return EXIT_SUCCESS;
}
int displayNumbers(fstream &file, char nums[])
{
 file.open("lottonums.txt",ios::in); 
    
 if(!file)
    {
       cout <<"File Open Error!\n";
       return 0;
    }
    
    cout <<"Lottery Winners!\n"
         <<"----------------\n";
    cout <<"This is your lucky combination:\n"
         <<"Reading from file...\n\n";
    
 file.getline(nums, MAX_SIZE);
    while(!file.eof())
    {
       cout << nums << endl;
       file.getline(nums, MAX_SIZE);
    }
    file.close();    
}
int binarySearch(char array[],int numElems,int value) //function heading
{
	int first = 0;				    // First element of list
	int last = numElems - 1;	    // last element of the list
	int middle;					    // variable containing the current 
	int position = -1;              // middle value of the list
	bool found = false;
	
	while (!found && first <= last)
	{
		middle = (last + first) / 2; 
		   
	if (array[middle] == value)
		{
           found = true;
           position = middle;
        }
                                     
	else if (array[middle] > value)
		last = middle - 1;		   // toss out the second remaining half of
								   // the array and search the first 
	else
		first = middle + 1;		   // toss out the first remaining half of
								   // the array and search the second
	}
	
	return position;			   // indicates that value is not in the array
}
int searchList( int List[], int value, int numElems)
{
	for (int count = 0;count <= numElems; count++)  
	{
		if (List[count] == value)
                                                                                // each array entry is checked to see if it contains
	                                                                            // the desired value.
		 return count; 
                                                                                // if the desired value is found, the array subscript
			                                                                    // count is returned to indicate the location in the array
	}
	return -1;	                                                                // if the value is not found, -1 is returned
}
void displayMenu(int)
{
}
void generateNumbers(int random_integer)                                        // Function that calls the random combination
{
cout <<"\nNow lets see if we got the lucky numbers!\n";
cout <<"-----------------------------------------\n";
srand((unsigned)time(0));     
    for(int index=0; index<6; index++)
    {
    random_integer = (rand()%49)+1;         
    cout << random_integer
     << ". "; 
    }
    cout << endl;
}
