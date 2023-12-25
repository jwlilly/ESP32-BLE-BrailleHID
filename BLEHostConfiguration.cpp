#include "BLEHostConfiguration.h"

BLEHostConfiguration::BLEHostConfiguration() :
    _vidSource(0x01),
    _vid(0xe502),
    _pid(0xbbab),
    _guidVersion(0x0110),
    _modelNumber("1.0.0"),
    _softwareRevision("1.0.0"),
    _serialNumber("0123456789"),
    _firmwareRevision("1.0.0"),
    _hardwareRevision("1.0.0"),
    _systemID("")
{               
}

uint16_t BLEHostConfiguration::getVidSource(){ return _vidSource; }
uint16_t BLEHostConfiguration::getVid(){ return _vid; }
uint16_t BLEHostConfiguration::getPid(){ return _pid; }
uint16_t BLEHostConfiguration::getGuidVersion(){ return _guidVersion; }

const char* BLEHostConfiguration::getModelNumber(){ return _modelNumber.c_str(); }
const char* BLEHostConfiguration::getSoftwareRevision(){ return _softwareRevision.c_str(); }
const char* BLEHostConfiguration::getSerialNumber(){ return _serialNumber.c_str(); }
const char* BLEHostConfiguration::getFirmwareRevision(){ return _firmwareRevision.c_str(); }
const char* BLEHostConfiguration::getHardwareRevision(){ return _hardwareRevision.c_str(); }
const char* BLEHostConfiguration::getSystemID(){ return _systemID.c_str(); }

void BLEHostConfiguration::setVidSource(uint8_t value) { _vidSource = value; }
void BLEHostConfiguration::setVid(uint16_t value) { _vid = value; }
void BLEHostConfiguration::setPid(uint16_t value) { _pid = value; }
void BLEHostConfiguration::setGuidVersion(uint16_t value) { _guidVersion = value; }

void BLEHostConfiguration::setModelNumber(const char *value) { _modelNumber = std::string(value); }
void BLEHostConfiguration::setSoftwareRevision(const char *value) { _softwareRevision = std::string(value); }
void BLEHostConfiguration::setSerialNumber(const char *value) { _serialNumber = std::string(value); }
void BLEHostConfiguration::setFirmwareRevision(const char *value) { _firmwareRevision = std::string(value); }
void BLEHostConfiguration::setHardwareRevision(const char *value) { _hardwareRevision = std::string(value); }
