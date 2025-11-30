#include <stdio.h>

// ❌ Original function (old version)
void handleSearch_old(const char *query, int user_id, const char *region,
                      const char *device, const char *language, long timestamp)
{
    printf("[OLD] Query: %s | User: %d | Region: %s | Device: %s | Lang: %s | Time: %ld\n",
           query, user_id, region, device, language, timestamp);
}

// ❌ New version adds 1 more parameter
void handleSearch_new(const char *query, int user_id, const char *region,
                      const char *device, const char *language, long timestamp,
                      int safe_mode)
{
    printf("[NEW] Query: %s | SafeMode: %d\n", query, safe_mode);
}

int main()
{
    printf("\n===== BROKEN VERSION =====\n\n");

    // Old code calling old version (correct)
    handleSearch_old("hello", 101, "CA", "Mobile", "EN", 123456);

    // ⚠️ Problem:
    // Old code STILL calls the function with 6 arguments
    // BUT the developer accidentally connected it to the NEW function.
    // Now safe_mode gets GARBAGE MEMORY → unpredictable behavior.

    printf("Calling NEW function with OLD argument count:\n");

    // ❌ Wrong calling: only 6 params → safe_mode becomes garbage
    handleSearch_new("hello", 101, "CA", "Mobile", "EN", 123456);

    printf("\n↑ This simulates a crash/misbehavior in real systems.\n");

    return 0;
}
