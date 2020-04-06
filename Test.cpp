/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * Date: 2020-02
 */

#include "doctest.h"
#include "FamilyTree.hpp"
//using namespace ariel;

TEST_CASE("Test case 1") {
    FamilyTree V;

    V.addNew("adam", 'm');
    V.addNew("hava", 'f', 'w', "adam");
    V.addNew("shem", 'm', 'c', "adam");
    V.addNew("ham", 'm', 'c', "hava");
    V.addNew("yefet", 'm', 's', "ham");
    V.addNew("kar", 'f', 'w', "ham");
    V.addNew("posher", 'm', 'c', "ham");

            CHECK(V.findRelation("posher", 'g') == string("adam"));

}

TEST_CASE("Test case 2") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 3") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 4") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 5") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 6") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 7") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 8") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 9") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 10") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 11") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 12") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 13") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 14") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 15") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 16") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 17") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

        CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 18") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 19") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}
TEST_CASE("Test case 20") {
    FamilyTree T;
    T.addNew("adam", 'm');
    T.addNew("hava", 'f', 'w', "adam");
    T.addNew("shem", 'm', 'c', "adam");
    T.addNew("ham", 'm', 'c', "hava");
    T.addNew("yefet", 'm', 's', "ham");
    T.addNew("kar", 'f', 'w', "ham");
    T.addNew("posher", 'm', 'c', "ham");

            CHECK(T.findRelation("posher", 'g') == string("adam"));
}

