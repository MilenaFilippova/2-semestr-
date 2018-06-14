#include <fstream>
#include <iostream>
#include "function.h"

using namespace std;

bool readQueens(const char* fileName, int* queenX, int* queenY)
{
	ifstream in(fileName);    
	if (!in.is_open())     
		return false; 
	for (int i=0; i<8; i++)
	{    
		queenX[i]=readVert(in);   // прочитать вертикаль (координату x) 
		queenY[i]=readHoris(in);    // прочитать вертикаль (координату y) 
		if (in.fail() || queenX[i]==0  || queenY[i]==0)     
			return false;   
	}   
	return true; 
} 

int readVert(ifstream& in)
{ 
	char ch;  
	in>>ch;  
	if (ch<'a' || ch>'h')   
		return 0;   

	return ch-'a'+1; 
} 

int readHoris(ifstream& in)
{  
	char ch;  
	in>>ch;   
	if (ch<'1' || ch>'8')   
		return 0;  

	return ch-'1'+1;
} 

bool isThreaten(int queenX1, int queenY1, int queenX2, int queenY2)
{ 
	return (queenX1==queenX2) || (queenY1==queenY2) ||    (queenX1-queenX2==queenY1-queenY2) ||     
		   (queenX2-queenX1==queenY1-queenY2) ; 
}

void writePair(ofstream& out, int queenX1, int queenY1, int queenX2, int queenY2)
{     
		char qv1=(queenX1-1)+'a';   
		char qv2=(queenX2-1)+'a';   
		out<<qv1<<queenY1<<'-'<<qv2<<queenY2<<endl;
} 
