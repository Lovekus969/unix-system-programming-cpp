#include <stdio.h>
#include <string.h>

// ⭐ Struct keeps request format consistent
struct SearchRequest {
    char query[128];
    int user_id;
    char region[32];
    char device[32];
    char language[8];
    long timestamp;

    // ⭐ New fields can be added safely
    int safe_mode;
};

// Function uses ONE ARGUMENT – the struct
void handleSearch(struct SearchRequest req)
{
    printf("[SAFE] Query: %s | SafeMode: %d | Region: %s | Device: %s\n",
           req.query, req.safe_mode, req.region, req.device);
}

int main()
{
    printf("\n===== FIXED VERSION WITH STRUCT =====\n\n");

    struct SearchRequest req;

    strcpy(req.query, "hello");
    req.user_id = 101;
    strcpy(req.region, "CA");
    strcpy(req.device, "Mobile");
    strcpy(req.language, "EN");
    req.timestamp = 123456;

    // Old systems don't know about safe_mode → default value
    req.safe_mode = 0;

    handleSearch(req);

    printf("\n↑ Adding new fields does NOT break anything.\n");

    return 0;
}
