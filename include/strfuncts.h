#include <string>
#include <vector>

// Remove /r and /n from a string
void clrNewlines(std::string &str);

// Removes spaces from leading and trailing edge
void clrSpaces(std::string &str);

// Takes the orig string and splits it into left and right sides around a delimiter
bool split(std::string &orig, std::string &left, std::string &right, const char delimiter);

// Turns a string into lowercase
void lower(std::string &str);

// Turns off local echo from a user's terminal
int hideInput(int fd, bool hide);

// Generates a random string of the assigned length
void genRandString(std::string &buf, size_t n);

// take a string to a vector of unint8
std::vector<uint8_t> stringToVector(std::string &input);

// take a vector of unint8 to a string
std::string vectorToString(std::vector<uint8_t> &input);
