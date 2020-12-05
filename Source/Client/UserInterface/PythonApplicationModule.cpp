//search:
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 0);
#endif

//add:
#ifdef ENABLE_SEND_TARGET_INFO_EXTENDED
	PyModule_AddIntConstant(poModule, "ENABLE_SEND_TARGET_INFO_EXTENDED", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_SEND_TARGET_INFO_EXTENDED", 0);
#endif

