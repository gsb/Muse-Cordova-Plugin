// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from listeners.djinni

@class IXNMuseArtifactPacket;
@class IXNMuseDataPacket;

/**
 * Provides abstract method for accessing Muse data packets and abstract method
 * to listen for artifact packets(which are part of MuseElements).
 * Check out {@link MuseDataPacketType} for information about all
 * acceptable packet types. The client should implement the handler method to access
 * packet data or to specify what to do when it is received. All packets
 * can be handled in one listener or you can specify separate listener for every
 * specific packet.
 * Packet is sent only if listener was registered to listen for this packet type.
 */

@protocol IXNMuseDataListener

/**
 * Handler method for Muse data packets
 * @param p - object containing Muse data
 */
- (void)receiveMuseDataPacket:(IXNMuseDataPacket *)packet;

/**
 * Handler method for Muse artifact packets. Packet is sent only if
 * listener was registered to listen for such packets.
 * @param p - object containing Muse artifact
 */
- (void)receiveMuseArtifactPacket:(IXNMuseArtifactPacket *)packet;

@end