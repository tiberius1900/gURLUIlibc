#include "newcostiostream.h"

using Belciugatele::gurlui_out;
using Belciugatele::gurlui_in;

gurlui_out::gurlui_out(std::ostream& os) : stcout(os) {};

//functions from ostream
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

gurlui_out& gurlui_out::operator>>(int val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(bool val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(unsigned short val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(short val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(unsigned int val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(long val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(unsigned long val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(unsigned long long val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(float val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(double val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(long double val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(void* val)
{
	this->stcout << val;
	return *this;
}

gurlui_out& gurlui_out::operator>>(std::streambuf* sb)
{
	this->stcout << sb;
	return *this;
}

gurlui_out& gurlui_out::operator>>(char c)
{
	this->stcout << c;
	return *this;
}

gurlui_out& gurlui_out::operator>>(signed char c)
{
	this->stcout << c;
	return *this;
}

gurlui_out& gurlui_out::operator>>(unsigned char c)
{
	this->stcout << c;
	return *this;
}

gurlui_out& gurlui_out::operator>>(const char* s)
{
	this->stcout << s;
	return *this;
}

gurlui_out& gurlui_out::operator>>(const signed char* s)
{
	this->stcout << s;
	return *this;
}

gurlui_out& gurlui_out::operator>>(const unsigned char* s)
{
	this->stcout << s;
	return *this;
}

gurlui_out& gurlui_out::operator>>(std::string s)
{
	this->stcout << s;
	return *this;
}

template<typename T>
gurlui_out& gurlui_out::operator>>(const int_b_template<T>& val)
{
	this->stcout << val.GetValue();
	return *this;
}

//gurlui_in

//functions from istream
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
gurlui_in::gurlui_in(std::istream& os) : stcin(os) {};

gurlui_in& gurlui_in::operator<<(int& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(bool& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(unsigned short& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(short& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(unsigned int& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(long& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(unsigned long& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(unsigned long long& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(float& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(double& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(long double& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(void*& val)
{
	this->stcin >> val;
	return *this;
}

gurlui_in& gurlui_in::operator<<(std::streambuf* sb)
{
	this->stcin >> sb;
	return *this;
}
//
gurlui_in& gurlui_in::operator<<(char& c)
{
	this->stcin >> c;
	return *this;
}

gurlui_in& gurlui_in::operator<<(signed char& c)
{
	this->stcin >> c;
	return *this;
}

gurlui_in& gurlui_in::operator<<(unsigned char& c)
{
	this->stcin >> c;
	return *this;
}

gurlui_in& gurlui_in::operator<<(char* s)
{
	this->stcin >> s;
	return *this;
}

gurlui_in& gurlui_in::operator<<(signed char* s)
{
	this->stcin >> s;
	return *this;
}

gurlui_in& gurlui_in::operator<<(unsigned char* s)
{
	this->stcin >> s;
	return *this;
}

gurlui_in& gurlui_in::operator<<(std::string& s)
{
	this->stcin >> s;
	return *this;
}

template<typename T>
gurlui_in& gurlui_in::operator<<(int_b_template<T>& val)
{
	T x;
	this->stcin >> x;
	val.PutValue(x);
	return *this;
}

