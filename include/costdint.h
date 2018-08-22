#ifndef GURLUILIBC_COSTDINT_H_
#define GURLUILIBC_COSTDINT_H_

#include <cstdint>

namespace Belciugatele {

  template<class T> class int_b_template {
  public:
    int_b_template();
    int_b_template(int x);
    //int_b_template(int_b_template<T> x);
    int_b_template<T>(const Belciugatele::int_b_template<T>& temp);
    int GetValue();
    void PutValue(int x);
    void PutValue(int_b_template x);
    
    operator=(int x);
    operator=(int_b_template x);
    operator+(int x);
    operator+(int_b_template x); 
    operator-(int x);
    operator-(int_b_template x); 
    operator*(int x);
    operator*(int_b_template x); 
    /*
    operator/(int x);
    operator/(int_b_template x);
    operator%(int x);
    operator%(int_b_template x); 
    */
    operator++();
    operator--(); 
    //operator++(0);
    //operator--(0); 
    operator==(int x);
    operator==(int_b_template x);
    operator!=(int x);
    operator!=(int_b_template x);
    operator<(int x);
    operator<(int_b_template x); 
    operator>(int x);
    operator>(int_b_template x); 
    operator<=(int x);
    operator<=(int_b_template x); 
    operator>=(int x);
    operator>=(int_b_template x); 

  private:
    T m_int;
  };

  typedef int_b_template<int> int_b;
  typedef int_b_template<std::intmax_t> intmax_b;
  typedef int_b_template<std::int8_t> int8_b;
  typedef int_b_template<std::int16_t> int16_b;
  typedef int_b_template<std::int32_t> int32_b;
  typedef int_b_template<std::int64_t> int64_b;
  typedef int_b_template<std::int_least8_t> int_least8_b;
  typedef int_b_template<std::int_least16_t> int_least16_b;
  typedef int_b_template<std::int_least32_t> int_least32_b;
  typedef int_b_template<std::int_least64_t> int_least64_b;
  typedef int_b_template<std::int_fast8_t> int_fast8_b;
  typedef int_b_template<std::int_fast16_t> int_fast16_b;
  typedef int_b_template<std::int_fast32_t> int_fast32_b;
  typedef int_b_template<std::int_fast64_t> int_fast64_b;
  typedef int_b_template<std::uintmax_t> uintmax_b;
  typedef int_b_template<std::uint8_t> uint8_b;
  typedef int_b_template<std::uint16_t> uint16_b;
  typedef int_b_template<std::uint32_t> uint32_b;
  typedef int_b_template<std::uint64_t> uint64_b;
  typedef int_b_template<std::uint_least8_t> uint_least8_b;
  typedef int_b_template<std::uint_least16_t> uint_least16_b;
  typedef int_b_template<std::uint_least32_t> uint_least32_b;
  typedef int_b_template<std::uint_least64_t> uint_least64_b;
  typedef int_b_template<std::uint_fast8_t> uint_fast8_b;
  typedef int_b_template<std::uint_fast16_t> uint_fast16_b;
  typedef int_b_template<std::uint_fast32_t> uint_fast32_b;
  typedef int_b_template<std::uint_fast64_t> uint_fast64_b; 
}
  
#endif
