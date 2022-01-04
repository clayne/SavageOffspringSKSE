#pragma once

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"


#include <SimpleIni.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <xbyak/xbyak.h>

namespace logger = SKSE::log;
namespace string = SKSE::stl::string;
using namespace std::literals;

namespace stl
{
	using namespace SKSE::stl;

	template <class T>
	void write_thunk_call(std::uintptr_t a_src)
	{
		auto& trampoline = SKSE::GetTrampoline();
		T::func = trampoline.write_call<5>(a_src, T::thunk);
	}
}

#define DLLEXPORT __declspec(dllexport)

#include "Version.h"
