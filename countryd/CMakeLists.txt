# CMakeLists file

add_library(country  
event/BaseEvent.cpp
event/DealCountryEvent.cpp
event/UpdateWorkingStatus.cpp
CountryConfigMgr.cpp
country.cpp
CountryDataHandler.cpp
CountryDataSaver.cpp
countryDB.pb.cpp
CountryEventHandler.cpp
CountryNetHandler.cpp
CountryRgnDataHandler.cpp
GameHandler.cpp
MemCacheServerHandler.cpp
) 
