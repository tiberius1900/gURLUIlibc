#include "newcostiostream.h"

using Belciugatele::gurlui_out;
using Belciugatele::gurlui_in;

gurlui_out::gurlui_out(std::ostream& os) : stcout(os) {};

template<class T>
gurlui_out& gurlui_out::operator>>(T a)
{
	this->stcout << a;
	return *this;
}

template<class T>
gurlui_out& gurlui_out::operator>>(const int_b_template<T>& val)
{
	this->stcout << val.GetValue();
	return *this;
}

gurlui_in::gurlui_in(std::istream& os) : stcin(os) {};

template<class T>
gurlui_in& gurlui_in::operator<<(T a)
{
	this->stcin >> a;
	return *this;
}

template<class T>
gurlui_in& gurlui_in::operator<<(const int_b_template<T>& a)
{
	T x;
	this->stcin >> x;
	a.PutValue(x);
	return *this;
}
