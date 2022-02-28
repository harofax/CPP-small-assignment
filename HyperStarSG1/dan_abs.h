#pragma once
int dan_abs(int a, int b) {
	int diff = a - b;
	return diff > 0 ? diff : -diff;
}