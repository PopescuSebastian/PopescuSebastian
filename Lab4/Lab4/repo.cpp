#include "repo.h"
#include "Entity.h";
#include "string.h"
Repo::Repo() {
	this->index = 0;
}

Repo::~Repo() {
	this->index = 0;
}

Product Repo::getElem(int pos) {
	return this->entities[pos];
}

void Repo::addEntity(Product e) {
	this->entities[this->index++] = e;
}

Product* Repo::getAll() {
	return this->entities;
}

int Repo::getSize() {
	return this->index;
}

void Repo::update(Product e, int pos) {
	this->entities[pos] = e;
}

void Repo::updateEntity(Product e, Repo list[]){
	int repo_size;
	repo_size = list->getSize();
	Product e2;
	for (int i = 0; i < repo_size; i++) {
		e2 = list->getElem(i);
		if (strcmp(e.getName(), e2.getName()) == 0) {
			list->update(e, i);
		}
	}
}

void Repo::deleteEntity(Product e, Repo list[]) {
	int repo_size;
	repo_size = list->getSize();
	Product e2;
	for (int i = 0; i < repo_size; i++) {
		e2 = list->getElem(i);
		if (strcmp(e.getName(), e2.getName()) == 0) {
			
		}
	}
}