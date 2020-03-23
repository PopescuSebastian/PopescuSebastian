#include "Controller.h"
#include "entity.h"
#include "repo.h"
Product Contr_add_elem(char* name, date d, float price) {
	Product e(name, d, price);
	return e;
}

Product Contr_upd_elem(char* name, date d, float price) {
	Product e(name, d, price);
	return e;
}

Product Contr_del_elem(char* name) {
	date d(0, 0, 0);
	Product e(name, d, 0);
	return e;
}