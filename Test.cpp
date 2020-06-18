//
// Created by yonatan on 18/06/2020.
#include "doctest.h"
#include <iostream>
#include <vector>
#include <limits>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"


using namespace itertools;
using namespace std;


TEST_CASE ("range") {
    CHECK_NOTHROW( for (int i: range(5, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(5, 6)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(4, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(-1, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(5, 12)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(5, 13)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(    for (int i: range(4, 8)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 10)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 20)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 14)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 7)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 8)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 16)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(6, 13)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(3, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(4, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(2, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(2, 10)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(2, 11)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(7, 9)) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: range(7, 8)) {
        cout << i << " ";
    });
//
}

TEST_CASE ("accumulate range") {
    CHECK_NOTHROW(
    for (int i: accumulate(range(5, 9))) {
        cout << i << " ";
    } );
    CHECK_NOTHROW(for (int i: accumulate(range(5, 10))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(1, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(2, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(3, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(4, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(5, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(6, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(6, 8))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(6, 7))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(8, 10))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(8, 12))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(8, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(3, 9))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(3, 5))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(for (int i: accumulate(range(3, 6))) {
        cout << i << " ";
    });
}

TEST_CASE ("accumulate string") {
    vector <string> vecString = {"Hello", "Bye", "Adam"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString1 = {"un", "deux", "trois"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString1)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString2= {"dth", "Bythe", "hteth"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString2)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString3 = {"Hello", "Bye"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString3)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString4= {"trheh", "ry", "rjwry"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString4)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString5= {"xbnxn", "xhnfhn", "xfhnmyn"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString5)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString6 = {"srthrt", "srhrth", "teyrte"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString6)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString7 = {"srthgfn", "ffshtrs", "sryjsrj"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString7)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString8 = {"srjsr", "sryj", "sryj"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString8)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString9 = {"thrtsh", "Bysrte", "Abtyhdam"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString9)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString11 = {"th", "Bytye", "t"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString11)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString12 = {"t", "t", "t"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString12)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString13 = {"e", "e", "e"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString13)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString14 = {"Hello", "Bye", "Adam"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString14)) {
        cout << i << " ";
    });
    vector <string> vecString15 = {"Hello", "Bye", "Adam"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString15)) {
        cout << i << " ";  //
    });
    vector <string> vecString16 = {"t", "t", "h"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString16)) {
        cout << i << " ";
    });
    vector <string> vecString17 = {"h", "h", "rt"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString17)) {
        cout << i << " ";
    });
    vector <string> vecString18 = {"sw", "w", "ht"};
    CHECK_NOTHROW( for (auto i: accumulate(vecString18)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString19 = {"gr", "eg", "gre"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString19)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString20 = {"ae", "eerth", "eh"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString20)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
    vector <string> vecString21 = {"eth", "ge", "eth"};
    CHECK_NOTHROW(for (auto i: accumulate(vecString21)) {
        cout << i << " ";  // Hello HelloBye HelloByeAdam
    });
}

TEST_CASE ("filterfalse") {
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 2 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(   for (auto i: filterfalse([](int i) { return i % 3 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 4 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 5 == 0; }, range(1, 20)))
        cout << i << " ";);
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 6 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 7 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 8 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 9 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 10 == 0; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 3; }, range(1, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 4; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 5; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 6; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 7; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 8; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i + i > 16; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i % 4 == 1; }, range(6, 20)))
        cout << i << " ";
    for (auto i: filterfalse([](int i) { return i > 9; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 10; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 11; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 12; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 13; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 14; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 15; }, range(6, 20)))
        cout << i << " ";
    );
    CHECK_NOTHROW(for (auto i: filterfalse([](int i) { return i > 16; }, range(6, 20)))
        cout << i << " ";
    );
}

TEST_CASE (" compress range") {
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 9), vector<bool>({true, false, false, true}))) {
        cout << i << " ";
    });

    CHECK_NOTHROW(for (auto i: compress(range(5, 9), vector<bool>({true, true, true, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 9), vector<bool>({true, true, false, false}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 9), vector<bool>({false, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 9), vector<bool>({true, false, false, false}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 9), vector<bool>({false, true, false, false}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, true, false, false, false, false}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({false, true, false, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, true, true, true, true, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, false, false, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, true, false, true, false, false}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, true, false, true, true, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, true, false, false, true, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({false, false, false, true, true, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, true, false, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(range(5, 11), vector<bool>({true, false, false, false, true, true}))) {
        cout << i << " ";
    });
}

TEST_CASE ("compress string") {
    CHECK_NOTHROW(
    for (auto i: compress(string("sdfg"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("wert"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("kjhg"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("cbfs"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("dcvb"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("xheg"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("njuh"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("qldj"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("rofg"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("xgyi"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    CHECK_NOTHROW(
    for (auto i: compress(string("cydh"), vector<bool>({true, true, false, true}))) {
        cout << i << " ";
    });
    cout << "\n ";
}