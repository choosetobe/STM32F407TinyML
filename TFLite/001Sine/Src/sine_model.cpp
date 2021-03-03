
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.

#include "sine_model.h"

// We need to keep the data array aligned on some architectures.
#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

//unsigned char sine_model[] DATA_ALIGN_ATTRIBUTE = {
const unsigned char sine_model[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x12, 0x00,
  0x1c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
  0x00, 0x00, 0x18, 0x00, 0x12, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xec, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0xf4, 0x0b, 0x00, 0x00, 0xf0, 0x0b, 0x00, 0x00,
  0xe8, 0x0a, 0x00, 0x00, 0x28, 0x0a, 0x00, 0x00, 0xac, 0x09, 0x00, 0x00,
  0xe4, 0x08, 0x00, 0x00, 0x5c, 0x04, 0x00, 0x00, 0x94, 0x03, 0x00, 0x00,
  0xd4, 0x0b, 0x00, 0x00, 0xd0, 0x0b, 0x00, 0x00, 0xcc, 0x0b, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x7a, 0xf5, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
  0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0xf8, 0x0a, 0x00, 0x00, 0x78, 0x0a, 0x00, 0x00,
  0xb8, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x74, 0x08, 0x00, 0x00,
  0xac, 0x07, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00,
  0xdc, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x08,
  0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x38, 0xf5, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x9a, 0xf5, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
  0x00, 0x00, 0x00, 0x00, 0xd4, 0xf5, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf2, 0xfe, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x12, 0xf6, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x9d, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x38,
  0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66,
  0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65,
  0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
  0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x38, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x38, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x3b, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72,
  0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c,
  0x2f, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
  0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x38, 0x2f, 0x42, 0x69,
  0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0xe0, 0xf6, 0xff, 0xff,
  0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x07, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x24, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x0c, 0x00, 0x07, 0x00,
  0x00, 0x00, 0x08, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x01, 0x00, 0x00, 0x00, 0x3e, 0xf7, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x9d, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37,
  0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66,
  0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65,
  0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
  0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x37, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x37, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x3b, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72,
  0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c,
  0x2f, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
  0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x42, 0x69,
  0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0xbc, 0xf7, 0xff, 0xff,
  0xc6, 0xf8, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x2e, 0xd4, 0x8e, 0x3e, 0xb8, 0x4e, 0x46, 0xbf, 0x11, 0x0f, 0x7e, 0xbf,
  0x75, 0x2b, 0xed, 0xbe, 0xf1, 0x83, 0x4b, 0x3f, 0x4c, 0x81, 0x78, 0x3e,
  0x07, 0x43, 0xda, 0xbe, 0x75, 0x3a, 0x0f, 0x3f, 0x5e, 0x92, 0x56, 0xbf,
  0xbd, 0xbd, 0xd9, 0xbe, 0x87, 0x23, 0x86, 0x3e, 0x99, 0xcf, 0x2e, 0xbf,
  0x5e, 0xc6, 0x8f, 0xbe, 0x69, 0x78, 0x36, 0x3f, 0xc3, 0x02, 0xcc, 0x3e,
  0x2e, 0x37, 0x8a, 0xbf, 0x52, 0xf8, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x4f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x39,
  0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x53, 0x74, 0x61, 0x74,
  0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f,
  0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x39, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00,
  0x80, 0xf8, 0xff, 0xff, 0x8a, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x00, 0x00, 0x87, 0xb7, 0x69, 0xbe, 0xc0, 0xf1, 0x57, 0xbd,
  0xc0, 0x46, 0xbf, 0xbb, 0xe8, 0xe0, 0x81, 0xbe, 0x20, 0x8e, 0x78, 0x3d,
  0x6f, 0xbc, 0x92, 0x3e, 0x5c, 0x40, 0x5d, 0xbe, 0x90, 0x92, 0x82, 0xbe,
  0xb0, 0xf5, 0xaa, 0xbe, 0x78, 0xd4, 0xce, 0xbd, 0x40, 0x57, 0x10, 0x3d,
  0x60, 0x71, 0x81, 0x3c, 0x80, 0xff, 0x10, 0x3b, 0xe8, 0xfa, 0xa3, 0xbd,
  0x40, 0x60, 0xc5, 0xbd, 0xb4, 0x7a, 0x0c, 0xbe, 0xd4, 0x33, 0xe9, 0xbe,
  0x57, 0xf9, 0x89, 0xbe, 0xa8, 0x95, 0xf9, 0x3e, 0x15, 0x09, 0x80, 0x3e,
  0x10, 0x61, 0x40, 0xbe, 0xe1, 0xeb, 0xdb, 0xbe, 0x07, 0x32, 0xc5, 0xbe,
  0x77, 0x07, 0xf1, 0xbe, 0x46, 0x06, 0x51, 0xbe, 0x16, 0x58, 0xd9, 0xbe,
  0x25, 0x74, 0x1f, 0x3f, 0xe4, 0x7e, 0x9f, 0x3d, 0xeb, 0xb2, 0xfd, 0x3c,
  0xd6, 0xe7, 0xa8, 0xbe, 0x91, 0x62, 0x6c, 0xbe, 0x3c, 0xfe, 0xb0, 0xbd,
  0x95, 0xba, 0x89, 0x3b, 0x3e, 0xac, 0x8e, 0x3e, 0xc1, 0x13, 0xb2, 0x3d,
  0x81, 0x74, 0xd1, 0xbe, 0x22, 0xc4, 0xa2, 0xbc, 0x80, 0xf4, 0x84, 0xbc,
  0xc4, 0x98, 0x95, 0xbe, 0xdb, 0xb0, 0x99, 0x3d, 0x10, 0xe0, 0xa4, 0xbe,
  0x29, 0x6b, 0x5f, 0xbe, 0x5f, 0x63, 0xcd, 0xbf, 0x3d, 0x7d, 0xb0, 0x3e,
  0xef, 0xe5, 0x9b, 0x3e, 0x52, 0xc3, 0x90, 0xbe, 0x35, 0xfb, 0x31, 0xbf,
  0x80, 0x7b, 0x02, 0x3c, 0x2d, 0x13, 0x40, 0x3e, 0xa6, 0xb7, 0x1a, 0xbb,
  0x63, 0x7a, 0xf4, 0xbe, 0xec, 0x32, 0xec, 0xbd, 0xeb, 0x22, 0x34, 0x3e,
  0xac, 0x9a, 0x83, 0xbe, 0x46, 0xdd, 0x70, 0x3e, 0xbc, 0x12, 0xc8, 0x3e,
  0x58, 0x67, 0x4d, 0x3d, 0x6a, 0xd8, 0x75, 0x3e, 0x14, 0x17, 0x75, 0xbf,
  0x8a, 0x25, 0xa6, 0xbe, 0x46, 0x3a, 0x13, 0xbd, 0x43, 0x3f, 0x9e, 0x3d,
  0x1b, 0x1c, 0x64, 0xbf, 0x59, 0x80, 0xcf, 0xbe, 0x37, 0x13, 0x23, 0x3e,
  0xc7, 0x26, 0x80, 0xbe, 0x4d, 0x4d, 0x4b, 0xbe, 0x87, 0xf0, 0xda, 0xbe,
  0xfa, 0xe4, 0x87, 0xbe, 0xe4, 0xec, 0xe3, 0xbd, 0xd0, 0x1a, 0x89, 0x3d,
  0x3a, 0xd9, 0xf5, 0x3e, 0x65, 0xad, 0xa6, 0x3e, 0xae, 0xd2, 0xb4, 0xbe,
  0xbb, 0x6c, 0xb3, 0x3f, 0xf1, 0x78, 0xa8, 0x3e, 0x6c, 0x45, 0x8c, 0xbe,
  0xfc, 0x2e, 0xc1, 0x3e, 0x72, 0x6d, 0x2c, 0x3f, 0xa9, 0x87, 0xd8, 0xbe,
  0x95, 0x06, 0xa5, 0x3e, 0xd0, 0xd1, 0x27, 0xbe, 0x48, 0x0a, 0x47, 0xbe,
  0xdb, 0x36, 0xa3, 0x3e, 0x16, 0xa2, 0x3d, 0x3e, 0xf8, 0x8c, 0x11, 0x3d,
  0x93, 0x45, 0xb1, 0x3e, 0x61, 0x4e, 0xc8, 0xbe, 0x71, 0xf4, 0xdb, 0xbe,
  0x1a, 0x42, 0x7a, 0x3e, 0x80, 0xec, 0x00, 0xbe, 0x25, 0x3d, 0xa2, 0x3e,
  0x50, 0x25, 0x82, 0xbc, 0x12, 0x68, 0x01, 0xbe, 0x21, 0x9a, 0xab, 0x3e,
  0x3b, 0x5b, 0x99, 0x3e, 0xad, 0xd8, 0x48, 0xbe, 0x32, 0xfa, 0xb5, 0x3e,
  0xe3, 0xc4, 0xf6, 0xbe, 0x0d, 0xd6, 0xac, 0x3e, 0xbf, 0x78, 0xab, 0x3e,
  0xe1, 0xd9, 0xd1, 0x3e, 0x11, 0x71, 0xad, 0xbe, 0xe5, 0x02, 0xa8, 0x3e,
  0x0c, 0x08, 0x0e, 0xbe, 0x40, 0xf5, 0xd9, 0xbb, 0xd5, 0xac, 0xaa, 0xbf,
  0x92, 0xf2, 0x0f, 0x3e, 0xbb, 0x7e, 0x10, 0x3a, 0x8f, 0xa2, 0x0c, 0x3c,
  0x36, 0x2b, 0x26, 0xbf, 0xb9, 0x0a, 0xdb, 0xbe, 0xf4, 0x7e, 0x29, 0x3e,
  0x9c, 0x29, 0xfa, 0xbd, 0xb0, 0x6c, 0x91, 0x3e, 0x3d, 0xfe, 0xb9, 0xbe,
  0x80, 0x7b, 0x7b, 0xbe, 0x18, 0xf8, 0x49, 0xbd, 0x56, 0xdb, 0x2e, 0x3e,
  0x1b, 0x7a, 0x97, 0xbe, 0x48, 0x44, 0x8f, 0xbd, 0xac, 0x9f, 0x84, 0xbe,
  0xd7, 0x70, 0x95, 0x3f, 0xc8, 0xab, 0x3d, 0xbd, 0x39, 0x9f, 0xbd, 0x3e,
  0x54, 0x23, 0xcd, 0x3c, 0x8f, 0xc5, 0x92, 0x3f, 0x50, 0x50, 0xc0, 0xbe,
  0xcb, 0xac, 0xc8, 0xbe, 0x20, 0xb4, 0x09, 0xbe, 0x92, 0x37, 0x86, 0x3e,
  0xa0, 0x77, 0x80, 0xbe, 0xa5, 0xfa, 0x1d, 0xbe, 0x80, 0xa5, 0xc0, 0xbb,
  0x16, 0x17, 0x7b, 0x3e, 0x9d, 0x11, 0x8b, 0x3d, 0x4c, 0x42, 0x82, 0xbe,
  0x92, 0x7d, 0x1d, 0x3e, 0x7a, 0x13, 0xbd, 0x3e, 0x6d, 0xb8, 0x82, 0x3e,
  0x91, 0x96, 0x32, 0x3e, 0xb7, 0xf4, 0xa2, 0xbe, 0x71, 0x50, 0x08, 0x3e,
  0x72, 0xae, 0x1a, 0xbe, 0x5f, 0x08, 0xa1, 0x3e, 0x10, 0x92, 0xdf, 0xba,
  0xc2, 0x27, 0x04, 0xbf, 0x08, 0xa3, 0x72, 0x3d, 0x87, 0x8f, 0xfb, 0x3e,
  0x20, 0x9e, 0xfb, 0x3c, 0x37, 0x6c, 0x87, 0x3e, 0x56, 0x22, 0x90, 0xbe,
  0x13, 0x17, 0x8f, 0xbe, 0x30, 0xeb, 0xe3, 0x3c, 0x84, 0x1d, 0xa3, 0xbf,
  0xc0, 0x40, 0xab, 0xbb, 0x26, 0xc2, 0x1c, 0x3e, 0x9f, 0x1e, 0x99, 0xbd,
  0x30, 0xc8, 0x98, 0xbe, 0xe2, 0x4a, 0x91, 0xbe, 0xdc, 0x98, 0x05, 0xbd,
  0x93, 0xe8, 0xa0, 0x3b, 0xe7, 0x3a, 0x83, 0x3e, 0x50, 0x55, 0x34, 0xbd,
  0x04, 0x26, 0x11, 0x3e, 0x90, 0x06, 0xb7, 0x3c, 0x74, 0x44, 0x56, 0xbe,
  0x75, 0xd8, 0x62, 0xbe, 0xdc, 0x8c, 0x9d, 0x3d, 0x7a, 0x24, 0x6b, 0xbe,
  0xb2, 0x49, 0x0b, 0x3c, 0xe2, 0x3e, 0x2b, 0x3e, 0x84, 0x6c, 0x99, 0x3d,
  0x6d, 0x01, 0xa6, 0xbe, 0x4e, 0x93, 0xf4, 0xbd, 0x1a, 0xbf, 0x59, 0x3e,
  0x2e, 0x23, 0xe9, 0xbd, 0xa8, 0x70, 0xe7, 0x3d, 0xd6, 0x47, 0xd4, 0xbd,
  0xef, 0x47, 0x47, 0xbe, 0x71, 0x7c, 0xd4, 0x3e, 0x80, 0xc7, 0x78, 0xbc,
  0xba, 0x0d, 0x30, 0x3e, 0x59, 0x39, 0x2b, 0xbe, 0x44, 0xb5, 0x83, 0xbe,
  0x4a, 0x20, 0x63, 0x3e, 0xec, 0x6a, 0xf7, 0x3e, 0xff, 0x9c, 0xbb, 0x3e,
  0x82, 0xf9, 0x32, 0xbe, 0x17, 0x1e, 0x97, 0xbe, 0x19, 0x94, 0x01, 0x3f,
  0x49, 0x39, 0x9c, 0x3e, 0x00, 0x59, 0xd0, 0xbe, 0xa0, 0x3c, 0x72, 0xbd,
  0x62, 0xb0, 0x28, 0xbe, 0x3e, 0x82, 0x1b, 0xbe, 0xe0, 0x8c, 0x74, 0x3d,
  0x29, 0x65, 0xb8, 0x3e, 0xc1, 0x02, 0xbe, 0x3e, 0x08, 0xd4, 0x71, 0xbd,
  0x28, 0x1b, 0x2d, 0xbd, 0xb9, 0x1c, 0xc1, 0x3e, 0xf8, 0xa1, 0x56, 0xbd,
  0x42, 0xab, 0x60, 0x3e, 0x76, 0xb3, 0x9c, 0xbe, 0x04, 0xa7, 0xa9, 0x3d,
  0x64, 0x8a, 0xe9, 0x3d, 0xf8, 0xd8, 0x29, 0x3d, 0xc4, 0x0b, 0x67, 0x3e,
  0xae, 0x0a, 0x32, 0xbe, 0xef, 0x2c, 0x2e, 0x3f, 0x7c, 0xcb, 0x8c, 0xbd,
  0x4f, 0x6f, 0xe7, 0xbe, 0x45, 0x2c, 0xb2, 0x3e, 0x78, 0xb2, 0xb1, 0xbd,
  0xa4, 0xba, 0x59, 0xbe, 0x8e, 0xd8, 0x2a, 0xbe, 0xd7, 0x80, 0xa4, 0xbe,
  0x49, 0xc2, 0xb2, 0x3f, 0x96, 0xe2, 0x1b, 0x3e, 0x9c, 0x53, 0xbc, 0x3e,
  0x50, 0x60, 0x16, 0xbb, 0x2d, 0x72, 0x5f, 0x3f, 0xf8, 0x05, 0x22, 0xbd,
  0xd2, 0x66, 0x2f, 0x3e, 0xa7, 0x5e, 0x49, 0xbe, 0x24, 0x4e, 0x08, 0x3e,
  0xbb, 0x76, 0xa4, 0x3e, 0x04, 0x14, 0xa9, 0x3e, 0x80, 0xb2, 0x90, 0xbd,
  0x16, 0xe6, 0xd1, 0xbe, 0xc8, 0x9e, 0x9f, 0x3e, 0xd3, 0xdc, 0xc5, 0x3e,
  0x32, 0xf1, 0x7a, 0x3e, 0x0a, 0x4c, 0x2e, 0x3f, 0xaf, 0x4e, 0xb7, 0x3e,
  0x02, 0x2a, 0x69, 0x3e, 0x27, 0xdb, 0x84, 0xbe, 0x8e, 0x6b, 0x40, 0x3f,
  0x02, 0x6e, 0x17, 0x3e, 0x70, 0x19, 0x76, 0xbf, 0x9f, 0xba, 0x2a, 0xbf,
  0x3c, 0xb0, 0xa8, 0xbe, 0xd2, 0x5c, 0x72, 0x3e, 0x75, 0xf2, 0x9b, 0xbd,
  0x5a, 0x29, 0x89, 0xbe, 0x45, 0x41, 0x41, 0xbe, 0x73, 0x10, 0x93, 0x3d,
  0xeb, 0x53, 0xb2, 0x3e, 0xf8, 0xc1, 0x9b, 0xbd, 0x90, 0x49, 0x9d, 0x3e,
  0xca, 0xe5, 0xaf, 0xbe, 0x24, 0xc5, 0x85, 0xbe, 0x30, 0xd8, 0x2b, 0xbf,
  0x2a, 0x81, 0x1d, 0x3e, 0xd2, 0x4a, 0x21, 0xbe, 0xd6, 0xfc, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x38, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b,
  0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x38, 0x2f, 0x4d, 0x61, 0x74,
  0x4d, 0x75, 0x6c, 0x00, 0x04, 0xfd, 0xff, 0xff, 0x0e, 0xfe, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xba, 0x1e, 0xfe, 0x3e,
  0x25, 0x18, 0xf6, 0x3d, 0x7a, 0x9e, 0x92, 0x3d, 0x6e, 0x85, 0x04, 0xbe,
  0x91, 0x04, 0x56, 0x3d, 0xfd, 0x56, 0x09, 0xbf, 0x88, 0x1c, 0xc4, 0xbe,
  0x3a, 0x49, 0x8e, 0x3e, 0x00, 0x85, 0x1d, 0xbc, 0xae, 0x51, 0x3b, 0xbe,
  0x3c, 0x0e, 0x3d, 0xbe, 0x8e, 0x51, 0xa9, 0xbe, 0xf1, 0x47, 0xd2, 0x3e,
  0xab, 0x49, 0x01, 0x3f, 0xef, 0x2a, 0xdb, 0x3d, 0xec, 0x65, 0x0f, 0xbe,
  0x9a, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x4d, 0x61, 0x74,
  0x4d, 0x75, 0x6c, 0x3b, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c,
  0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43,
  0x61, 0x6c, 0x6c, 0x2f, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37,
  0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0xc8, 0xfd, 0xff, 0xff,
  0xd2, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x32, 0xcd, 0x57, 0xbe, 0x22, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
  0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x39, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72,
  0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x40, 0xfe, 0xff, 0xff,
  0x4a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x2b, 0x3e, 0x3e, 0xeb, 0x7f, 0xd3, 0x3e,
  0x21, 0x95, 0x79, 0x3e, 0x0f, 0xba, 0x98, 0xbe, 0x00, 0x00, 0x00, 0x00,
  0x57, 0x23, 0xd6, 0x3e, 0x06, 0xc2, 0xa1, 0xbe, 0x50, 0x52, 0x4c, 0x3e,
  0x90, 0x8f, 0xc6, 0x3e, 0xc5, 0x17, 0x8b, 0xbd, 0xd5, 0x5b, 0x3e, 0x3e,
  0x00, 0x00, 0x00, 0x00, 0x96, 0x37, 0xa8, 0xbe, 0xd0, 0x86, 0x87, 0xbe,
  0x62, 0xc6, 0x55, 0x3e, 0xd6, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
  0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x38, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72,
  0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x44, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xdf, 0x46, 0x26, 0x3a,
  0xc6, 0xfe, 0x9b, 0x3e, 0x47, 0xab, 0x83, 0xbe, 0x00, 0x00, 0x00, 0x00,
  0x95, 0x9b, 0xa9, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf0, 0xbd, 0x39, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb1, 0x89, 0x63, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x48, 0x7b, 0x43, 0x3e,
  0x0c, 0x35, 0x90, 0xbe, 0x28, 0xf3, 0xd6, 0xbe, 0x00, 0x00, 0x00, 0x00,
  0x92, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74,
  0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f,
  0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x2f, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x37, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c,
  0x65, 0x4f, 0x70, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37, 0x5f,
  0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00
};
const unsigned int g_model_len = 3140;