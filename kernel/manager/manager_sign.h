#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

#define EXPECTED_SIZE_XINGMENG 0x2ca
#define EXPECTED_HASH_XINGMENG "a4460803ab5c4d32c806e310f5d1e1ef50cce9cc270634db117d8bfb9526fe10"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
