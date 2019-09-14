#include<iostream>
#include<cstdlib>
#include<atomic>

using namespace std;

int main (int argc, char * const argv[]) {
	
	int numberCount;
	int maxNumbers;

    int i;
	thread myThreads[55];
	thread myThreads[55];
	thread myThreads[55];
	
	for(i =0; i<55; i++){
		myThreads1[i] = thread(lotto_1, i);
		myThreads2[i] = thread(lotto_2, i);
		myThreads3[i] = thread(lotto_3, i);
	}
	
	cout << "1st Prize Lottery";
	ready1 = true;
	this_thread::sleep_for(chrono::second(1))
	
	cout << "\n2nd Prize Lottery";
	ready2 = true;
	this_thread::sleep_for(chrono::second(1))
	
	cout << "3rd Prize Lottery";
	ready3 = true;
	this_thread::sleep_for(chrono::second(1))
	
	for(i = 0; i<55, 1++){
		myThreads1[i].join();
		myThreads2[i].join();
		myThreads3[i].join();
	}
	
	int lotteryNumbers[numberCount];
	int i, j;
	bool newNumber;
	
void bar (int n){
	if(!read){
		this_thread_yield();
	}
	cout << "This is a sample thread" << n << "\n";
}
    srand(0);
    for(i=0; i<numberCount; i++)
    {
    	do
    	{
    		lotteryNumbers[i] = rand() %maxNumbers + 1;
    		newNumber = true;
    		for (j=0; j<i; j++)
    		{
    			if (lotteryNumbers[j]==lotteryNumbers[i])
    			{
    				newNumber = false;\
				}
			}
		} while (!newNumber);
	}
	for (i=0; i<numberCount; i++)
	{
		cout << lotteryNumbers[i] << " ";
	}
	cout << end1;
}
