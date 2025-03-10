//新增绑定方法
int lua_cocos2dx_VideoSprite_constructor(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::VideoSprite* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif
	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_cocos2dx_VideoSprite_constructor'", nullptr);
			return 0;
		}
		cobj = new cocos2d::VideoSprite();
		cobj->autorelease();
		int ID = (int)cobj->_ID;
		int* luaID = &cobj->_luaID;
		toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj, "cc.VideoSprite");
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.VideoSprite:VideoSprite", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_constructor'.", &tolua_err);
#endif

	return 0;
}
int lua_cocos2dx_VideoSprite_setFileName(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::VideoSprite* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "cc.VideoSprite", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (cocos2d::VideoSprite*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_cocos2dx_VideoSprite_setFileName'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		std::string arg0;

		ok &= luaval_to_std_string(tolua_S, 2, &arg0, "cc.VideoSprite:setFileName");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_cocos2dx_VideoSprite_setFileName'", nullptr);
			return 0;
		}
		cobj->setFileName(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.VideoSprite:setFileName", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_setFileName'.", &tolua_err);
#endif

	return 0;
}
int lua_cocos2dx_VideoSprite_play(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::VideoSprite* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "cc.VideoSprite", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (cocos2d::VideoSprite*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_cocos2dx_VideoSprite_play'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_cocos2dx_VideoSprite_play'", nullptr);
			return 0;
		}
		cobj->play();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.VideoSprite:play", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_play'.", &tolua_err);
#endif

	return 0;
}
int lua_cocos2dx_VideoSprite_stop(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::VideoSprite* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "cocos2d::VideoSprite", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (cocos2d::VideoSprite*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_cocos2dx_VideoSprite_stop'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_cocos2dx_VideoSprite_stop'", nullptr);
			return 0;
		}
		cobj->stop();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cocos2d.VideoSprite:stop", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_stop'.", &tolua_err);
#endif

	return 0;
}
int lua_cocos2dx_VideoSprite_pause(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::VideoSprite* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "cocos2d::VideoSprite", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (cocos2d::VideoSprite*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_cocos2dx_VideoSprite_pause'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 0)
	{
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_cocos2dx_VideoSprite_pause'", nullptr);
			return 0;
		}
		cobj->pause();
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cocos2d.VideoSprite:pause", argc, 0);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_pause'.", &tolua_err);
#endif

	return 0;
}
int lua_cocos2dx_VideoSprite_setLooping(lua_State* tolua_S)
{
	int argc = 0;
	cocos2d::VideoSprite* cobj = nullptr;
	bool ok = true;

#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertype(tolua_S, 1, "cc.VideoSprite", 0, &tolua_err)) goto tolua_lerror;
#endif

	cobj = (cocos2d::VideoSprite*)tolua_tousertype(tolua_S, 1, 0);

#if COCOS2D_DEBUG >= 1
	if (!cobj)
	{
		tolua_error(tolua_S, "invalid 'cobj' in function 'lua_cocos2dx_VideoSprite_setLooping'", nullptr);
		return 0;
	}
#endif

	argc = lua_gettop(tolua_S) - 1;
	if (argc == 1)
	{
		bool arg0;

		ok &= luaval_to_boolean(tolua_S, 2, &arg0, "cc.VideoSprite:setLooping");
		if (!ok)
		{
			tolua_error(tolua_S, "invalid arguments in function 'lua_cocos2dx_VideoSprite_setLooping'", nullptr);
			return 0;
		}
		cobj->setLooping(arg0);
		lua_settop(tolua_S, 1);
		return 1;
	}
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.VideoSprite:setLooping", argc, 1);
	return 0;

#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_setLooping'.", &tolua_err);
#endif

	return 0;
}
int lua_cocos2dx_VideoSprite_addEventListener(lua_State* tolua_S)
{
	return 0;
}
int lua_register_cocos2dx_VideoSprite(lua_State* tolua_S)
{
	tolua_usertype(tolua_S, "cc.VideoSprite");
	tolua_cclass(tolua_S, "VideoSprite", "cc.VideoSprite", "cc.Node", nullptr);

	tolua_beginmodule(tolua_S, "VideoSprite");
	tolua_function(tolua_S, "new", lua_cocos2dx_VideoSprite_constructor);
	tolua_function(tolua_S, "play", lua_cocos2dx_VideoSprite_play);
	tolua_function(tolua_S, "stop", lua_cocos2dx_VideoSprite_stop);
	tolua_function(tolua_S, "pause", lua_cocos2dx_VideoSprite_pause);
	tolua_function(tolua_S, "setLooping", lua_cocos2dx_VideoSprite_setLooping);
	tolua_function(tolua_S, "setFileName", lua_cocos2dx_VideoSprite_setFileName);
	tolua_function(tolua_S, "addEventListener", lua_cocos2dx_VideoSprite_addEventListener);
	tolua_endmodule(tolua_S);
	std::string typeName = typeid(cocos2d::VideoSprite).name();
	g_luaType[typeName] = "cc.VideoSprite";
	g_typeCast["VideoSprite"] = "cc.VideoSprite";
	return 1;
}
// 结束绑定方法

TOLUA_API int register_all_cocos2dx(lua_State* tolua_S)
{
	//... 省略
	lua_register_cocos2dx_VideoSprite(tolua_S);
	//... 省略
}