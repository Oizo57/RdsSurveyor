/*
 RDS Surveyor -- RDS decoder, analyzer and monitor tool and library.
 For more information see
   http://www.jacquet80.eu/
   http://rds-surveyor.sourceforge.net/
 
 Copyright (c) 2009, 2010 Christophe Jacquet

 This file is part of RDS Surveyor.

 RDS Surveyor is free software: you can redistribute it and/or modify
 it under the terms of the GNU Lesser Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 RDS Surveyor is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser Public License for more details.

 You should have received a copy of the GNU Lesser Public License
 along with RDS Surveyor.  If not, see <http://www.gnu.org/licenses/>.

*/

package eu.jacquet80.rds.log;

import eu.jacquet80.rds.core.TunedStation;

public class StationLost extends LogMessage {
	private final TunedStation station;
	private final boolean lastInStream;
	
	public StationLost(RDSTime time, TunedStation station, boolean lastInStream) {
		super(time);
		
		this.station = station;
		this.lastInStream = lastInStream;
	}
	
	public StationLost(RDSTime time, TunedStation station) {
		this(time, station, false);
	}
	
	public String toString() {
		return time + "> Lost: " + station.getPS();
	}

	@Override
	public void accept(LogMessageVisitor visitor) {
		visitor.visit(this);
	}
	
	public TunedStation getStation() {
		return station;
	}
	
	public boolean isLastInStream() {
		return lastInStream;
	}
}
