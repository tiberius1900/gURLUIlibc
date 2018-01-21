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
