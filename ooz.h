#include <cstdint>
#include <cstddef>
#include <vector>

#ifdef _MSC_VER
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __attribute__ ((visibility ("default")))
#endif

// The decompressor will write outside of the target buffer.
#define SAFE_SPACE 64

extern "C" {
    EXPORT int Kraken_Compress(uint8_t* src, size_t src_len, uint8_t* dst, int level);
    EXPORT int Kraken_Decompress(const uint8_t *src, size_t src_len, uint8_t *dst, size_t dst_len);
};
