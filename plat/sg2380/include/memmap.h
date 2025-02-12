#ifndef __MEMMAP_H__
#define __MEMMAP_H__

#define TOP_BASE	    0x5088100000
#define CLKGEN_BASE	    0x5088102000
#define TOP_CLK_BASE	    0x7050002000
#define SOFT_RESET_BASE	    0x7050003000
#define OTP_BASE	    0x50B7070000
#define LEFT_IOMMU_BASE		0x5082000000
#define RIGHT_IOMMU_BASE	0x5082100000
#define GPU_IOMMU_BASE		0x50B7232000
#define PCIE_IOMMU_BASE		0x50B9820000
#define SSPERI_IOMMU_BASE	0x50BB820000
#define SSPERI_SYS_TOP		0x50BB831000
#define GPU_SYS_BASE		0x50b7230000

#define SSPERI_PHY0_INTF_REG	0x50BB880000
#define SSPERI_PHY1_INTF_REG	0x50BB8F0000

#define SSPERI_MODE_MASK	0x3

#define SSPERI_MODE_PCIe	0x0
#define SSPERI_MODE_SATA	0x1
#define SSPERI_MODE_ETH		0x2

#define BOOT_SOURCE_FLAG_ADDR	0x0
#define BOOT_SOURCE_FLAG_SIZE	0x0
#define OTP_SW_INFO_ADDR	0x0

#define SOFT_RESET_REG0	    SOFT_RESET_BASE
#define SOFT_RESET_REG1	    (SOFT_RESET_BASE + 0x4)
#define REG_TOP_CONF_INFO   (TOP_BASE + 0x4)
#define REG_TOP_CONTROL	    (TOP_BASE + 0x8)

#define BOOT_SEL	REG_TOP_CONF_INFO
#define MODE_SEL	REG_TOP_CONF_INFO

#define NORMAL_MODE	0x0
#define FAST_MODE	0x1
#define SAFE_MODE	0x2
#define BYPASS_MODE	0x3

#define SDIO_BASE	0x5090000000
#define EFUSE_BASE	0x50B7060000
#define SD_RESET_INDEX  0

#define TRUST_BOOT_EN	OTP_BASE
#define SPACC_KEY	(OTP_BASE + 0x1C)
#define PUBKEY_HASH	(OTP_BASE + 0x3C)

#define WDT_BASE	0x50B7000000
#define WDT_CLK_ENABLE	0x4
#define WDT_RESET_STAT	(TOP_BASE + 0x1C)

#define SOFT_RSTN_1	(SOFT_RESET_BASE + 0x4)
#define OTP_FTSN1	(OTP_BASE + 0x10)
#define USB_BASE	0x5090300000
#define USB20_PHY_WRAP	0x50B7600000
#define REG_TOP_USB_PHY_CTRL (TOP_BASE + 0x48)
#define OTP_USB_XTAL_PHY (REG_TOP_CONTROL + 0x14)
#define OTP_USB_XTAL_PHY_SHIFT (1 << 0)
#define OTP_USB_XTAL_PHY_MASK 0x3

#define SPINAND_BASE	0x50B0060000
#define CV_IO_BUF_BASE	0x300000
#define CV_IO_BUF_SIZE	0x2000
#define EMMC_BASE	0x5090002000
#define BIT_IO_STA_TRAP_SPI33_18 (23)
#define BIT_EMMC_MS (1 << 3)
#define REG_PG_PAD_CTRL (TOP_BASE + 0x1e0)

/* GP_REG11 0: unexpected watchdog reset; 1: intentionally reset */
#define SYS_RESET	(TOP_BASE + 0x1EC)
#define MULTI_CORE_FLAG (TOP_BASE + 0x1C0) // GP_REG0

#define CLK_ENABLE_BASE	TOP_CLK_BASE

#define FLASH0_BASE	0x5091000000

#define UART_BASE	0x50B0090000
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
