#include "newcostiostream.h"

using Belciugatele::gurlui_out;
using Belciugatele::gurlui_in;

gurlui_out::gurlui_out(std::ostream& os) : stcout(os) {};

// functions from ostream
std::ostream& gurlui_out::flush() 
{
	return stcout.flush();
}

std::ostream& gurlui_out::put(char c)
{
	return stcout.put(c);
}

std::streampos gurlui_out::tellp()
{
	return stcout.tellp();
}

std::ostream& gurlui_out::write(const char* s, std::streamsize n)
{
	return stcout.write(s, n);
}

std::ostream& gurlui_out::seekp(std::streampos pos)
{
	return stcout.seekp(pos);
}

std::ostream& gurlui_out::seekp(std::streamoff off,std::ios_base::seekdir way)
{
	return stcout.seekp(off, way);
}
//

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

// functions from istream
std::streamsize gurlui_in::gcount() const
{
	return this->stcin.gcount();
}

int gurlui_in::get()
{
	return this->stcin.get();
}

std::istream& gurlui_in::get(char& c)
{
	return this->stcin.get(c);
}

std::istream& gurlui_in::get(char* s, std::streamsize n)
{
	return this->stcin.get(s, n);
}

std::istream& gurlui_in::get(char* s, std::streamsize n, char delim)
{
	return this->stcin.get(s,n,delim);
}

std::istream& gurlui_in::get(std::streambuf& sb)
{
	return this->stcin.get(sb);
}

std::istream& gurlui_in::get(std::streambuf sb,char delim)
{
	return this->stcin.get(sb, delim);
}

std::istream& gurlui_in::getline(char* s, std::streamsize n)
{
	return this->stcin.getline(s,n);
}

std::istream& gurlui_in::getline(char* s, std::streamsize n, char delim)
{
	return this->stcin.getline(s, n, delim);
}

std::istream& gurlui_in::ignore(std::streamsize n=1, int delim = EOF)
{
	return this->stcin.ignore(n, delim);
}

int gurlui_in::peek()
{
	return this->stcin.peek();
}

std::istream& gurlui_in::read(char* s, std::streamsize n)
{
	return this->stcin.read(s, n);
}

std::streamsize gurlui_in::readsome(char* s, std::streamsize n)
{
	return this->stcin.readsome(s, n);
}

std::istream& gurlui_in::putback(char c)
{
	return this->stcin.putback(c);
}

std::istream& gurlui_in::unget(char c)
{
	return this->stcin.unget();
}

std::streampos gurlui_in::tellg()
{
	return this->stcin.tellg();
}

std::istream& gurlui_in::seekg(std::streampos pos)
{
	return this->stcin.seekg(pos);
}

std::istream& gurlui_in::seekg(std::streamoff off, std::ios_base::seekdir way)
{
	return this->stcin.seekg(off, way);
}
//

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

namespace Belciugatele
{
	template gurlui_out& gurlui_out::operator>><int>(int a);
	template gurlui_out& gurlui_out::operator>><bool>(bool a);
	template gurlui_out& gurlui_out::operator>><unsigned short>(unsigned short a);
	template gurlui_out& gurlui_out::operator>><short>(short a);
	template gurlui_out& gurlui_out::operator>><unsigned int>(unsigned int a);
	template gurlui_out& gurlui_out::operator>><long>(long a);
	template gurlui_out& gurlui_out::operator>><unsigned long>(unsigned long a);
	template gurlui_out& gurlui_out::operator>><unsigned long long>(unsigned long long a);
	template gurlui_out& gurlui_out::operator>><float>(float a);
	template gurlui_out& gurlui_out::operator>><double>(double a);
	template gurlui_out& gurlui_out::operator>><long double>(long double a);
	template gurlui_out& gurlui_out::operator>><void*>(void* a);
	template gurlui_out& gurlui_out::operator>><std::streambuf*>(std::streambuf* a);
	template gurlui_out& gurlui_out::operator>><char>(char a);
	template gurlui_out& gurlui_out::operator>><signed char>(signed char a);
	template gurlui_out& gurlui_out::operator>><unsigned char>(unsigned char a);
	template gurlui_out& gurlui_out::operator>><const char*>(const char* a);
	template gurlui_out& gurlui_out::operator>><const signed char*>(const signed char* a);
	template gurlui_out& gurlui_out::operator>><const unsigned char*>(const unsigned char* a);
	template gurlui_out& gurlui_out::operator>><std::string>(std::string a);

	template gurlui_in& gurlui_in::operator<< <bool>(bool a);
	template gurlui_in& gurlui_in::operator<< <int>(int a);
	template gurlui_in& gurlui_in::operator<< <unsigned short>(unsigned short a);
	template gurlui_in& gurlui_in::operator<< <short>(short a);
	template gurlui_in& gurlui_in::operator<< <unsigned int>(unsigned int a);
	template gurlui_in& gurlui_in::operator<< <long>(long a);
	template gurlui_in& gurlui_in::operator<< <unsigned long>(unsigned long a);
	template gurlui_in& gurlui_in::operator<< <unsigned long long>(unsigned long long a);
	template gurlui_in& gurlui_in::operator<< <float>(float a);
	template gurlui_in& gurlui_in::operator<< <double>(double a);
	template gurlui_in& gurlui_in::operator<< <long double>(long double a);
	template gurlui_in& gurlui_in::operator<< <void*>(void* a);
	template gurlui_in& gurlui_in::operator<< <std::streambuf*>(std::streambuf* a);
	template gurlui_in& gurlui_in::operator<< <char>(char a);
	template gurlui_in& gurlui_in::operator<< <signed char>(signed char a);
	template gurlui_in& gurlui_in::operator<< <unsigned char>(unsigned char a);
	template gurlui_in& gurlui_in::operator<< <char*>(char* a);
	template gurlui_in& gurlui_in::operator<< <signed char*>(signed char* a);
	template gurlui_in& gurlui_in::operator<< <unsigned char*>(unsigned char* a);
	template gurlui_in& gurlui_in::operator<< <std::string>(std::string a);
	
	//
	template gurlui_in& gurlui_in::operator<< <bool&>(bool& a);
	template gurlui_in& gurlui_in::operator<< <int&>(int& a);
	template gurlui_in& gurlui_in::operator<< <unsigned short&>(unsigned short& a);
	template gurlui_in& gurlui_in::operator<< <short&>(short& a);
	template gurlui_in& gurlui_in::operator<< <unsigned int&>(unsigned int& a);
	template gurlui_in& gurlui_in::operator<< <long&>(long& a);
	template gurlui_in& gurlui_in::operator<< <unsigned long&>(unsigned long& a);
	template gurlui_in& gurlui_in::operator<< <unsigned long long&>(unsigned long long& a);
	template gurlui_in& gurlui_in::operator<< <float&>(float& a);
	template gurlui_in& gurlui_in::operator<< <double&>(double& a);
	template gurlui_in& gurlui_in::operator<< <long double&>(long double& a);
	template gurlui_in& gurlui_in::operator<< <void*&>(void*& a);
	template gurlui_in& gurlui_in::operator<< <std::streambuf*>(std::streambuf* a);
	template gurlui_in& gurlui_in::operator<< <char&>(char& a);
	template gurlui_in& gurlui_in::operator<< <signed char&>(signed char& a);
	template gurlui_in& gurlui_in::operator<< <unsigned char&>(unsigned char& a);
	template gurlui_in& gurlui_in::operator<< <std::string&>(std::string& a);
	//
}
