//Dennis Hahn CS1510 1B Homework #4

#ifndef PACKAGE4D_H
#define PACKAGE4D_H

#include "abstractpackage.h"
#include <string>

using namespace std; 

class Pack4D: public AbstractPackage
{
	private:
	float length, width, height, duration, weight;
	const float rate4D;
	const float handling;
	const float hypRate;

	public:
	Pack4D(string f, string t, float l, float w, float h, float dur, float wght) : AbstractPackage(f, t), length(l),
		width(w), height(h), weight(wght), duration(dur), rate4D(3.14f), handling(42.42f), hypRate(0.01f) {};

	virtual float getCharge() const;
	virtual const string& getFrom() const;
	virtual const string& getTo() const;

};

#include "package4d.hpp"
#endif
