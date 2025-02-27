#include <Arduino.h>
#include <VanBus.h>

void setup() {
  Serial.begin(115200);
  uint8_t RX_PIN = 10;
  VanBusRx.Setup(RX_PIN);
}

void loop() {
  TVanPacketRxDesc pkt;
  if (VanBusRx.Receive(pkt)) pkt.DumpRaw(Serial);
}