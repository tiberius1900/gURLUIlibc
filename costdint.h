#ifndef GURLUILIBC_COSTDINT_H_
#define GURLUILIBC_COSTDINT_H_

#include <cstdint>

namespace Belciugatele {

  template<class T> class int_b_template {
  public:
    int_b_template();
    int_b_template(int x);
    int_b_template(int_b_template x);    
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
    operator/(int x);
    operator/(int_b_template x);
    operator%(int x);
    operator%(int_b_template x); 
    operator++();
    operator--(); 
    operator++(0);
    operator--(0); 
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
  typedef int_b_template<intmax_t> intmax_b;
  typedef int_b_template<int8_t> int8_b;
  typedef int_b_template<int16_t> int16_b;
  typedef int_b_template<int32_t> int32_b;
  typedef int_b_template<int64_t> int64_b;
  typedef int_b_template<int_least8_t> int_least8_b;
  typedef int_b_template<int_least16_t> int_least16_b;
  typedef int_b_template<int_least32_t> int_least32_b;
  typedef int_b_template<int_least64_t> int_least64_b;
  typedef int_b_template<int_fast8_t> int_fast8_b;
  typedef int_b_template<int_fast16_t> int_fast16_b;
  typedef int_b_template<int_fast32_t> int_fast32_b;
  typedef int_b_template<int_fast64_t> int_fast64_b;
  typedef int_b_template<uintmax_t> uintmax_b;
  typedef int_b_template<uint8_t> uint8_b;
  typedef int_b_template<uint16_t> uint16_b;
  typedef int_b_template<uint32_t> uint32_b;
  typedef int_b_template<uint64_t> uint64_b;
  typedef int_b_template<uint_least8_t> uint_least8_b;
  typedef int_b_template<uint_least16_t> uint_least16_b;
  typedef int_b_template<uint_least32_t> uint_least32_b;
  typedef int_b_template<uint_least64_t> uint_least64_b;
  typedef int_b_template<uint_fast8_t> uint_fast8_b;
  typedef int_b_template<uint_fast16_t> uint_fast16_b;
  typedef int_b_template<uint_fast32_t> uint_fast32_b;
  typedef int_b_template<uint_fast64_t> uint_fast64_b;
  
  
}

  
#endif
