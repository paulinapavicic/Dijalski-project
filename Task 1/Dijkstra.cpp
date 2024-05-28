#include "Dijkstra.h"
using namespace std;

void Dijkstra::Algoritam()
{
	if (this->tempdot.first > this->realdot.second.first)
	{
		--(this->tempdot.first);
	}
	else if (this->tempdot.first < this->realdot.second.first)
	{
		++(this->tempdot.first);
	}
	else {
		if (this->tempdot.second > this->realdot.second.second) {
			--(this->tempdot.second);
		}
		else if (this->tempdot.second <= this->realdot.second.second) {
			++(this->tempdot.second);
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
	this->realdot.first.first = x;
	this->realdot.first.second = y;
}

void Dijkstra::setB(int x, int y)
{
	this->realdot.second.first = x;
	this->realdot.second.second = y;

	this->tempdot = this->realdot.first;
}

string Dijkstra::startProgram()
{
	this->Algoritam();
	stringstream ss;

	for (int i = 1; i <= this->x; ++i) {
		for (int j = 1; j <= this->y; ++j) {
			if (i == this->tempdot.first && j == this->tempdot.second)
			{
				ss << "x";
			}
			else if (i == this->realdot.first.first && j == this->realdot.first.second) {
				ss << "A";
			}
			else if (i == this->realdot.second.first && j == this->realdot.second.second) {
				ss << "B";
			}
			else {
				ss << "-";
			}
		}
		ss << "\n";
	}

	return ss.str();
}

pair<int, int> Dijkstra::Tempdot()
{
	return this->tempdot;
}

pair<int, int> Dijkstra::Realdot()
{
	return this->realdot.second;
}