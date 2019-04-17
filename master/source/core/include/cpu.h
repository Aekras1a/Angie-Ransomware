#ifndef CPU_INCLUDED
#define CPU_INCLUDED

typedef struct _CPUFEATURES {
    BOOL SSE5;
    BOOL AES;
    BOOL RdRand;
} CPUFEATURES, *PCPUFEATURES;

extern CPUFEATURES CpuFeatures;

BOOL
DECLSPEC_NOINLINE
InitCpu(VOID);

#endif