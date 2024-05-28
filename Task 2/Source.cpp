#include <iostream>
#include <Windows.h>
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
	system("Color 02");
	cout << "TOCKA A:" << endl;
	cout << "X: "; 
	cin >> x; 
	cout << "Y: ";
	cin >> y;

	
	matrix.setA(x, y);

	cout << endl;
	system("Color 02");
	cout << "TOCKA B:" << endl;
	cout << "X: "; 
	cin >> x; 
	cout << "Y: "; 
	cin >> y;

	
	matrix.setB(x, y);

	
	do
	{
		system("cls");
		system("Color 7D");
		cout << matrix.startProgram(); 
		
	} while (matrix.Temppoint() != matrix.Realpoint());

	return 0;
}