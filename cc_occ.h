#pragma once
#include "global.h"
#include "data_occ.h"
#include <thread>
using namespace std;

class cc_occ{
public:
	cc_occ() {
		engine = Engine();
		occ_man = data_occ();
	}

	~cc_occ() {

	}

	//write request
	/*
	add the data into wset of this txn
	*/
	RC update(string key, int value, txn_man * txn);

	//read request
	/*
	add the data into rset of this txn
	*/
	RC get(string key, int& value, txn_man * txn);

	RC commit(txn_man * txn);

	data_occ occ_man;
	Engine engine;
};