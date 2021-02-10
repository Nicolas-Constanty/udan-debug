#include "udan/debug/uLogger.h"

#if USE_SPDLOG
std::shared_ptr<spdlog::logger> udan::debug::ULogger::m_logger = nullptr;
std::mutex udan::debug::ULogger::m_mtx;

void udan::debug::ULogger::Init()
{
	m_logger = spdlog::stdout_color_mt("AutoRemesher");
	m_logger->set_level(spdlog::level::trace);
	m_logger->enable_backtrace(1024);
}
#endif