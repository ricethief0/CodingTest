#pragma once
#include <iostream>

#define PI 3.1415926535897932;

using namespace std;

void 택시기하학()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	double r,u,t;
	cin >> r;

	u = (r * r) * PI;
	t = (double)2 * (r * r);

	printf("%lf\n", u);
	printf("%lf\n", t);

	return;
}