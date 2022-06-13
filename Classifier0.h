#pragma once
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#include<ctime>
#include<cmath>
#include<iostream>
#include<conio.h>

#include "Function.h"
#include "InputChar.h"

using namespace std;

class Classifier0 {
public:
	InputChar inputChar;
	int output[10];
	double outputDouble[10];

	double weight[26][10];
	double speed;


	Classifier0();

	void train(InputChar* inputArr, int length);

	void classify(const InputChar& input);

	void classify(const InputChar& input, int* _output);

	void printOutput();
};
