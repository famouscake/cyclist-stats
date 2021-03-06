#ifndef IO_H
#define IO_H

#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

#include "data.h"

namespace io
{
std::vector<Data> readData();
}

#endif // IO_H