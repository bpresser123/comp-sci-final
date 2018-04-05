
#ifndef debug_hpp
#define debug_hpp
#ifdef DEBUG
#include <iostream>
using namespace std;
#define log(x) cout << x << endl;
#else
#define log(x)
#endif
#endif
