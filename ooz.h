#include <cstdint>
#include <cstddef>
#include <vector>

#define EXPORT __attribute__ ((visibility ("default")))

extern "C" {
    EXPORT int Kraken_Compress(uint8_t* src, size_t src_len, uint8_t* dst, int level);
    EXPORT int Kraken_Decompress(const uint8_t *src, size_t src_len, uint8_t *dst, size_t dst_len);
};
