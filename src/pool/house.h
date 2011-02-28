/* $Id$ */

#ifndef POOL_HOUSE_H
#define POOL_HOUSE_H

enum {
	HOUSE_INDEX_MAX = 6,                                    /*!< The highest possible index for any House.  */

	HOUSE_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;
extern struct House *House_Get_ByIndex(uint8 index);
extern struct House *House_Get_ByMemory(csip32 address);
extern struct House *House_Find(struct PoolFindStruct *find);

extern void House_Init(csip32 address);
extern struct House *House_Allocate(uint8 index);
extern void House_Free(struct House *h);

#endif /* POOL_HOUSE_H */
