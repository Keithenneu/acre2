/*
 * Author: ACRE2Team
 * Returns the rack IDs for a specific vehicle that a player can access.
 *
 * Arguments:
 * 0: Target Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * Accessible racks <ARRAY>
 *
 * Example:
 * [vehicle acre_player, acre_player] call acre_sys_rack_fnc_getAccessibleVehicleRacks
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_vehicle", "_unit"];

private _racks = [];
{
    if (_x isKindOf "ACRE_BaseRack" && {[_x, _unit, _vehicle] call FUNC(isRackAccessible)}) then {
        _racks pushBack _x;
    };
} forEach (_vehicle getVariable [QGVAR(vehicleRacks), []]);

_racks
