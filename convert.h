/*
**********this function to convert string to number***************
*/
#include<iostream>
#include<sstream>
#include<string>

#ifndef CONVERT_H
#define CONVERT_H

double convert(const std::string & r_word)
{
	double val = 0;
	std::stringstream conv(r_word);
	conv >> val;
	return val;
}
#endif //CONVERT_H
