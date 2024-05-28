#include "Dijkstra.h"
using namespace std;

void Dijkstra::Algoritam()
{

	if (this->temppoint.first == 3 && this->temppoint.second == 1 ||
		this->temppoint.first == 3 && this->temppoint.second == 2 ||
		this->temppoint.first == 3 && this->temppoint.second == 3 ||
		this->temppoint.first == 3 && this->temppoint.second == 4 ||
		this->temppoint.first == 3 && this->temppoint.second == 5) {
		++(this->temppoint.second);
	}
	else if (this->temppoint.first > this->realpoint.second.first)
	{
		--(this->temppoint.first);
	}
	else if (this->temppoint.first < this->realpoint.second.first)
	{
		++(this->temppoint.first);
	}
	else {
		if (this->temppoint.second > this->realpoint.second.second) {
			--(this->temppoint.second);
		}
		else if (this->temppoint.second <= this->realpoint.second.second) {
			++(this->temppoint.second);
		}
	}
}

Dijkstra::Dijkstra(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Dijkstra::setA(int x, int y)
{
	this->realpoint.first.first = x;
	this->realpoint.first.second = y;
}

void Dijkstra::setB(int x, int y)
{
	this->realpoint.second.first = x;
	this->realpoint.second.second = y;

	this->temppoint = this->realpoint.first;
}

string Dijkstra::startProgram()
{
	this->Algoritam();
	stringstream ss;

	for (int i = 1; i <= this->x; ++i) {
		for (int j = 1; j <= this->y; ++j) {
			if (i == this->temppoint.first && j == this->temppoint.second)
			{
				ss << "x";
			}
			else if (i == this->realpoint.first.first && j == this->realpoint.first.second) {
				ss << "A";
			}
			else if (i == this->realpoint.second.first && j == this->realpoint.second.second) {
				ss << "B";
			}
			else if (i == 4 && j == 1 || i == 4 && j == 2 || i == 4 && j == 3 || i == 4 && j == 4 || i == 4 && j == 5) {
				ss << "*";
			}
			else {
				ss << "-";
			}
		}
		ss << "\n";
	}

	return ss.str();
}

pair<int, int> Dijkstra::Temppoint()
{
	return this->temppoint;
}

pair<int, int> Dijkstra::Realpoint()
{
	return this->realpoint.second;
}