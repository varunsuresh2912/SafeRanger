# [SafeRanger](https://hackaday.io/project/25747-saferanger) 

SafeRanger is a semi-autonomous miniature multispectral diagnostic wireless controlled tank based rover which can monitor thermal charecteristics of valves using Thermal Camera and monitor gas leaks in oil and gas power plants. It is designed to be modular to add custom sensors with it. Currenty it houses a thermal, visual camera along with a gas sensors.
The thermal data is sent to the control center through VNC, a Wi-Fi server with which alerts or guidance can be in turn provided to the technician, so that necessary steps can be taken.


### SafeRanger current prototpe
![picture3](https://cdn.hackaday.io/images/7356861499267726200.JPG)


## Getting Started
SafeRanger was designed to be simple to develop and the components can be added to enhance functionality
### Hardware Prerequisites

	1. Raspberry Pi 3
	2. FLIR Lepton pure engineering module
	3. Tank Chassis with dual DC motors
	4. HC-05 module
	5. Arduino Nano
        6. L298D module
        7. MQ-2 Gas Sensors

Connections: 
Connect SDA, SCL of ADC to the raspberry pi 3 respectively and Vin,Gnd to 3.3V and Gnd. Follow the instructions of the FLIR thermal module hookup instruction in Sparkfun. 


### Software Prerequisites

```
	1. Python 2.7
	2. Qt
	3. VNC
```
Visualize the data on the tightVNC app on the phone



## Built With

* [FLIR Lepton](https://www.sparkfun.com/products/13233) - Thermal camera
* [TightVNC](https://www.raspberrypi.org/documentation/remote-access/vnc/) - VNC app
* [MQ gas sensor](https://sites.google.com/a/complexsys.info/scattershot/home/configuring-mq-series-gas-sensors-and-ads1115-adcs) - ADS1115 gas sensor
* [Bluetooth motor control](https://thinkelectronics.org/bluetooth-remote-control-using-arduino-nano/) - Bluetooth RC control

## Future Concept 
I aim to move towards a complete system on a Raspberry Pi, I want to design a dedicated RF transiever for long range and work on ways to integrate to existing automation systems in the industries or power plants. The Ranger would also sport a lidar for autonomous routine operation.




## Authors

* **Varun Suresh** - [varunsuresh2912](https://github.com/varunsuresh2912)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Thanks to hackaday for the amazing platform
* Folks at Pi foundation and Arduino for making these easy to use tools.
* Dad for funding my offshoot ideas as always.


