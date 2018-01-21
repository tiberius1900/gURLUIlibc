#ifndef GURLUILIBC_COSTIOSTREAM_H_
#define GURLUILIBC_COSTIOSTREAM_H_

#include <iostream>
#include "../costdint/costdint.cc"
//include "../costdint/costdint.h"

namespace Belciugatele
{
	class gurlui_out
	{
		public:
			std::ostream& stcout;
			std::ostream& flush();
			std::ostream& put(char c);
			std::ostream& write(const char* s, std::streamsize n);
			std::ostream& seekp(std::streampos pos);
			std::ostream& seekp(std::streamoff off, std::ios_base::seekdir way);
			std::streampos tellp();
			gurlui_out(std::ostream& os);

			gurlui_out& operator>>(int val);
			gurlui_out& operator>>(bool val);
			gurlui_out& operator>>(unsigned short val);
			gurlui_out& operator>>(short val);
			gurlui_out& operator>>(unsigned int val);
			gurlui_out& operator>>(long val);
			gurlui_out& operator>>(unsigned long val);
			gurlui_out& operator>>(unsigned long long val);
			gurlui_out& operator>>(float val);
			gurlui_out& operator>>(double val);
			gurlui_out& operator>>(long double val);
			gurlui_out& operator>>(void* val);
			gurlui_out& operator>>(std::streambuf* sb);
			//
			gurlui_out& operator>>(char c);
			gurlui_out& operator>>(signed char c);
			gurlui_out& operator>>(unsigned char c);
			gurlui_out& operator>>(const char* s);
			gurlui_out& operator>>(const signed char* s);
			gurlui_out& operator>>(const unsigned char* s);
			gurlui_out& operator>>(std::string s);
			template<typename T> gurlui_out& operator>>(const int_b_template<T>& val);
	} bout(std::cout);

	class gurlui_in
	{
		public:
			std::istream& stcin;
			gurlui_in(std::istream& os);

			std::streamsize gcount() const;
			int get();
			std::istream& get(char& c);
			std::istream& get(char* s, std::streamsize n);
			std::istream& get(char* s, std::streamsize n, char delim);
			std::istream& get(std::streambuf& sb);
			std::istream& get(std::streambuf sb,char delim);
			std::istream& getline(char* s, std::streamsize n);
			std::istream& getline(char* s, std::streamsize n, char delim);
			std::istream& ignore(std::streamsize n=1, int delim = EOF);
			int peek();
			std::istream& read(char* s, std::streamsize n);
			std::streamsize readsome(char* s, std::streamsize n);
			std::istream& putback(char c);
			std::istream& unget(char c);
			std::streampos tellg();
			std::istream& seekg(std::streampos pos);
			std::istream& seekg(std::streamoff off, std::ios_base::seekdir way);
			//
			gurlui_in& operator<<(int& val);
			gurlui_in& operator<<(bool& val);
			gurlui_in& operator<<(unsigned short& val);
			gurlui_in& operator<<(short& val);
			gurlui_in& operator<<(unsigned int& val);
			gurlui_in& operator<<(long& val);
			gurlui_in& operator<<(unsigned long& val);
			gurlui_in& operator<<(unsigned long long& val);
			gurlui_in& operator<<(float& val);
			gurlui_in& operator<<(double& val);
			gurlui_in& operator<<(long double& val);
			gurlui_in& operator<<(void*& val);
			gurlui_in& operator<<(std::streambuf* sb);
			//
			gurlui_in& operator<<(char& c);
			gurlui_in& operator<<(signed char& c);
			gurlui_in& operator<<(unsigned char& c);
			gurlui_in& operator<<(char* s);
			gurlui_in& operator<<(signed char* s);
			gurlui_in& operator<<(unsigned char* s);
			gurlui_in& operator<<(std::string& s);
			template<typename T> gurlui_in& operator<<(int_b_template<T>& val);	
	} bin(std::cin);
}

#endif
