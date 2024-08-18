// CPP program to find the maximum stolen value 
#include <iostream> 
using namespace std; 

// calculate the maximum stolen value 
int maxLoot(int* hval, int n) 
{ 
	// base case 
	if (n < 0) { 
		return 0; 
	} 

	if (n == 0) { 
		return hval[0]; 
	}  
    cout<<n<<" ";
	int pick = hval[n] + maxLoot(hval, n - 2); 
    
	int notPick = maxLoot(hval, n - 1); 

	// return max of picked and not picked 
	return max(pick, notPick); 
} 

// Driver to test above code 
int main() 
{ 
	int hval[] = {1,2,3,1}; 
	int n = sizeof(hval) / sizeof(hval[0]); 
	cout << "Maximum loot possible : "
		<< maxLoot(hval, n - 1); 
	return 0; 
} 

