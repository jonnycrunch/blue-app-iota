#ifndef API_H
#define API_H

#include "iota_io.h"
#include "iota/signing.h"

// state bit flags
#define SEED_SET (1 << 0)
#define BUNDLE_INITIALIZED (1 << 1)
#define BUNDLE_FINALIZED (1 << 2)
#define SIGNING_STARTED (1 << 3)

#define IO_STRUCT struct __attribute__((packed, may_alias))

#define SET_SEED_REQUIRED_STATE 0
#define SET_SEED_FORBIDDEN_STATE 0

typedef IO_STRUCT SET_SEED_INPUT
{
    int64_t bip44_path[BIP44_PATH_LEN];
    int64_t security;
}
SET_SEED_INPUT;

// no SET_SEED_OUTPUT

#define PUBKEY_REQUIRED_STATE (SEED_SET)
#define PUBKEY_FORBIDDEN_STATE 0

typedef IO_STRUCT PUBKEY_INPUT
{
    int64_t address_idx;
}
PUBKEY_INPUT;

typedef IO_STRUCT PUBKEY_OUTPUT
{
    char address[81];
}
PUBKEY_OUTPUT;

#define TX_REQUIRED_STATE (SEED_SET)
#define TX_FORBIDDEN_STATE (BUNDLE_FINALIZED)

typedef IO_STRUCT TX_INPUT
{
    char address[81];
    int64_t address_idx;
    int64_t value;
    char tag[27];
    int64_t current_index;
    int64_t last_index;
    int64_t timestamp;
}
TX_INPUT;

typedef IO_STRUCT TX_OUTPUT
{
    bool finalized;
    char bundle_hash[81];
}
TX_OUTPUT;

#define SIGN_REQUIRED_STATE (SEED_SET | BUNDLE_FINALIZED)
#define SIGN_FORBIDDEN_STATE 0

typedef IO_STRUCT SIGN_INPUT
{
    int64_t transaction_idx;
}
SIGN_INPUT;

typedef IO_STRUCT SIGN_OUTPUT
{
    char signature_fragment[SIGNATURE_FRAGMENT_SIZE * 81];
    bool fragments_remaining;
}
SIGN_OUTPUT;

typedef IO_STRUCT SEED_IDX_OUTPUT
{
    int64_t seed_idx[5];
}
SEED_IDX_OUTPUT;

typedef IO_STRUCT INIT_LEDGER_INPUT
{
    int64_t seed_indexes[5];
}
INIT_LEDGER_INPUT;


void api_initialize();

unsigned int api_set_seed(const unsigned char *input_data, unsigned int len);
unsigned int api_pubkey(const unsigned char *input_data, unsigned int len);
unsigned int api_tx(const unsigned char *input_data, unsigned int len);
unsigned int api_sign(const unsigned char *input_data, unsigned int len);
unsigned int api_display_pubkey(const unsigned char *input_data,
                                unsigned int len);
unsigned int api_get_indexes();
unsigned int api_init_ledger(unsigned char *input_data, unsigned int len);

void init_ledger_approve(const INIT_LEDGER_INPUT *input);
void init_ledger_deny();

void user_sign_tx();
void user_deny_tx();

void user_sign();
void user_deny();

#endif // API_H
