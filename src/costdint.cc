#include "costdint.h"

template<typename T>
Belciugatele::int_b_template<T>::int_b_template(const Belciugatele::int_b_template<T>& temp)
{
	this->m_int=temp.m_int;
}


template<typename T>
Belciugatele::int_b_template<T>::int_b_template() {}

template<typename T>
Belciugatele::int_b_template<T>::int_b_template(int x) {
  m_int = x;
}

/*
template<typename T>
Belciugatele::int_b_template<T>::int_b_template(int_b_template<T> x) {
  m_int = x.GetValue();
}
*/

template<typename T>
int Belciugatele::int_b_template<T>::GetValue() {
  return this->m_int;
}

template<typename T>
void Belciugatele::int_b_template<T>::PutValue(int x) {
  m_int = x;
}

template<typename T>
void Belciugatele::int_b_template<T>::PutValue(int_b_template x) {
  m_int = x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator=(int x) {
  m_int = x;
  return m_int;
}

template<typename T>
Belciugatele::int_b_template<T>::operator=(int_b_template x) {
  m_int = x.GetValue();
  return m_int;
}

template<typename T>
Belciugatele::int_b_template<T>::operator+(int x) {
  return m_int + x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator+(int_b_template x) {
  return m_int + x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator-(int x) {
  return m_int - x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator-(int_b_template x) {
  return m_int - x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator*(int x) {
  return m_int * x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator*(int_b_template x) {
  return m_int * x.GetValue();
}

/*
template<typename T>
Belciugatele::int_b_template<T>::operator/(int x) {
  aux_int = m_aux;
  m_aux /= x;
  return this->aux_int / x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator/(int_b_template x) {
  aux_int = m_aux;
  m_aux /= x.GetValue();
  return this->aux_int / x.GetValue();
}


template<typename T>
Belciugatele::int_b_template<T>::operator%(int x) {
  aux_int = m_aux;
  m_aux /= x;
  return this->aux_int % x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator%(int_b_template x) {
  aux_int = m_aux;
  m_aux /= x.GetValue();
  return this->aux_int % x.GetValue();
}
*/

template<typename T>
Belciugatele::int_b_template<T>::operator++() {
  return ++m_int;
}

template<typename T>
Belciugatele::int_b_template<T>::operator--() {
  return --m_int;
}

/*
template<typename T>
Belciugatele::int_b_template::operator++(0) {
  return m_int++;
}

template<typename T>
Belciugatele::int_b_template::operator--(0) {
  return m_int--;
}
*/

template<typename T>
Belciugatele::int_b_template<T>::operator==(int x) {
  return m_int == x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator==(int_b_template x) {
  return m_int == x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator!=(int x) {
  return m_int != x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator!=(int_b_template x) {
  return m_int != x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator<(int x) {
  return m_int < x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator<(int_b_template x) {
  return m_int < x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator>(int x) {
  return m_int > x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator>(int_b_template x) {
  return m_int > x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator<=(int x) {
  return m_int <= x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator<=(int_b_template x) {
  return m_int <= x.GetValue();
}

template<typename T>
Belciugatele::int_b_template<T>::operator>=(int x) {
  return m_int >= x;
}

template<typename T>
Belciugatele::int_b_template<T>::operator>=(int_b_template x) {
  return m_int >= x.GetValue();
}

namespace Belciugatele {
  template class Belciugatele::int_b_template<int>;
  template class Belciugatele::int_b_template<std::intmax_t>;
  template class Belciugatele::int_b_template<std::int8_t>;
  template class Belciugatele::int_b_template<std::int16_t>;
  template class Belciugatele::int_b_template<std::int32_t>;
  template class Belciugatele::int_b_template<std::int64_t>;
  template class Belciugatele::int_b_template<std::int_least8_t>;
  template class Belciugatele::int_b_template<std::int_least16_t>;
  template class Belciugatele::int_b_template<std::int_least32_t>;
  template class Belciugatele::int_b_template<std::int_least64_t>;
  template class Belciugatele::int_b_template<std::int_fast8_t>;
  template class Belciugatele::int_b_template<std::int_fast16_t>;
  template class Belciugatele::int_b_template<std::int_fast32_t>;
  template class Belciugatele::int_b_template<std::int_fast64_t>;
  template class Belciugatele::int_b_template<std::uintmax_t>;
  template class Belciugatele::int_b_template<std::uint8_t>;
  template class Belciugatele::int_b_template<std::uint16_t>;
  template class Belciugatele::int_b_template<std::uint32_t>;
  template class Belciugatele::int_b_template<std::uint64_t>;
  template class Belciugatele::int_b_template<std::uint_least8_t>;
  template class Belciugatele::int_b_template<std::uint_least16_t>;
  template class Belciugatele::int_b_template<std::uint_least32_t>;
  template class Belciugatele::int_b_template<std::uint_least64_t>;
  template class Belciugatele::int_b_template<std::uint_fast8_t>;
  template class Belciugatele::int_b_template<std::uint_fast16_t>;
  template class Belciugatele::int_b_template<std::uint_fast32_t>;
  template class Belciugatele::int_b_template<std::uint_fast64_t>; 
}
