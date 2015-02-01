#include "RNG.h"

using namespace glowingshame;

static std::random_device rd;
static std::mt19937 gen;

RNG::RNG()
{
}


RNG::~RNG()
{
}


void RNG::seed()
{
	gen.seed(rd());
}


void RNG::seed(unsigned int newseed)
{
	gen.seed(newseed);
}



double RNG::getdouble()
{
	return (1.0 * gen() - gen.min()) / (gen.max() - gen.min());
}


double RNG::getdouble(double min, double max)
{
	return getdouble()*(max - min) + min;
}


int RNG::getint(int min, int max)
{
	return (int)getdouble(min, max);
}


bool RNG::getbool(double probability)
{
	return (getdouble() < probability);
}