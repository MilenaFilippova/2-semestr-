#ifndef _FUNCTION_H
#define _FUNCTION_H

bool readQueens(const char* fileName, int* queenX, int* queenY); // Чтение ферзей из файла 
bool isThreaten(int queenX1, int queenY1, int queenX2, int queenY2); // Угрожают ли ферзи друг другу 
void writePair(ofstream& out, int queenX1, int queenY1, int queenX2, int queenY2); // Вывод пары ферзей в выходной файл
int readVert(ifstream& in); //чтение вертикальных координат
int readHoris(ifstream& in); //чтение горизонтальных координат

#endif
