#include <cppunit/extensions/HelperMacros.h>

#include "data/chunk_list.h"

class ChunkListTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(ChunkListTest);
  CPPUNIT_TEST(test_basic);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp() {}
  void tearDown() {}

  void test_basic();
};

