int lua_cocos2dx_VideoSprite_create(lua_State* tolua_S)
{
	int argc = 0;
	bool ok = true;
#if COCOS2D_DEBUG >= 1
	tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
	if (!tolua_isusertable(tolua_S, 1, "cc.VideoSprite", 0, &tolua_err)) goto tolua_lerror;
#endif

	argc = lua_gettop(tolua_S) - 1;
	do
	{
		if (argc == 0)
		{
			cocos2d::Sprite* ret = cocos2d::VideoSprite::create();
			object_to_luaval<cocos2d::VideoSprite>(tolua_S, "cc.VideoSprite", (cocos2d::VideoSprite*)ret);
			return 1;
		}
	} while (0);
	luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.VideoSprite:create", argc, 0);
	return 0;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'lua_cocos2dx_VideoSprite_create'.", &tolua_err);
#endif
	return 0;
}
static void extendVideoSprite(lua_State* tolua_S)
{
	lua_pushstring(tolua_S, "cc.VideoSprite");
	lua_rawget(tolua_S, LUA_REGISTRYINDEX);
	if (lua_istable(tolua_S, -1))
	{
		tolua_function(tolua_S, "create", lua_cocos2dx_VideoSprite_create);
	}
	lua_pop(tolua_S, 1);
}

int register_all_cocos2dx_manual(lua_State* tolua_S)
{
	// ...
	extendVideoSprite(tolua_S);
	// ...
}