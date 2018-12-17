/*
 * robotheives.cpp
 *
 *  Created on: Dec 7, 2018
 *      Author: oscarsplitfire
 */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main(void) {

	int n, m;
	std::cin >> n;
	std::cin >> m;

	char **grid = new char*[n];
	for (int i = 0; i < n; i++) {
		grid[i] = new char[m];
	}

	return 0;
}


