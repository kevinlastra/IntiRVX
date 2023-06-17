// RISC-V Compliance IO Test Header File


#ifndef _COMPLIANCE_IO_H
#define _COMPLIANCE_IO_H

//-----------------------------------------------------------------------
// RV IO Macros 
//-----------------------------------------------------------------------

#define RVTEST_IO_INIT

#define RVTEST_IO_ASSERT_GPR_EQ(_SP, _R, _I) \
  li t3, _I; \
  la t5, test_res; \
  sub t3, t3, _R; \
  lw t4, 0(t5); \
  or t3, t3, t4; \
  sw t3, 0(t5); \


#define RVTEST_IO_WRITE_STR(_SP, _STR)
#define RVTEST_IO_CHECK()

#endif // _COMPLIANCE_IO_H
