#include "IsaacRepentance.h"
#include "../ImGuiFeatures/LogViewer.h"

#define MINI_CASE_SENSITIVE
#include "ini.h"

#include <filesystem>

struct REPENTOGONOptions {
	void Init() {
		std::string optionsPath = std::string((char*)&g_SaveDataPath) + "Repentogon/options.ini";
		std::string directory = optionsPath.substr(0, optionsPath.find_last_of("\\/"));

		if (!CreateDirectory(directory.c_str(), NULL)) {
			if (GetLastError() != ERROR_ALREADY_EXISTS) {
				logViewer.AddLog("[REPENTOGON]", "Error creating Repentogon Save directory\n");
				return;
			}
		}
		mINI::INIFile iniFile(optionsPath);

		if (!std::filesystem::exists(optionsPath)) {
			printf("INI doesn't exist, creating\n");
			
			ini["VanillaTweaks"]["BetterVoidGeneration"] = "1";
			ini["VanillaTweaks"]["HushPanicStateFix"] = "1";
			ini["VanillaTweaks"]["KeyMasterDealChance"] = "1";

			iniFile.generate(ini, true);
		}

		iniFile.read(ini);

		betterVoidGeneration = stoi(ini["VanillaTweaks"]["BetterVoidGeneration"]);
		hushPanicStateFix = stoi(ini["VanillaTweaks"]["HushPanicStateFix"]);
		keyMasterDealChance = stoi(ini["VanillaTweaks"]["KeyMasterDealChance"]);

		printf("Loaded REPENTOGON INI\n");
	}
	mINI::INIStructure ini;
	bool betterVoidGeneration;
	bool hushPanicStateFix;
	bool keyMasterDealChance;
};

extern REPENTOGONOptions repentogonOptions;