/** monotonic_clock/include/monotonic_clock.h
 *
 *  By Thomas Habets <thomas@habets.pp.se> 2010
 *
 */
#ifndef __INCLUDE__MONOTONIC_CLOCK_H__
#define __INCLUDE__MONOTONIC_CLOCK_H__

#ifdef __cplusplus
extern "C" {
#endif

extern const char* monotonic_clock_name;

int    monotonic_clock_is_monotonic();
double clock_get_dbl();
double clock_get_dbl_fallback();

#ifdef __cplusplus
}
#endif

#endif /*  __INCLUDE__MONOTONIC_CLOCK_H__ */
