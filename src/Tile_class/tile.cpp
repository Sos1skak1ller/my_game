#include "Tile.hpp"

Tile::Tile() : status(EMPTY) {}

Tile::Tile(Status initialStatus) : status(initialStatus) {}

Tile::Status Tile::getStatus() const {
    return status;
}

void Tile::setStatus(Status newStatus) {
    status = newStatus;
}

std::string Tile::getStatusString() const {
    switch (status) {
        case EMPTY:
            return "Empty";
        case OCCUPIED:
            return "Occupied";
        case DESTROYED:
            return "Destroyed";
        default:
            return "Unknown";
    }
}

