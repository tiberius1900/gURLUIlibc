#ifndef GURLUILIBC_COSTIOSTREAM_H_
#define GURLUILIBC_COSTIOSTREAM_H_

#include <iostream>
#include "costdint.h"

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
			template<class T>
			gurlui_out& operator>>(T a);
			template<class T>
			gurlui_out& operator>>(const int_b_template<T>& val);
	};
	class gurlui_in
	{
		public:
			std::istream& stcin;

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
			gurlui_in(std::istream& os);
			template<class T>
			gurlui_in& operator<<(T a);
			template<class T>
			gurlui_in& operator<<(const int_b_template<T>& val);
	};
}

#endif
