#include "test_common.h"
#include <stdio.h>
#include "api.h"
#include "iota/bundle.h"
#include "keccak/sha3.h"

void throw_exception(const char *expression, const char *file, int line)
{
    mock_assert(false, expression, file, line);
}

void ui_display_welcome()
{
}

void ui_display_calc()
{
}

void ui_display_recv()
{
}

void ui_display_signing()
{
}

void ui_display_address(const unsigned char *addr_bytes)
{
    UNUSED(addr_bytes);
}

void ui_display_init_ledger(const INIT_LEDGER_INPUT *input)
{
    UNUSED(input);
}

// forward declaration
void user_sign_tx();

void ui_warn_change(BUNDLE_CTX *bundle_ctx)
{
    UNUSED(bundle_ctx);

    // the user ignores the warning and signs everything
    user_sign_tx();
}

void ui_sign_tx(BUNDLE_CTX *bundle_ctx)
{
    UNUSED(bundle_ctx);

    // the user signs everything
    user_sign_tx();
}

void ui_restore()
{
}

bool flash_is_init()
{
    return true;
}

void incr_seed_idx(unsigned int idx)
{
    UNUSED(idx);
}

__attribute__((weak)) uint32_t get_seed_idx(unsigned int idx)
{
    UNUSED(idx);

    return 0;
}

__attribute__((weak)) void write_seed_index(unsigned int account,
                                            const unsigned int seed_idx)
{
    UNUSED(account);
    UNUSED(seed_idx);
}

__attribute__((weak)) void derive_seed_bip32(const unsigned int *path,
                                             unsigned int pathLength,
                                             unsigned char *seed_bytes)
{
    UNUSED(path);
    UNUSED(pathLength);
    UNUSED(seed_bytes);

    char msg[100];
    snprintf(msg, 100, "%s should not be called", __FUNCTION__);
    mock_assert(false, msg, __FILE__, __LINE__);
}

__attribute__((weak)) void io_send(const void *ptr, unsigned int length,
                                   unsigned short sw)

{
    UNUSED(ptr);
    UNUSED(length);
    UNUSED(sw);

    char msg[100];
    snprintf(msg, 100, "%s should not be called", __FUNCTION__);
    mock_assert(false, msg, __FILE__, __LINE__);
}
