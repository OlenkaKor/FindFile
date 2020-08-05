#pragma once

#include "boost/filesystem.hpp" 
#include <thread>
#include <vector>

using namespace boost::filesystem;
using namespace std;

extern int numberOfThreads;
extern vector<thread> myThreads;

bool find_file(const path & dir_path, const string & file_name, path & path_found);

