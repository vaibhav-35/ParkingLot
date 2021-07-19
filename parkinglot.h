#include<string>
#include <vector>

#ifndef PARKING_LOT_H
#define PARKING_LOT_H
#include "parkingfloor.h"
#include "vehicle.h"


class ParkingLot
{
    private:
    std::string name;
    std::vector<ParkingFloor> ParkingFloors;

    public:
    bool bookSlot(Vehicle* vehicle);
    void freeSlot(SlotType slottype, int position, VehicleType vehicletype);
};


#endif