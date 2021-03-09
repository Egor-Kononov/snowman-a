/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Egor Kononov>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
TEST_CASE("Good snowman code") {

    CHECK(snowman(21114411) == string("  ___\n .....\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(31114411) == string("   _\n  /_\\\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(41114411) == string("  ___\n (_*_) \n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(11114411) == string(" _===_\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(22114411) == string("  ___\n .....\n (...)\n ( : )\n ( : )"));
    CHECK(snowman(33114411) == string("   _\n  /_\\\n (._.)\n ( : )\n ( : )"));
    CHECK(snowman(44114411) == string("  ___\n (_*_) \n (. .) \n ( : )\n ( : )"));
    CHECK(snowman(11114411) == string(" _===_\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(22214411) == string("  ___\n .....\n (o..)\n ( : )\n ( : )"));
    CHECK(snowman(33314411) == string("   _\n  /_\\\n (O_.)\n ( : )\n ( : )"));
    CHECK(snowman(44414411) == string("  ___\n (_*_)\n (- .)\n ( : )\n ( : )"));
    CHECK(snowman(11114411) == string(" _===_\n (.,.) \n ( : )\n ( : )"));
    CHECK(snowman(22224411) == string("  ___\n .....\n (o.o)\n ( : )\n ( : )"));
    CHECK(snowman(44444411) == string("  ___\n (_*_)\n (- -)\n ( : )\n ( : )"));
    CHECK(snowman(44414411) == string("  ___\n (_*_)\n (- .)\n ( : )\n ( : )"));
    CHECK(snowman(33313311) == string("   _\n  /_\\\n (O_.)\n/( : )\\\n ( : )"));
    CHECK(snowman(11111111) == string(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(22212411) == string("  ___\n ..... \n\\(o..)\n ( : )\n ( : )"));
    CHECK(snowman(44414411) == string("  ___\n (_*_)\n (- .)\n ( : )\n ( : )"));
    CHECK(snowman(11111411) == string(" _===_ \n (.,.)\n<( : )\n ( : )"));


}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(111144114));
    CHECK_THROWS(snowman(22115114));
    CHECK_THROWS(snowman(-22132233));
    CHECK_THROWS(snowman(11014411));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(-33333333));

}



