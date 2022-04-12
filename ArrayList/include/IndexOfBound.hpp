#ifndef INDEXOFBOUND_HPP
#define INDEXOFBOUND_HPP

#include "Exception.hpp"
class IndexOfBound : public Exception{
	public:
		IndexOfBound(const string &msg): Exception(msg){ }
};

#endif