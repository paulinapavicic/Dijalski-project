#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Dijkstra
{
private:
	int x = 0, y = 0;
	pair<pair<int, int>, pair<int, int>> realdot;
	pair<int, int> tempdot;
	void Algoritam();

public:

	Dijkstra(int x, int y);
	void setA(int x, int y);
	void setB(int x, int y);
	string startProgram();
	pair<int, int> Tempdot();
	pair<int, int> Realdot();
};

