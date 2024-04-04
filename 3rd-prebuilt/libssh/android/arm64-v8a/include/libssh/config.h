/* Name of package */
#define PACKAGE "libssh"

/* Version number of package */
#define VERSION "0.10.6"

#define SYSCONFDIR "etc"
#define BINARYDIR "/home/runner/work/3rd-build-ga/3rd-build-ga/libssh-0.10.6/build"
#define SOURCEDIR "/home/runner/work/3rd-build-ga/3rd-build-ga/libssh-0.10.6"

/* Global bind configuration file path */
#define GLOBAL_BIND_CONFIG "/etc/ssh/libssh_server_config"

/* Global client configuration file path */
#define GLOBAL_CLIENT_CONFIG "/etc/ssh/ssh_config"

/************************** HEADER FILES *************************/

/* Define to 1 if you have the <argp.h> header file. */
/* #undef HAVE_ARGP_H */

/* Define to 1 if you have the <aprpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #undef HAVE_VALGRIND_VALGRIND_H */

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
/* #undef HAVE_SYS_UTIME_H */

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <openssl/aes.h> header file. */
#define HAVE_OPENSSL_AES_H 1

/* Define to 1 if you have the <wspiapi.h> header file. */
/* #undef HAVE_WSPIAPI_H */

/* Define to 1 if you have the <openssl/blowfish.h> header file. */
/* #undef HAVE_OPENSSL_BLOWFISH_H */

/* Define to 1 if you have the <openssl/des.h> header file. */
#define HAVE_OPENSSL_DES_H 1

/* Define to 1 if you have the <openssl/ecdh.h> header file. */
#define HAVE_OPENSSL_ECDH_H 1

/* Define to 1 if you have the <openssl/ec.h> header file. */
#define HAVE_OPENSSL_EC_H 1

/* Define to 1 if you have the <openssl/ecdsa.h> header file. */
#define HAVE_OPENSSL_ECDSA_H 1

/* Define to 1 if you have the <pthread.h> header file. */
/* #undef HAVE_PTHREAD_H */

/* Define to 1 if you have elliptic curve cryptography in openssl */
#define HAVE_OPENSSL_ECC 1

/* Define to 1 if you have elliptic curve cryptography in gcrypt */
/* #undef HAVE_GCRYPT_ECC */

/* Define to 1 if you have elliptic curve cryptography */
#define HAVE_ECC 1

/* Define to 1 if you have DSA */
/* #undef HAVE_DSA */

/* Define to 1 if you have gl_flags as a glob_t sturct member */
#define HAVE_GLOB_GL_FLAGS_MEMBER 1

/* Define to 1 if you have OpenSSL with Ed25519 support */
#define HAVE_OPENSSL_ED25519 1

/* Define to 1 if you have OpenSSL with X25519 support */
#define HAVE_OPENSSL_X25519 1

/* Define to 1 if you have OpenSSL with Poly1305 support */
#define HAVE_OPENSSL_EVP_POLY1305 1

/* Define to 1 if you have gcrypt with ChaCha20/Poly1305 support */
/* #undef HAVE_GCRYPT_CHACHA_POLY */

/*************************** FUNCTIONS ***************************/

/* Define to 1 if you have the `EVP_chacha20' function. */
#define HAVE_OPENSSL_EVP_CHACHA20 1

/* Define to 1 if you have the `EVP_KDF_CTX_new_id' or `EVP_KDF_CTX_new` function. */
#define HAVE_OPENSSL_EVP_KDF_CTX 1

/* Define to 1 if you have the `FIPS_mode' function. */
/* #undef HAVE_OPENSSL_FIPS_MODE */

/* Define to 1 if you have the `EVP_DigestSign' function. */
#define HAVE_OPENSSL_EVP_DIGESTSIGN 1

/* Define to 1 if you have the `EVP_DigestVerify' function. */
#define HAVE_OPENSSL_EVP_DIGESTVERIFY 1

