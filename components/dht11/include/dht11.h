// #ifndef DHT11_H_
// #define DHT11_H_

#include "driver/gpio.h"

void dht11_init(gpio_num_t dht_gpio);
int dht11_read_data(gpio_num_t dht_gpio, float *humidity, float *temperature);

// #endif /* DHT11_H_ */
