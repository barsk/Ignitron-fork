#ifndef SPARK_PRESET_BUILDER_H // include guard
#define SPARK_PRESET_BUILDER_H

#include <Arduino.h>
#include <Arduino_JSON.h>
#include <FS.h>
#include <Effortless_SPIFFS.h>


#include "SparkHelper.h"
#include "SparkTypes.h"

#define PRESETS_PER_BANK 4


using ByteVector = std::vector<byte>;

class SparkPresetBuilder{

private:
	std::vector<std::vector<std::string>> presetBanksNames;
	std::vector<char*> allPresetsJSON;

public:
	SparkPresetBuilder();
	//std::string getJsonFromPreset(preset pset);
	void initializePresetListFromFS();
	preset getPreset(int preset, int bank);
	int getNumberOfBanks();
	preset getPresetFromJson(char* json);

};

#endif
