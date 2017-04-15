//Dennis Hahn CS1510 1B Homework #4

#ifndef PACKAGE3D_H
#define PACKAGE3D_H

#include "abstractpackage.h"
#include <string>

using namespace std; 

class Pack3D: public AbstractPackage
{
	private:
	float length, width, height, weight;
	const float rate3D;
	const float volRate;

	public:
	Pack3D(string f, string t, float l, float w, float h, float wght) : AbstractPackage(f, t), length(l), 
		width(w), height(h), weight(wght), rate3D(2.71f), volRate(0.02f) {};

	virtual float getCharge() const;
	virtual const string& getFrom() const;
	virtual const string& getTo() const;
	
};

#include "package3d.hpp"
#endif

