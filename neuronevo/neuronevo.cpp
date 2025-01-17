// neuroVolution.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <ctime>
#include <cmath>

#include"NN.h"


int main()
{
	NN brain;




	Matrix<int> m(2,2,arrayAloc<int, 2, 2>(new int[2][2]{ {1,0} ,{7,5} }));

	
	
	
	brain.addLayer(2, RELU); 
	brain.addLayer(20, ReLu);
	brain.addLayer(20, SIGMOID);
	brain.addLayer(10, softmax);
	brain.initial(RANDOM); 
	brain.decision(new double[2]{ 9.0,7.0 }).transpose().show();
	cout << m.getRow_size();
	int c;
	cin >> c;
	return 0;
}

