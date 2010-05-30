#ifndef __utils_h_
#define __utils_h_

#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <fstream>

#include <errno.h>
#include <time.h>
/////////////////////////////////////////////////
void debug(const std::string&);
std::vector<std::string> split(char, const std::string&);
void deWhiteSpace(std::string &);
std::queue<std::string> vectorToQueue(const std::vector<std::string> &);
std::string replace(char, char, const std::string&);
/////////////////////////////////////////////////
int createDirecttory(const std::string &str);
/////////////////////////////////////////////////
#endif