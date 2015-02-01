#ifndef _GS_RNG
#define _GS_RNG
#include "inc.h"

namespace glowingshame{

	class RNG
	{
	public:
		RNG();
		~RNG();

		static void seed();
		static void seed(unsigned int newseed);
		static double getdouble();
		static double getdouble(double min, double max);
		static int getint(int min, int max);
		static bool getbool(double probability);
	};
}
#endif