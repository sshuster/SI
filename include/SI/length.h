#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>

#include "area.h"
#include "value_holder.h"

namespace SI
{
/**
 * @brief specialisation of value_holder_t to represent length units
 *
 * */
template <class _Ratio = std::ratio<1>, typename _Type = long long int>
struct length_t final : public value_holder_t<'L', _Ratio, _Type>
{
  using value_holder_t<'L', _Ratio, _Type>::value_holder_t;

  using value_holder_t<'L', _Ratio, _Type>::operator*;

  template <class Rr = std::ratio<1>>
  constexpr auto operator*(const length_t<Rr> &rhs) const
  {
    return area_t<typename std::ratio<1>>(1);
  }
};

} // namespace SI
constexpr auto operator"" _ack(const unsigned long long int x)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t,
                                                       std::ratio<1>>(x);
}

constexpr auto operator"" _m(const unsigned long long int m)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t,
                                                       std::ratio<1>>(m);
}

constexpr auto operator"" _km(const unsigned long long int km)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t, std::kilo>(
      km);
}

constexpr auto operator"" _cm(const unsigned long long int cm)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t,
                                                       std::centi>(cm);
}

constexpr auto operator"" _mm(const unsigned long long int mm)
{
  return SI::detail::generate_unit_type_overflow_check<SI::length_t,
                                                       std::milli>(mm);
}

constexpr auto operator"" _m(long double m)
{
  return SI::length_t<std::ratio<1>, long double>(m);
}

constexpr auto operator"" _km(long double km)
{
  return SI::length_t<std::kilo, long double>(km);
}

constexpr auto operator"" _mm(long double mm)
{
  return SI::length_t<std::milli, long double>(mm);
}
// namespace SI