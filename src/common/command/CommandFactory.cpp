/*
** EPITECH PROJECT, 2018
** CPP_babel_2018
** File description:
** CommandFactory.cpp
*/

#include "CommandFactory.hpp"

babel::common::CommandFactory::CommandFactory() :
	_commands({{babel::common::CommandName ::LOGIN,
			   &babel::common::CommandFactory::createCommand
				   <CommandLogin>}})
{}

babel::common::ACommand
babel::common::CommandFactory::deserialize(babel::common::DataPacket packet)
{
	if (_commands.find(packet.getCommandId()) != _commands.end())
		return (this->*_commands[packet.getCommandId()])
			(packet.getArgs());
	throw CommandException("Unknow command");
}

template<class T>
babel::common::ACommand babel::common::CommandFactory::createCommand(
	std::vector<std::string> args)
{
	return T(args);
}