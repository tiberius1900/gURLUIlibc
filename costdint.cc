#include "costdint.h"

Belciugatele::int_b_template::int_b_template() {}

Belciugatele::int_b_template::int_b_template(int x) {
  m_int = x;
}

Belciugatele::int_b_template::int_b_template(int_b_template x) {
  m_int = x.GetValue();
}

int Belciugatele::int_b_template::GetValue() {
  return m_int;
}

void Belciugatele::int_b_template::PutValue(int x) {
  m_int = x;
}

void Belciugatele::int_b_template::PutValue(int_b_template x) {
  m_int = x.GetValue();
}

Belciugatele::int_b_template::operator=(int x) {
  m_int = x;
  return m_int;
}

Belciugatele::int_b_template::operator=(int_b_template x) {
  m_int = x.GetValue();
  return m_int;
}

Belciugatele::int_b_template::operator+(int x) {
  return m_int + x;
}

Belciugatele::int_b_template::operator+(int_b_template x) {
  return m_int + x.GetValue();
}

Belciugatele::int_b_template::operator-(int x) {
  return m_int - x;
}

Belciugatele::int_b_template::operator-(int_b_template x) {
  return m_int - x.GetValue();
}

Belciugatele::int_b_template::operator*(int x) {
  return m_int * x;
}

Belciugatele::int_b_template::operator*(int_b_template x) {
  return m_int * x.GetValue();
}

Belciugatele::int_b_template::operator/(int x) {
  aux_int = m_aux;
  m_aux /= x;
  return aux_int / x;
}

Belciugatele::int_b_template::operator/(int_b_template x) {
  aux_int = m_aux;
  m_aux /= x.GetValue();
  return aux_int / x.GetValue();
}

Belciugatele::int_b_template::operator%(int x) {
  aux_int = m_aux;
  m_aux /= x;
  return aux_int % x;
}

Belciugatele::int_b_template::operator%(int_b_template x) {
  aux_int = m_aux;
  m-aux /= x.GetValue();
  return aux_int % x.GetValue();
}

Belciugatele::int_b_template::operator++() {
  return ++m_int;
}

Belciugatele::int_b_template::operator--() {
  return --m_int;
}

Belciugatele::int_b_template::operator++(0) {
  return m_int++;
}

Belciugatele::int_b_template::operator--(0) {
  return m_int--;
}

Belciugatele::int_b_template::operator==(int x) {
  return m_int == x;
}

Belciugatele::int_b_template::operator==(int_b_template x) {
  return m_int == x.GetValue();
}

Belciugatele::int_b_template::operator!=(int x) {
  return m_int != x;
}

Belciugatele::int_b_template::operator!=(int_b_template x) {
  return m_int != x.GetValue();
}

Belciugatele::int_b_template::operator<(int x) {
  return m_int < x;
}

Belciugatele::int_b_template::operator<(int_b_template x) {
  return m_int < x.GetValue();
}

Belciugatele::int_b_template::operator>(int x) {
  return m_int > x;
}

Belciugatele::int_b_template::operator>(int_b_template x) {
  return m_int > x.GetValue();
}

Belciugatele::int_b_template::operator<=(int x) {
  return m_int <= x;
}

Belciugatele::int_b_template::operator<=(int_b_template x) {
  return m_int <= x.GetValue();
}

Belciugatele::int_b_template::operator>=(int x) {
  return m_int >= x;
}

Belciugatele::int_b_template::operator>=(int_b_template x) {
  return m_int >= x.GetValue();
}
