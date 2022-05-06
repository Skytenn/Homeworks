// 3 hemjeest matritsiin todorhoilogchiig olno uu
#include<iostream>
using namespace std;


int main()
{
	int x, y, z, r, c, determinant, dMatrix[3][3];
	
	cout << " 3*3 haritsaatai matrixiin huwisagchuud oruulna uu = \n";
	for(r = 0; r < 3; r++)	
	{
		for(c= 0; c < 3; c++) 
		{
			cin >> dMatrix[r][c];
		}		
	}
	
	x = ((dMatrix[1][1] * dMatrix[2][2]) - (dMatrix[2][1] * dMatrix[1][2]));
       y = ((dMatrix[1][0] * dMatrix[2][2]) - (dMatrix[2][0] * dMatrix[1][2]));
       z = ((dMatrix[1][0] * dMatrix[2][1]) - (dMatrix[2][0] * dMatrix[1][1]));
	
	determinant = ((dMatrix[0][0] * x) - (dMatrix[0][1] * y) + (dMatrix[0][2] * z));

 	cout << "\n3*3 matrixiin todorhoilogch = " << determinant;	

 	return 0;
}
