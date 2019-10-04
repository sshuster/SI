#include <catch.hpp>

#include <SI/radioactivity.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mBq THEN result is a "
          "radioactivity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Bq THEN result is a "
          "radioactivity type AND ratio 1 to 1") {
  constexpr auto one = 1_Bq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Bq;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::radioactivity_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kBq THEN result is a "
          "radioactivity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MBq THEN result is a "
          "radioactivity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GBq THEN result is a "
          "radioactivity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TBq THEN result is a "
          "radioactivity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PBq THEN result is a "
          "radioactivity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EBq THEN result is a "
          "radioactivity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto Bequel WHEN passed to a streaming operator THEN "
          "result is '1aBq'") {
  constexpr auto value = 1_aBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1aBq");
}

TEST_CASE("GIVEN a 1 femto Bequel WHEN passed to a streaming operator THEN "
          "result is '1fBq'") {
  constexpr auto value = 1_fBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fBq");
}

TEST_CASE("GIVEN a 1 pico Bequel WHEN passed to a streaming operator THEN "
          "result is '1pBq'") {
  constexpr auto value = 1_pBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pBq");
}

TEST_CASE("GIVEN a 1 nano Bequel WHEN passed to a streaming operator THEN "
          "result is '1pBq'") {
  constexpr auto value = 1_nBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nBq");
}

TEST_CASE("GIVEN a 1 micro Bequel WHEN passed to a streaming operator THEN "
          "result is '1uBq'") {
  constexpr auto value = 1_uBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1uBq");
}

TEST_CASE("GIVEN a 1 milli Bequel WHEN passed to a streaming operator THEN "
          "result is '1mBq'") {
  constexpr auto value = 1_mBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mBq");
}

TEST_CASE("GIVEN a 1 Bequel WHEN passed to a streaming operator THEN result is "
          "'1Bq'") {
  constexpr auto value = 1_Bq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Bq");
}

TEST_CASE("GIVEN a 1 kilo Bequel WHEN passed to a streaming operator THEN "
          "result is '1kBq'") {
  constexpr auto value = 1_kBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kBq");
}

TEST_CASE("GIVEN a 1 mega Bequel WHEN passed to a streaming operator THEN "
          "result is '1MBq'") {
  constexpr auto value = 1_MBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1MBq");
}

TEST_CASE("GIVEN a 1 giga Bequel WHEN passed to a streaming operator THEN "
          "result is '1GBq'") {
  constexpr auto value = 1_GBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1GBq");
}

TEST_CASE("GIVEN a 1 tera Bequel WHEN passed to a streaming operator THEN "
          "result is '1TBq'") {
  constexpr auto value = 1_TBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1TBq");
}

TEST_CASE("GIVEN a 1 exa Bequel WHEN passed to a streaming operator THEN "
          "result is '1EBq'") {
  constexpr auto value = 1_EBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1EBq");
}

TEST_CASE("GIVEN a 1 peta Bequel WHEN passed to a streaming operator THEN "
          "result is '1PBq'") {
  constexpr auto value = 1_PBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1PBq");
}