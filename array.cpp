#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int numbers[100];	//100 integer spots set aside
	int unique[100];
	int size = 0;
	int sizeU = 0;
	int num;
	int found = -1;
	
	cout << "Enter integer values into the array, or -1 to stop: " << endl;
	cin >> num;
	while(num != -1)	{
		numbers[size] = num;
		size++;
		cin >> num;
	}
	
	//Put the first element into the unique array
	unique[0] = numbers[0];
	sizeU = 1;
	
	//examine other elements to see if they're unique
	for(int i=1; i<size; i++)	{
		for(int j=0; j<sizeU; j++)	{
			if(numbers[i] == unique[j])	{
				found = 1;
				break;
			}
		}
		if(!found)	{
			unique[sizeU] = numbers[i];
			sizeU++;
		}	
		found = 0;
	}
	
	cout << "Distinct values in the array: " << endl;
	cout << "(" << unique[0];
	for (int i=0; i<size; i++)	{
		cout <<	"," << unique[i]; 
	}
	cout << ")";
}