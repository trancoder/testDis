#include <iostream>
#include <dis7/EntityStatePdu.h>

int main() {
    // Create an instance of an EntityStatePdu
    DIS::EntityStatePdu enemy;
        
    // an AH-1W
    DIS::EntityType ah_1w;
    ah_1w.setCategory( 20 );
    ah_1w.setCountry( 225 );
    ah_1w.setDomain( 2 );
    ah_1w.setEntityKind( 1 );
    ah_1w.setExtra( 0 );
    ah_1w.setSpecific( 10 );
    ah_1w.setSubcategory( 2 );;

    enemy.setEntityType( ah_1w );    

    // Serialize PDU to byte array
    DIS::DataStream buffer( DIS::BIG );
    enemy.marshal(buffer); 
    return 0;
}

