#include <cstdlib>
#include <iostream>

enum class TrafficLight { green, amber, red };

TrafficLight &operator++(TrafficLight &t) {

  switch (t) {
  case TrafficLight::red:
    t = TrafficLight::green;
    break;
  case TrafficLight::green:
    t = TrafficLight::amber;
    break;
  case TrafficLight::amber:
    t = TrafficLight::red;
    break;
  }

  return t;

}
TrafficLight &operator++(TrafficLight &t,int) {

  switch (t) {
  case TrafficLight::red:
    t = TrafficLight::green;
    break;
  case TrafficLight::green:
    t = TrafficLight::amber;
    break;
  case TrafficLight::amber:
    t = TrafficLight::red;
    break;
  }

  return t;

}

TrafficLight &operator--(TrafficLight &t) {

  switch (t) {
  case TrafficLight::red:
    t = TrafficLight::amber;
    break;
  case TrafficLight::green:
    t = TrafficLight::red;
    break;
  case TrafficLight::amber:
    t = TrafficLight::green;
    break;
  }

  return t;

}


int main(void) {

     TrafficLight light = TrafficLight::red;
     ++light;
     ++light;
     light++;
     --light;
     return EXIT_SUCCESS;
}
