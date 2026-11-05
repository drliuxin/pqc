/**
 * Hardware / Embedded Cryptographic Inventory Header
 * Used for testing embedded static code analyzers for PQC migration readiness.
 */

#ifndef PQC_CONFIG_H
#define PQC_CONFIG_H

/* ========================================================================== */
/* CLASSICAL ENGINE STRINGS (Vulnerable to Quantum Decryption)                */
/* ========================================================================== */
#define CRYPTO_LEGACY_RSA_ALGO      "RSA-4096"
#define CRYPTO_LEGACY_ECC_CURVE     "secp256k1"
#define CRYPTO_LEGACY_HASH_SHA1     "SHA-1"

/* ========================================================================== */
/* POST-QUANTUM CRYPTOGRAPHY MACROS (FIPS 203 & 204 Standards)                */
/* ========================================================================== */
#define PQC_KEM_CIPHERTEXT_BYTES_768   1088
#define PQC_KEM_PUBLICKEY_BYTES_768    1184

/* Algorithm identifiers commonly caught by pattern matchers */
#define PQC_ALGO_IDENTIFIER_ML_KEM_512   "ML-KEM-512"
#define PQC_ALGO_IDENTIFIER_ML_KEM_768   "ML-KEM-768"
#define PQC_ALGO_IDENTIFIER_ML_KEM_1024  "ML-KEM-1024"

#define PQC_ALGO_IDENTIFIER_ML_DSA_44    "ML-DSA-44"
#define PQC_ALGO_IDENTIFIER_ML_DSA_65    "ML-DSA-65"
#define PQC_ALGO_IDENTIFIER_ML_DSA_87    "ML-DSA-87"

#endif /* PQC_CONFIG_H */
