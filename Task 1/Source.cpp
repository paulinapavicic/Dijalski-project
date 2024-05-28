#include <iostream>
#include  <Windows.h>
#include "Dijkstra.h"

using namespace std;

int main()
{

	int x = 0, y = 0;

	system("Color 09");
	cout << "Choose size of matrix:\nX: "; 
	cin >> x;
	cout << "Y: "; 
	cin >> y;

	system("cls"); 

	
	Dijkstra matrix(x, y);


	cout << "First entre x and y for point A and then for point B! " << endl;
	
	cout << endl;

	system("Color 02");
	cout << "Point A:" << endl;
	cout << "X: "; 
	cin >> x; 
	cout << "Y: "; 
	cin >> y;

	/* Setting pu dot A*/
	matrix.setA(x, y);

	cout << endl;
	system("Color 02");
	cout << "Point B:" << endl;
	cout << "X: "; 
	cin >> x; 
	cout << "Y: "; 
	cin >> y;

	/*setting up dot B*/
	matrix.setB(x, y);


	do
	{
		system("cls"); //clear screen
		system("Color 7D");
		cout << matrix.startProgram(); 
		
	} while (matrix.Tempdot() != matrix.Realdot());

	return 0;
}