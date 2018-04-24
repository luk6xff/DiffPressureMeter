#if defined(__AVR__)
	#include <avr/pgmspace.h>
	#define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#elif defined(__arm__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#endif

fontdatatype TRONFont[1144] PROGMEM={         
0x08,0x0C,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // <Space>
0x00,0x00,0x18,0x18,0x18,0x18,0x08,0x00,0x18,0x18,0x00,0x00, // !*
0x00,0x36,0x6C,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // "*
0x00,0x00,0x22,0xFE,0x7F,0x66,0x66,0xFE,0x7F,0x44,0x00,0x00, // #*
0x00,0x00,0x18,0x3E,0x7E,0x60,0x06,0x7E,0x7C,0x18,0x00,0x00, // $*
0x00,0x00,0x64,0x6C,0x0C,0x08,0x10,0x30,0x36,0x26,0x00,0x00, // %*
0x00,0x18,0x3E,0x7E,0x60,0x7C,0x78,0x60,0x7E,0x3E,0x18,0x00, // &*
0x00,0x60,0x60,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // '*
0x00,0x30,0x70,0x60,0x60,0x60,0x60,0x60,0x60,0x70,0x30,0x00, // (*
0x00,0x0C,0x0E,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x0C,0x00, // )*
0x00,0x08,0x78,0x28,0x3C,0x20,0x00,0x00,0x00,0x00,0x00,0x00, // **
0x00,0x00,0x00,0x10,0x18,0x3E,0x7C,0x18,0x08,0x00,0x00,0x00, // +*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x60,0xC0,0x00, // ,*
0x00,0x00,0x00,0x00,0x00,0x3E,0x7C,0x00,0x00,0x00,0x00,0x00, // -*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00, // .*
0x00,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x60,0x60,0x00, // /*
0x00,0x00,0x3C,0x7E,0x66,0x5A,0x5A,0x66,0x7E,0x3C,0x00,0x00, // 0*
0x00,0x00,0x1C,0x30,0x64,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00, // 1*
0x00,0x00,0x3C,0x7C,0x60,0x0C,0x18,0x30,0x7C,0x7C,0x00,0x00, // 2*
0x00,0x00,0x7E,0x7E,0x0C,0x08,0x06,0x06,0x7E,0x7C,0x00,0x00, // 3*
0x00,0x00,0x06,0x16,0x36,0x76,0x76,0x06,0x06,0x06,0x00,0x00, // 4*
0x00,0x00,0x7E,0x7E,0x60,0x60,0x06,0x06,0x7E,0x7C,0x00,0x00, // 5*
0x00,0x00,0x3E,0x7E,0x00,0x7C,0x7E,0x42,0x7E,0x3C,0x00,0x00, // 6*
0x00,0x00,0x7E,0x7C,0x00,0x06,0x0C,0x18,0x30,0x60,0x00,0x00, // 7*
0x00,0x00,0x3C,0x7E,0x42,0x3C,0x7E,0x42,0x7E,0x3C,0x00,0x00, // 8*
0x00,0x00,0x3C,0x7E,0x42,0x7E,0x3E,0x00,0x7E,0x7C,0x00,0x00, // 9*
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x00,0x00, // :*
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x18,0x18,0x08,0x00, // ;*
0x00,0x00,0x0C,0x18,0x30,0x60,0x00,0x60,0x30,0x18,0x0C,0x00, // <*
0x00,0x00,0x00,0x3E,0x7C,0x00,0x00,0x3E,0x7C,0x00,0x00,0x00, // =*
0x00,0x00,0x30,0x18,0x0C,0x06,0x00,0x06,0x0C,0x18,0x30,0x00, // >*
0x00,0x00,0x3C,0x7E,0x66,0x06,0x1E,0x0C,0x00,0x18,0x18,0x00, // ?*
0x00,0x00,0x3C,0x7E,0xE7,0xDB,0xBD,0x66,0x5A,0x42,0x00,0x00, // @*
0x00,0x00,0x18,0x3C,0x24,0x24,0x66,0x60,0x6E,0x66,0x00,0x00, // A*
0x00,0x00,0x7C,0x7E,0x62,0x6C,0x64,0x02,0x7E,0x7C,0x00,0x00, // B*
0x00,0x00,0x1E,0x3E,0x70,0x60,0x60,0x70,0x3E,0x1E,0x00,0x00, // C*
0x00,0x00,0x78,0x7C,0x0E,0x06,0x06,0x0E,0x7C,0x78,0x00,0x00, // D*
0x00,0x00,0x7E,0x7E,0x00,0x7C,0x78,0x60,0x7E,0x7E,0x00,0x00, // E*
0x00,0x00,0x7E,0x7E,0x00,0x7C,0x78,0x60,0x60,0x60,0x00,0x00, // F*
0x00,0x00,0x1E,0x3E,0x60,0x4E,0x46,0x60,0x3E,0x1E,0x00,0x00, // G*
0x00,0x00,0x66,0x66,0x66,0x6E,0x66,0x60,0x66,0x66,0x00,0x00, // H*
0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00, // I*
0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x78,0x70,0x00,0x00, // J*
0x00,0x00,0x06,0x0C,0x18,0x30,0x7C,0x0C,0x66,0x66,0x00,0x00, // K*
0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x00,0x7E,0x7E,0x00,0x00, // L*
0x00,0x00,0x42,0x66,0x7E,0x66,0x66,0x66,0x66,0x66,0x00,0x00, // M*
0x00,0x00,0x42,0x66,0x76,0x76,0x6E,0x6E,0x66,0x62,0x00,0x00, // N*
0x00,0x00,0x3C,0x7E,0x66,0x42,0x42,0x66,0x7E,0x3C,0x00,0x00, // O*
0x00,0x00,0x7C,0x7E,0x02,0x6E,0x64,0x60,0x60,0x60,0x00,0x00, // P*
0x00,0x00,0x3C,0x7E,0x66,0x42,0x4A,0x6E,0x6E,0x2C,0x00,0x00, // Q*
0x00,0x00,0x7C,0x7E,0x00,0x1E,0x1C,0x18,0x6C,0x66,0x00,0x00, // R*
0x00,0x00,0x1E,0x3E,0x60,0x60,0x06,0x06,0x7C,0x78,0x00,0x00, // S*
0x00,0x00,0x66,0x6E,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00, // T*
0x00,0x00,0x66,0x66,0x66,0x66,0x66,0x66,0x7E,0x3C,0x00,0x00, // U*
0x00,0x00,0x42,0x66,0x66,0x06,0x66,0x7E,0x3C,0x18,0x00,0x00, // V*
0x00,0x00,0x66,0x66,0x66,0x66,0x7E,0x7E,0x66,0x42,0x00,0x00, // W*
0x00,0x00,0x42,0x66,0x3C,0x00,0x00,0x3C,0x66,0x42,0x00,0x00, // X*
0x00,0x00,0x42,0x66,0x3C,0x00,0x18,0x18,0x18,0x18,0x00,0x00, // Y*
0x00,0x00,0x7E,0x7E,0x0C,0x00,0x00,0x30,0x7E,0x7E,0x00,0x00, // Z*
0x00,0x38,0x70,0x60,0x60,0x60,0x60,0x60,0x60,0x70,0x38,0x00, // [*
0x00,0x60,0x60,0x30,0x30,0x18,0x18,0x0C,0x0C,0x06,0x06,0x00, // <Backslash>*
0x00,0x1C,0x0E,0x06,0x06,0x06,0x06,0x06,0x06,0x0E,0x1C,0x00, // ]*
0x00,0x00,0x18,0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ^*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE, // _*
0x00,0x06,0x0C,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // '*
0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x30,0x48,0x64,0x00,0x00, // a*
0x00,0x00,0x80,0xC0,0x40,0x50,0x48,0x48,0x48,0xF0,0x00,0x00, // b*
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x00,0x48,0x38,0x00,0x00, // c*
0x00,0x00,0x04,0x0C,0x08,0x08,0x38,0x40,0x48,0x3C,0x00,0x00, // d*
0x00,0x00,0x00,0x00,0x30,0x48,0x00,0x78,0x40,0x38,0x00,0x00, // e*
0x00,0x00,0x1C,0x20,0x40,0x18,0x20,0x20,0x20,0x60,0x00,0x00, // f*
0x00,0x00,0x00,0x00,0x00,0x3C,0x40,0x2C,0x08,0x18,0x28,0x78, // g*
0x00,0x00,0x80,0xC0,0x20,0x10,0x48,0x48,0x48,0xCC,0x00,0x00, // h*
0x00,0x00,0x20,0x00,0x00,0x20,0x20,0x20,0x10,0x68,0x00,0x00, // i*
0x00,0x00,0x10,0x00,0x00,0x20,0x10,0x18,0x10,0x10,0x90,0x60, // j*
0x00,0x00,0x00,0x00,0x04,0x0C,0x10,0x30,0x48,0xDC,0x00,0x00, // k*
0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x50,0x98,0x00,0x00, // l*
0x00,0x00,0x00,0x00,0x00,0x70,0x88,0xA8,0xA8,0xA8,0x00,0x00, // m*
0x00,0x00,0x00,0x00,0x00,0xD0,0x48,0x48,0x48,0x90,0x00,0x00, // n*
0x00,0x00,0x00,0x00,0x00,0x28,0x44,0x54,0x44,0x28,0x00,0x00, // o*
0x00,0x00,0x00,0x00,0x00,0x28,0x64,0x24,0x28,0x20,0x20,0x40, // p*
0x00,0x00,0x00,0x00,0x00,0x28,0x4C,0x48,0x28,0x08,0x08,0x06, // q*
0x00,0x00,0x00,0x00,0x00,0x70,0x80,0x40,0x40,0x40,0x00,0x00, // r*
0x00,0x00,0x00,0x00,0x00,0x38,0x40,0x48,0x08,0x70,0x00,0x00, // s*
0x00,0x00,0x00,0x00,0x20,0x20,0xD8,0x20,0x20,0x20,0x30,0x00, // t*
0x00,0x00,0x00,0x00,0x00,0x48,0x48,0x48,0x40,0x38,0x00,0x00, // u*
0x00,0x00,0x00,0x00,0x00,0x88,0x50,0x50,0x10,0x20,0x00,0x00, // v*
0x00,0x00,0x00,0x00,0x00,0x00,0x88,0xA8,0x88,0x50,0x00,0x00, // w*
0x00,0x00,0x00,0x00,0x00,0x88,0x50,0x50,0x50,0x88,0x00,0x00, // x*
0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x48,0x48,0x10,0x20,0x40, // y*
0x00,0x00,0x00,0x00,0x00,0x70,0x08,0x48,0x40,0x38,0x00,0x00, // z*
0x00,0x08,0x10,0x20,0x40,0x20,0x20,0x40,0x20,0x10,0x08,0x00, // {*
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10, // |*
0x00,0x40,0x20,0x10,0x08,0x10,0x10,0x08,0x10,0x20,0x40,0x00, // }*
0x40,0xA4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ~*
};