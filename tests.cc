#include "lhc-generator.h"
#include "gtest/gtest.h"

#include "lhc-generator.cc"

TEST(RandomNVector, IncreasingValuesInVector) {
  Eigen::VectorXd x = RandomNVector(100);
  for (size_t i = 0; i < (size_t)x.size() - 1; ++i) {
    ASSERT_LT(x[i], x[i + 1]) << "Vector values do not increase continuously ";
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  std::cout << RUN_ALL_TESTS(); // wieso kann ich das benutzen ohne #include
                                // <iostream> wird wohl in einer der
                                // importierten librarys mit geladen
  return 0;
}
