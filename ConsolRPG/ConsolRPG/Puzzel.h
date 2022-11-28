#pragma once

#include<string>
#include<vector>
#include<fstream>
#include<iostream>

class Puzzel
{
private:
	std::string question;
	std::vector<std::string> answers;
	int correctAnswer;

public:
	Puzzel(std::string fileName);
	virtual ~Puzzel();
	std::string getAsString();
};

