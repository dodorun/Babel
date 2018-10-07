/*
** EPITECH PROJECT, 2018
** CPP_babel_2018
** File description:
** 	TcpServer class
*/

#ifndef CPP_BABEL_2018_TCPSERVER_HPP
#define CPP_BABEL_2018_TCPSERVER_HPP

#include <boost/asio.hpp>
#include <vector>
#include <boost/bind.hpp>
#include "BoostTcpSocket.hpp"
#include "src/server/exception/TcpServerException.hpp"

namespace babel
{
	namespace server
	{
		class TcpServer {
		public:
			explicit TcpServer(uint16_t port = 53876);
			std::vector<std::pair<BoostTcpSocket &, int32_t>>
			&getSockets();
		private:
			bool startAccept();
			void handleAccept(
				const boost::system::error_code &ec);
			std::vector<std::pair<babel::server::BoostTcpSocket &,
				int32_t>> _sockets;
			int32_t _minId = -1;
			boost::asio::io_context _ioContext;
			boost::asio::ip::tcp::acceptor _tcpAcceptor;
			std::vector<std::unique_ptr<BoostTcpSocket>>
				_tcpSockets;
		};
	}
}

#endif //CPP_BABEL_2018_TCPSERVER_HPP