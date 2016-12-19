#include "igvColor.h"

// Constructures

igvColor::igvColor () {
}

igvColor::~igvColor () {
}

igvColor::igvColor (const double r, const double g, const double b) {
	color[R] = r;
	color[G] = g;
	color[B] = b;
}

igvColor::igvColor (const double r, const double g, const double b, const double a) {
	color[R] = r;
	color[G] = g;
	color[B] = b;
	color[A] = a;
}

igvColor::igvColor (const igvColor& p) {
	color[R] = p.color[R];
	color[G] = p.color[G];
	color[B] = p.color[B];
	color[A] = p.color[A];
}

double& igvColor::operator[] ( const unsigned char idx ) {
	return color[idx];
}

double igvColor::operator[] (const unsigned char idx) const {
	return color[idx];
}

void igvColor::aplicar (void) {
	glColor4dv(color);
}
