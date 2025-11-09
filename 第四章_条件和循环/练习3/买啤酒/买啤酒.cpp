#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int bottle = 0; 
	int hat = 0; 
	int beer = 0; // amount of beer
	int add = 0;
	
	beer = n / 2; // the origin amount of beer 5
	add = beer; 
	hat += beer;  
	bottle += beer;  

	do {
		beer = hat / 4 + bottle / 2; 
		hat = hat % 4 ; // add the left hat & bottle
		bottle = bottle % 2;  
		
		add = add + beer; 
		
		hat = beer + hat;
		bottle = beer + bottle;
	} while (hat >= 4 || bottle >= 2);
	cout << add << endl;
	
	return 0;
}