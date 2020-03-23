#pragma once
#include "entity.h"
class Repo
{
private:
	Product entities[10];
	int index;
public:
	Repo();
	~Repo();
	void addEntity(Product e);
	void updateEntity(Product e, Repo list[]);
	void deleteEntity(Product e, Repo list[]);
	void update(Product e, int pos);
	Product getElem(int pos);
	Product* getAll();
	int getSize();
};

