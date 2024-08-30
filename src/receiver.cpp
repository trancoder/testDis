#include <iostream>
#include <vector>
#include <dis7/EntityStatePdu.h>
#include <dis7/SimulationManagementFamilyPdu.h>  // For general PDU operations

int main() {
    // Create an instance of an EntityStatePdu
    DIS::EntityStatePdu pdu;

    // Set up some fields (you'll need to consult the DIS7 documentation for details)
    pdu.setEntityID(DIS::EntityID());

    // Serialize the PDU
    std::vector<uint8_t> serializedPDU = pdu.getAsByteArray();

    // Print out the serialized PDU size
    std::cout << "Serialized PDU size: " << serializedPDU.size() << " bytes" << std::endl;

    // Deserialize the PDU
    DIS::EntityStatePdu receivedPdu;
    receivedPdu.setAsByteArray(serializedPDU);

    // Print out some fields to verify deserialization
    std::cout << "Entity ID: " << receivedPdu.getEntityID().getSite() << std::endl;

    return 0;
}
