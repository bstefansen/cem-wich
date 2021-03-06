#ifndef BMI_CEM_H_INCLUDED
#define BMI_CEM_H_INCLUDED

#if defined(__cplusplus)
extern "C" {
#endif


#define SUCCESS (0)
#define FAILURE (1)

#include "cem_EXPORTS.h"
#include "config.h"

cem_EXPORT int run_test(Config config, int numTimesteps, int saveInterval);
cem_EXPORT int initialize(Config config);
cem_EXPORT int update(int saveInterval);
cem_EXPORT int finalize();

#if defined(__cplusplus)
}
#endif

#endif
