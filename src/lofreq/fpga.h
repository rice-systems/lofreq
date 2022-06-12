/* Header file, macro definitions and shared variables for the FPGA patch. */

#include <CL/cl_ext_xilinx.h>

#define MAX_DEVICE_ENTIRES 16	// the number of cl_device entries
#define PLATFORM_PARAM_SIZE 1024
#define NAME_LENGTH 1024
 
#define USE_MANY_COMPUTE_UNITS 0
// USE_MANY_COMPUTE_UNITS:
// set to 1 when FPGA designs with than 15 CUs; otherwise, keep it as 0.

#define MAX_BUFFER_SIZE 65536
// MAX_BUFFER_SIZE:
// the on-chip buffer (for intermediate values) size.

#define PROFILING 0
// PROFILING:
// Set to 1 to enable wall-clock time measurement of FPGA activities
// of processing each column and printing to stdout.
 
extern char cl_device_name[NAME_LENGTH];

// OpenCL objects
extern cl_device_id devices;
extern cl_context context;
extern cl_program program;
extern cl_command_queue cmd_queue;
extern unsigned char *kernelBinary;
extern char *krnl_func;
extern char *xclbin;
extern cl_kernel kernel1;
extern cl_mem in_buf;
extern cl_mem out_buf;
extern double * in_buf_host;
extern double * out_buf_host;

extern int proc_bin_id;  // Input data chunk (bin) id
