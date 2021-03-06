#include "PlatHandler.h"
#include "../event/EventQueue.h"
#include "../net/NetHandler.h"
#include "../common/string-util.h"

PlatHandler::PlatHandler(EventQueue *eq, int fd, NetHandler *nh): fd_(fd), eq_(eq), nh_(nh) {
	logger_ = log4cxx::Logger::getLogger("PlatHandler");
}
PlatHandler::~PlatHandler() {
}
void PlatHandler::handle(int64 uid, string &req) {
	if (req.substr(0,3)=="ev,") {
		eq_->pushStringEvent(req.substr(3) );
	} else if (req=="pass") { // register passed
		LOG4CXX_INFO(logger_, "Register to platsrv done.");
	} else if (req=="failed") { // register failed
		LOG4CXX_INFO(logger_, "Register to platsrv failed. Closing connection...");
		nh_->closeConnection(fd_);
	} else if (req=="ka") {
		// keep alive message, do nothing
	}
}

