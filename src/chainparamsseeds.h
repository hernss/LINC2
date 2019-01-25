#ifndef LINC_CHAINPARAMSSEEDS_H
#define LINC_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the linc network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xcf,0xb4,0xd8,0x7e}, 17222},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4e,0x39,0xf8,0x35}, 17222}
};

static SeedSpec6 pnSeed6_test[] = {
    {{}, 17333},
    {{}, 17333},
    {{}, 17333},
    {{}, 17333},
    {{}, 17333},
    {{}, 17333}
};

#endif // BITCOIN_CHAINPARAMSSEEDS_H
