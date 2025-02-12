#ifndef __MEMMAP_H__
#define __MEMMAP_H__

#ifdef BM1686_TEST

#define GICD_BASE       0x50001000
#define GICC_BASE       0x50002000
#define REG_BASE_GICD	GICD_BASE
#define REG_BASE_GICC	GICC_BASE

#define SDIO_BASE	0x50101000

#define UART_REG_WIDTH 32
#define UART_BASE	0x50118000UL
#define UART_PCLK	500000000
#define UART_BAUDRATE	115200


#else

#define SYS_CTRL_BASE   0x7030010000
#define TOP_BASE        SYS_CTRL_BASE
#define REG_TOP_CONF_INFO	0x4
#define BOOT_SEL_ADDR	(TOP_BASE + REG_TOP_CONF_INFO)
#define REG_DDR_SIZE    0X54
#define DDR_SIZE_ADDR   (TOP_BASE + REG_DDR_SIZE)

#define BOARD_TYPE_REG	(SYS_CTRL_BASE + 0x23C)
#define BOARD_TYPE_MIN				0x2
#define BOARD_TYPE_SOPHGO_X8EVB			0x2
#define BOARD_TYPE_MILKV_PIONEER		0x3
#define BOARD_TYPE_SOPHGO_PISCES		0x4
#define BOARD_TYPE_SOPHGO_X4EVB			0x5
#define BOARD_TYPE_MAX				0x5

#define MP0_STATUS	0x380
#define MP0_STATUS_ADDR (TOP_BASE + MP0_STATUS)
#define MP0_CONTROL     0X384
#define MP0_CONTROL_ADDR	(TOP_BASE + MP0_CONTROL)

#define FLASH0_BASE		0x7000180000
#define FLASH1_BASE		0x7002180000
#define SDIO_BASE	0x704002B000
#define SPIFLASH_1_BASE	0X7002180000
#define EFUSE_0_BASE	0x7030000000
#define TOP_RESET_BASE	0x7030013000

#define SD_RESET_INDEX  28

#define UART_BASE	0x7040000000
#define UART_REG_WIDTH  32
#if defined(CONFIG_TARGET_EMULATOR)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_PALLADIUM)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_FPGA)

#define UART_PCLK	25000000
#define UART_BAUDRATE	115200

#elif defined(CONFIG_TARGET_ASIC)

#define UART_PCLK	500000000
#define UART_BAUDRATE	115200

#else
#error "no target specified"
#endif

#endif

#endif