/* Define to 1 if you have the `OPENSSL_ia32cap_loc' function. */
/* #undef HAVE_OPENSSL_IA32CAP_LOC */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `_snprintf' function. */
/* #undef HAVE__SNPRINTF */

/* Define to 1 if you have the `_snprintf_s' function. */
/* #undef HAVE__SNPRINTF_S */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `_vsnprintf' function. */
/* #undef HAVE__VSNPRINTF */

/* Define to 1 if you have the `_vsnprintf_s' function. */
/* #undef HAVE__VSNPRINTF_S */

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `strncpy' function. */
#define HAVE_STRNCPY 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `cfmakeraw' function. */
#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `ntohll' function. */
/* #undef HAVE_NTOHLL */

/* Define to 1 if you have the `htonll' function. */
/* #undef HAVE_HTONLL */

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have the `__strtoull' function. */
/* #undef HAVE___STRTOULL */

/* Define to 1 if you have the `_strtoui64' function. */
/* #undef HAVE__STRTOUI64 */

/* Define to 1 if you have the `glob' function. */
#define HAVE_GLOB 1

/* Define to 1 if you have the `explicit_bzero' function. */
/* #undef HAVE_EXPLICIT_BZERO */

/* Define to 1 if you have the `memset_s' function. */
/* #undef HAVE_MEMSET_S */

/* Define to 1 if you have the `SecureZeroMemory' function. */
/* #undef HAVE_SECURE_ZERO_MEMORY */

/* Define to 1 if you have the `cmocka_set_test_filter' function. */
/* #undef HAVE_CMOCKA_SET_TEST_FILTER */

/*************************** LIBRARIES ***************************/

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
/* #undef HAVE_LIBGCRYPT */

/* Define to 1 if you have the 'mbedTLS' library (-lmbedtls). */
/* #undef HAVE_LIBMBEDCRYPTO */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the `cmocka' library (-lcmocka). */
/* #undef HAVE_CMOCKA */

/**************************** OPTIONS ****************************/

#define HAVE_GCC_THREAD_LOCAL_STORAGE 1
/* #undef HAVE_MSC_THREAD_LOCAL_STORAGE */

#define HAVE_FALLTHROUGH_ATTRIBUTE 1
#define HAVE_UNUSED_ATTRIBUTE 1
#define HAVE_WEAK_ATTRIBUTE 1

#define HAVE_CONSTRUCTOR_ATTRIBUTE 1
#define HAVE_DESTRUCTOR_ATTRIBUTE 1

#define HAVE_GCC_VOLATILE_MEMORY_PROTECTION 1

#define HAVE_COMPILER__FUNC__ 1
#define HAVE_COMPILER__FUNCTION__ 1

/* #undef HAVE_GCC_BOUNDED_ATTRIBUTE */

/* Define to 1 if you want to enable GSSAPI */
/* #undef WITH_GSSAPI */

/* Define to 1 if you want to enable ZLIB */
#define WITH_ZLIB 1

/* Define to 1 if you want to enable SFTP */
#define WITH_SFTP 1

/* Define to 1 if you want to enable server support */
/* #undef WITH_SERVER */

/* Define to 1 if you want to enable DH group exchange algorithms */
#define WITH_GEX 1

/* Define to 1 if you want to enable none cipher and MAC */
/* #undef WITH_INSECURE_NONE */

/* Define to 1 if you want to enable blowfish cipher support */
/* #undef WITH_BLOWFISH_CIPHER */

/* Define to 1 if you want to enable debug output for crypto functions */
/* #undef DEBUG_CRYPTO */

/* Define to 1 if you want to enable debug output for packet functions */
/* #undef DEBUG_PACKET */

/* Define to 1 if you want to enable pcap output support (experimental) */
#define WITH_PCAP 1

/* Define to 1 if you want to enable calltrace debug output */
#define DEBUG_CALLTRACE 1

/* Define to 1 if you want to enable NaCl support */
/* #undef WITH_NACL */

/* Define to 1 if you want to enable PKCS #11 URI support */
/* #undef WITH_PKCS11_URI */

/*************************** ENDIAN *****************************/

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
/* #undef WORDS_BIGENDIAN */
