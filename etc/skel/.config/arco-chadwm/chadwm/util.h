/* See LICENSE file for copyright and license details. */

// Macro to get the maximum of two values
#define MAX(A, B)               ((A) > (B) ? (A) : (B))

// Macro to get the minimum of two values
#define MIN(A, B)               ((A) < (B) ? (A) : (B))

// Macro to check if a value is between two other values
#define BETWEEN(X, A, B)        ((A) <= (X) && (X) <= (B))

// Function to print an error message and exit
void die(const char *fmt, ...);

// Function to allocate memory and check for allocation failure
void *ecalloc(size_t nmemb, size_t size);
