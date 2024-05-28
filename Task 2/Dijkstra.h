#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Dijkstra
{
private:
	int x = 0, y = 0;
	pair<std::pair<int, int>, std::pair<int, int>> realpoint;
	pair<int, int> temppoint;
	void Algoritam();

public:
	
	Dijkstra(int x, int y);
	void setA(int x, int y);
	void setB(int x, int y);
	string startProgram();
	pair<int, int> Temppoint();
	pair<int, int> Realpoint();
};

