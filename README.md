# **MOONWEATHER v2.2**
This is a light weather station for RPi and a 7inch screen.

---

### **SCREENSHOT**
<div align="center">
    <img
        src="https://github.com/AyckinnLisa/CPP/blob/main/Apps/Moonweather/pics/screenshot.png"
        alt="DEMO"
        style="width:50%">
</div>

---

### **HOW TO USE IT**

* Open Terminal
* Install Qt5-default : ```sudo apt install qt5-default```
* Compile MoonWeather.pro : ```qmake MoonWeather.pro```
* Make : ```make```
* Run the program : ```./MoonWeather```

By default, it runs in full screen but you can change this option in ```main.cpp``` :
* Go to the ```moonW.showFullScreen();```line and comment it.
* Go to the ```moonW.show();``` line and uncomment it.
Also, you can change the screen resolution on the ```moonW.setFixedSize(1024, 600);``` line.

---

### **CHANGELOG**
*Version 2.2 : March 11' 2024*
* Add [FORTE PLUIE] condition

*Version 2.1 : January 1st, 2022*
* Add [BROUILLARD] condition

*Version 2.0 : March 26' 2021*
* Add _Visibility_ informations
* Add new icons
* Fix bugs 
* Update screenshot


*Version 1.0 : March 24' 2021*
* *INITIAL RELEASE*
* Time
* Date
* City
* Coordinates
* Temperature
* Weather conditions (text mode)
* Wind speed
* Humidity
* Pressure