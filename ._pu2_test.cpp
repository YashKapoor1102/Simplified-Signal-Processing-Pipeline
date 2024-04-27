#include <catch2/catch.hpp>
#include "pu2.hpp"

/**
 * Authors (Group Members):
 * Name: Yash Kapoor (Student ID: 101163338)
 * Name: Max Curkovic (Student ID: 101139937)
 */
SCENARIO("Transform single input to output") {
  GIVEN("a PU2") {
    sspp::PU2 pu;
    WHEN("Passing [1.0, 2.0, 3.0]") {
      std::array<float, 3> input = {1.0, 2.0, 3.0};
      pu.input(input);
      THEN("The output is correct") {
        auto output = pu.output();
        float expected = 3.0;
        REQUIRE(output == expected);
      }
    }
  }
}

SCENARIO(
    "Transform multiple input to output and check the accumulation works") {
  GIVEN("a PU2") {
    sspp::PU2 pu;
    WHEN("Passing [1.0, 2.0, 3.0], [1.0, 1.2, 1.5], [5.0, 2.0, 1.0]") {
      std::array<float, 3> input = {1.0, 2.0, 3.0};
      pu.input(input);
      THEN("The output is correct") {
        auto output = pu.output();
        float expected = 3.0;
        REQUIRE(output == expected);
      }
      input = {1.0, 1.2, 1.5};
      pu.input(input);
      THEN("The output is correct") {
        auto output = pu.output();
        float expected = 3.0;
        REQUIRE(output == expected);
      }
      input = {5.0, 2.0, 1.0};
      pu.input(input);
      THEN("The output is correct") {
        auto output = pu.output();
        float expected = 5.0;
        REQUIRE(output == expected);
      }
    }
  }
}