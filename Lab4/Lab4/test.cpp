#include "repo.h"
#include "entity.h"
#include <iostream>
#include <assert.h>
#include <string.h>

void testRepo() {
	Repo entities[5];
	char* name1 = new char[15];
	char* name2 = new char[15];
	char* name3 = new char[15];
	char* name4 = new char[15];
	char* name5 = new char[15];
	date d1(1, 2, 3);
	date d2(2, 3, 4);
	date d3(3, 4, 5);
	date d4(4, 5, 6);
	date d5(5, 6, 7);

	strcpy_s(name1, sizeof "aaa", "aaa");
	strcpy_s(name2, sizeof "bbb", "bbb");
	strcpy_s(name3, sizeof "ccc", "ccc");
	strcpy_s(name4, sizeof "aaa", "aaa");
	strcpy_s(name5, sizeof "bbb", "bbb");

	Product e1(name1, d1, 5), e2(name2, d2, 6), e3(name3, d3, 7), e4(name4, d4, 8), e5(name5, d5, 9);
	Product a1, a2, a3, a4, a5;
	entities->addEntity(e1);
	entities->addEntity(e2);
	entities->addEntity(e3);
	entities->addEntity(e4);
	entities->addEntity(e5);

	assert(entities->getSize() == 5);
	a1 = entities->getElem(0);
	assert(a1 == e1);
}

void testEntity() {
	Product();
	char* name1 = new char[15];
	char* name2 = new char[15];
	char* name3 = new char[15];
	char* name4 = new char[15];
	char* name5 = new char[15];

	strcpy_s(name1, sizeof "aaa", "aaa");
	strcpy_s(name2, sizeof "bbb", "bbb");
	strcpy_s(name3, sizeof "ccc", "ccc");
	strcpy_s(name4, sizeof "aaa", "aaa");
	strcpy_s(name5, sizeof "bbb", "bbb");

	date d1(1, 2, 3);
	date d2(2, 3, 4);
	date d3(3, 4, 5);
	date d4(4, 5, 6);
	date d5(5, 6, 7);

	Product e1(name1, d1, 5), e2(name2, d2, 6), e3(name3, d3, 7), e4(name4, d1, 5), e5(name5, d2, 6);

	assert(e1 == e4);
	assert(e2 == e5);
	e3 = e4;
	assert(e3 == e4);
	e3.setName(name5);
	e3.setStock_refill(d2);
	e3.setPrice(6);
	assert(e3 == e5);
}

void runTests() {
	testRepo();
	std::cout << "Repo tests passed!\n";
	testEntity();
	std::cout << "Entity tests passed!\nAll tests have passed!\n";
}