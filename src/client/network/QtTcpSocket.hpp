/*
** EPITECH PROJECT, 2018
** CPP_babel_2018
** File description:
** 	QtTcpSocket class
*/

#ifndef CPP_BABEL_2018_QTTCPSOCKET_HPP
#define CPP_BABEL_2018_QTTCPSOCKET_HPP

#include <string>
#include <vector>
#include <QtNetwork>
#include <QtNetwork/QTcpSocket>
#include <QtWidgets/QDialog>
#include "src/common/network/ATcpSocket.hpp"
#include "src/common/exception/TcpSocketException.hpp"

namespace babel
{
	namespace client
	{
		class QtTcpSocket
			: public QObject, public common::ATcpSocket {
		Q_OBJECT
		public:
			explicit
			QtTcpSocket(common::ConnectionInfo
			&connectionInfo);
			bool connect() override;
			bool disconnect() override;
			bool send(common::DataPacket packet) override;
			const common::DataPacket receive() override;
		Q_SIGNALS:
			void connectionSuccess();
			void newPacket();
		private:
			void startRead();
			void handleRead();
			void getSocketErrorCode(
				QAbstractSocket::SocketError);
			void onSuccessConnection();
			QTcpSocket _socket;
		};
	}
}
#endif //CPP_BABEL_2018_QTTCPSOCKET_HPP
