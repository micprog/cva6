// See LICENSE for license details.

// Test of PMP functionality.

#define INLINE inline __attribute__((always_inline))


typedef struct {
  uintptr_t cfg;
  uintptr_t a0;
  uintptr_t a1;
} pmpcfg_t;

void detect_pmp();
void detect_granule();
void test_one(uintptr_t addr, uintptr_t size);
pmpcfg_t set_pmp(pmpcfg_t p);
pmpcfg_t set_pmp_napot(uintptr_t base, uintptr_t range);
pmpcfg_t set_pmp_range(uintptr_t base, uintptr_t range);