#include <catch2/catch.hpp>
#include "pu1.hpp"

/**
 * Authors (Group Members):
 * Name: Yash Kapoor (Student ID: 101163338)
 * Name: Max Curkovic (Student ID: 101139937)
 */
SCENARIO("Transform input to output PU1") {
  GIVEN("a PU1") {
    sspp::PU1 pu;
    WHEN("Passing [1, 2, 3, 4, 5]") {
      std::array<int, 5> input = {1, 2, 3, 4, 5};
      pu.input(input);
      THEN("The output is correct") {
        auto output = pu.output();
        std::array<float, 3> expected = {3.0, 3.0, 3.0};
        REQUIRE(std::equal(output.begin(), output.end(), expected.begin()));
      }
    }
  }
}