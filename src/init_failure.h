/*******************************************************************************
 * Copyright 2012 Bryan Godbolt
 * 
 * This file is part of ANCL Autopilot.
 * 
 *     ANCL Autopilot is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 * 
 *     ANCL Autopilot is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with ANCL Autopilot.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/

#ifndef INIT_FAILURE_H_
#define INIT_FAILURE_H_

/* STL Headers */
#include <stdexcept>
#include <string>

/* Project Headers*/
#include "Debug.h"


/**
 * @author Bryan Godbolt <godbolt@ece.ualberta.ca>
 * @date February 2012: Class creation
 * @date May 1, 2012: Added debug output
 */
class init_failure : public std::exception
{
public:
	explicit init_failure(std::string message = std::string()) throw();
	init_failure(const init_failure& other) throw();
	~init_failure() throw();
	const char * what() const throw();
	init_failure& operator=(const init_failure& other) throw();
	friend Debug& operator<<(Debug& dbg, const init_failure& );
private:
	std::string message;
};

Debug& operator<<(Debug& dbg, const init_failure& i);

#endif
