
// SPIy, SPIz에 대한 정의
#define SPIy                   SPI1
#define SPIy_CLK               RCC_APB2Periph_SPI1
#define SPIy_GPIO              GPIOA
#define SPIy_GPIO_CLK          RCC_APB2Periph_GPIOA  
#define SPIy_PIN_SCK           GPIO_Pin_5
#define SPIy_PIN_MISO          GPIO_Pin_6
#define SPIy_PIN_MOSI          GPIO_Pin_7
  
#define SPIz                    SPI2
#define SPIz_CLK                RCC_APB1Periph_SPI2
#define SPIz_GPIO               GPIOB
#define SPIz_GPIO_CLK           RCC_APB2Periph_GPIOB 
#define SPIz_PIN_SCK            GPIO_Pin_13
#define SPIz_PIN_MISO           GPIO_Pin_14
#define SPIz_PIN_MOSI           GPIO_Pin_15 

typedef enum {FAILED = 0, PASSED = !FAILED} TestStatus;
