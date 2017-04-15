//Dennis Hahn CS1510 1B Homework #4

#ifndef PACKAGE2D_H
#define PACKAGE2D_H

#include "abstractpackage.h"
#include <string>

using namespace std; 

class Pack2D: public AbstractPackage
{
private:
	float length, width;
	const float rate2D;

public:
	Pack2D(string f, string t, float l, float w) : AbstractPackage(f, t), length(l), 
		width(w), rate2D(0.05f) {};

	virtual float getCharge() const;
	virtual const string& getFrom() const;
	virtual const string& getTo() const;

};

#include "package2d.hpp"
#endif

