#include <catch2/catch.hpp>
#include "pu3.hpp"

/**
 * Authors (Group Members):
 * Name: Yash Kapoor (Student ID: 101163338)
 * Name: Max Curkovic (Student ID: 101139937)
 */
SCENARIO("Transform input to output PU3") {
  GIVEN("a PU3") {
    sspp::PU3 pu;
    WHEN("Passing 1.0") {
      pu.input(1.0f);
      THEN("The output is correct") {
        auto output = pu.output();
        REQUIRE(output == 1);
      }
    }
    WHEN("Passing 2.0") {
      pu.input(1.5f);
      THEN("The output is correct") {
        auto output = pu.output();
        REQUIRE(output == 1);
      }
    }
    WHEN("Passing 1.0") {
      pu.input(7.9f);
      THEN("The output is correct") {
        auto output = pu.output();
        REQUIRE(output == 7);
      }
    }
  }
}