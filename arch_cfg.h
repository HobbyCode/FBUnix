#ifndef _arch_cfg_h
#define _arch_cfg_h

#ifdef _x86_64
# include "/arch/x86_64.h"
#else
# include "/arch/x86_32.h"
#endif

#ifdef (_x86_64_brand_amd == 1)&(_x86_64_brand_intel == 0)
# include "/arch/x86_64/amd.h"
#
#ifdef (_x86_64_brand_amd == 0)&(_x86_64_intel == 1)
# include "/arch/x86_64/intel.h"
#else
# return ERR_MSG(ERNOARCHSUP)
#endif
