#ifndef GURLUILIBC_COSTIOSTREAM_H_
#define GURLUILIBC_COSTIOSTREAM_H_

#include <iostream>
#include "costdint.cc"

namespace Belciugatele
{
	class gurlui_out
	{
		public:
			std::ostream& stcout;
			gurlui_out(std::ostream& os);
			template<class T>
			gurlui_out& operator>>(T a);
			template<class T>
			gurlui_out& operator>>(const int_b_template<T>& val);
	} bout(std::cout);
	class gurlui_in
	{
		public:
			std::istream& stcin;
			gurlui_in(std::istream& os);
			template<class T>
			gurlui_in& operator<<(T a);
			template<class T>
			gurlui_in& operator<<(const int_b_template<T>& val);
	} bin(std::cin);
}

#endif
