#ifndef SPRING_LUA_ALLOC_STATE_H
#define SPRING_LUA_ALLOC_STATE_H

#include <atomic>

struct SLuaAllocState {
	std::atomic<uint64_t> allocedBytes;
	std::atomic<uint64_t> numLuaAllocs;
	std::atomic<uint64_t> luaAllocTime;
	std::atomic<uint64_t> numLuaStates;
};

#endif
