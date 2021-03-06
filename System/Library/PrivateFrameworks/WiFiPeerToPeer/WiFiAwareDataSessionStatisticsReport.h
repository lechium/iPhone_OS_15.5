//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, WiFiMACAddress;

@interface WiFiAwareDataSessionStatisticsReport : NSObject <NSSecureCoding>
{
    _Bool _infraRelayOperationStatus;	// 8 = 0x8
    WiFiMACAddress *_peerAddress;	// 16 = 0x10
    NSNumber *_infrastructureChannel;	// 24 = 0x18
    NSArray *_txCCAHistogram;	// 32 = 0x20
    NSArray *_rxRSSIHistogram;	// 40 = 0x28
    NSArray *_rxFWDelayHistogram;	// 48 = 0x30
    NSArray *_rxIPCDelayHistogram;	// 56 = 0x38
    NSArray *_txConsecutiveErrorsHistogram;	// 64 = 0x40
    NSArray *_txPacketExpiryHistogram;	// 72 = 0x48
    NSNumber *_preferred2GChannelsCount;	// 80 = 0x50
    NSNumber *_preferred5GChannelsCount;	// 88 = 0x58
    NSNumber *_dfsChannelsCount;	// 96 = 0x60
    NSNumber *_csaCount;	// 104 = 0x68
    NSNumber *_quietIECount;	// 112 = 0x70
    NSNumber *_txErrorCount;	// 120 = 0x78
    NSNumber *_packetsOn2GCount;	// 128 = 0x80
    NSNumber *_packetsNAVOn2GCount;	// 136 = 0x88
    NSNumber *_packetsHOFOn2GCount;	// 144 = 0x90
    NSNumber *_packetsOverridenOn5GCount;	// 152 = 0x98
    NSNumber *_packetsOn5GCount;	// 160 = 0xa0
    NSNumber *_infraRelayRequestersCount;	// 168 = 0xa8
    NSNumber *_txExpiredCount;	// 176 = 0xb0
    NSNumber *_txNoACKCount;	// 184 = 0xb8
    NSNumber *_txFailedCount;	// 192 = 0xc0
    NSNumber *_txNoResourcesCount;	// 200 = 0xc8
    NSNumber *_txIOErrorCount;	// 208 = 0xd0
    NSNumber *_txMemoryErrorCount;	// 216 = 0xd8
    NSNumber *_txChipModeErrorCount;	// 224 = 0xe0
    NSNumber *_txNoRemotePeerCount;	// 232 = 0xe8
    NSNumber *_txInternalErrorCount;	// 240 = 0xf0
    NSNumber *_txDroppedCount;	// 248 = 0xf8
    NSNumber *_txFirmwareFreePacketCount;	// 256 = 0x100
    NSNumber *_txMaxRetriesCount;	// 264 = 0x108
    NSNumber *_txForceLifetimeExpiredCount;	// 272 = 0x110
    NSNumber *_channelSequenceMismatchOn5GCount;	// 280 = 0x118
    NSNumber *_channelSequenceMismatchOn2GCount;	// 288 = 0x120
    NSNumber *_infraScanCount;	// 296 = 0x128
    NSNumber *_infraAssocCount;	// 304 = 0x130
    NSNumber *_infraDisassocCount;	// 312 = 0x138
    NSString *_countryCode;	// 320 = 0x140
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003331
- (void).cxx_destruct;	// IMP=0x0000000000006656
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSNumber *infraDisassocCount; // @synthesize infraDisassocCount=_infraDisassocCount;
@property(copy, nonatomic) NSNumber *infraAssocCount; // @synthesize infraAssocCount=_infraAssocCount;
@property(copy, nonatomic) NSNumber *infraScanCount; // @synthesize infraScanCount=_infraScanCount;
@property(copy, nonatomic) NSNumber *channelSequenceMismatchOn2GCount; // @synthesize channelSequenceMismatchOn2GCount=_channelSequenceMismatchOn2GCount;
@property(copy, nonatomic) NSNumber *channelSequenceMismatchOn5GCount; // @synthesize channelSequenceMismatchOn5GCount=_channelSequenceMismatchOn5GCount;
@property(copy, nonatomic) NSNumber *txForceLifetimeExpiredCount; // @synthesize txForceLifetimeExpiredCount=_txForceLifetimeExpiredCount;
@property(copy, nonatomic) NSNumber *txMaxRetriesCount; // @synthesize txMaxRetriesCount=_txMaxRetriesCount;
@property(copy, nonatomic) NSNumber *txFirmwareFreePacketCount; // @synthesize txFirmwareFreePacketCount=_txFirmwareFreePacketCount;
@property(copy, nonatomic) NSNumber *txDroppedCount; // @synthesize txDroppedCount=_txDroppedCount;
@property(copy, nonatomic) NSNumber *txInternalErrorCount; // @synthesize txInternalErrorCount=_txInternalErrorCount;
@property(copy, nonatomic) NSNumber *txNoRemotePeerCount; // @synthesize txNoRemotePeerCount=_txNoRemotePeerCount;
@property(copy, nonatomic) NSNumber *txChipModeErrorCount; // @synthesize txChipModeErrorCount=_txChipModeErrorCount;
@property(copy, nonatomic) NSNumber *txMemoryErrorCount; // @synthesize txMemoryErrorCount=_txMemoryErrorCount;
@property(copy, nonatomic) NSNumber *txIOErrorCount; // @synthesize txIOErrorCount=_txIOErrorCount;
@property(copy, nonatomic) NSNumber *txNoResourcesCount; // @synthesize txNoResourcesCount=_txNoResourcesCount;
@property(copy, nonatomic) NSNumber *txFailedCount; // @synthesize txFailedCount=_txFailedCount;
@property(copy, nonatomic) NSNumber *txNoACKCount; // @synthesize txNoACKCount=_txNoACKCount;
@property(copy, nonatomic) NSNumber *txExpiredCount; // @synthesize txExpiredCount=_txExpiredCount;
@property(copy, nonatomic) NSNumber *infraRelayRequestersCount; // @synthesize infraRelayRequestersCount=_infraRelayRequestersCount;
@property(nonatomic) _Bool infraRelayOperationStatus; // @synthesize infraRelayOperationStatus=_infraRelayOperationStatus;
@property(copy, nonatomic) NSNumber *packetsOn5GCount; // @synthesize packetsOn5GCount=_packetsOn5GCount;
@property(copy, nonatomic) NSNumber *packetsOverridenOn5GCount; // @synthesize packetsOverridenOn5GCount=_packetsOverridenOn5GCount;
@property(copy, nonatomic) NSNumber *packetsHOFOn2GCount; // @synthesize packetsHOFOn2GCount=_packetsHOFOn2GCount;
@property(copy, nonatomic) NSNumber *packetsNAVOn2GCount; // @synthesize packetsNAVOn2GCount=_packetsNAVOn2GCount;
@property(copy, nonatomic) NSNumber *packetsOn2GCount; // @synthesize packetsOn2GCount=_packetsOn2GCount;
@property(copy, nonatomic) NSNumber *txErrorCount; // @synthesize txErrorCount=_txErrorCount;
@property(copy, nonatomic) NSNumber *quietIECount; // @synthesize quietIECount=_quietIECount;
@property(copy, nonatomic) NSNumber *csaCount; // @synthesize csaCount=_csaCount;
@property(copy, nonatomic) NSNumber *dfsChannelsCount; // @synthesize dfsChannelsCount=_dfsChannelsCount;
@property(copy, nonatomic) NSNumber *preferred5GChannelsCount; // @synthesize preferred5GChannelsCount=_preferred5GChannelsCount;
@property(copy, nonatomic) NSNumber *preferred2GChannelsCount; // @synthesize preferred2GChannelsCount=_preferred2GChannelsCount;
@property(copy, nonatomic) NSArray *txPacketExpiryHistogram; // @synthesize txPacketExpiryHistogram=_txPacketExpiryHistogram;
@property(copy, nonatomic) NSArray *txConsecutiveErrorsHistogram; // @synthesize txConsecutiveErrorsHistogram=_txConsecutiveErrorsHistogram;
@property(copy, nonatomic) NSArray *rxIPCDelayHistogram; // @synthesize rxIPCDelayHistogram=_rxIPCDelayHistogram;
@property(copy, nonatomic) NSArray *rxFWDelayHistogram; // @synthesize rxFWDelayHistogram=_rxFWDelayHistogram;
@property(copy, nonatomic) NSArray *rxRSSIHistogram; // @synthesize rxRSSIHistogram=_rxRSSIHistogram;
@property(copy, nonatomic) NSArray *txCCAHistogram; // @synthesize txCCAHistogram=_txCCAHistogram;
@property(readonly, nonatomic) NSNumber *infrastructureChannel; // @synthesize infrastructureChannel=_infrastructureChannel;
@property(readonly, nonatomic) WiFiMACAddress *peerAddress; // @synthesize peerAddress=_peerAddress;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004e67
- (id)description;	// IMP=0x0000000000004b97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000433f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000039f2
- (id)initWithPeerAddress:(id)arg1 infrastructureChannel:(id)arg2 txCCAHistogram:(id)arg3 rxRSSIHistogram:(id)arg4 preferred2GChannelsCount:(id)arg5 preferred5GChannelsCount:(id)arg6 dfsChannelsCount:(id)arg7 csaCount:(id)arg8 quietIECount:(id)arg9 txErrorCount:(id)arg10 packetsOn2GCount:(id)arg11 packetsNAVOn2GCount:(id)arg12 packetsHOFOn2GCount:(id)arg13 packetsOn5GCount:(id)arg14 packetsOverridenOn5GCount:(id)arg15 infraRelayOperationStatus:(_Bool)arg16 infraRelayRequestersCount:(id)arg17 txExpiredCount:(id)arg18 txNoACKCount:(id)arg19 txFailedCount:(id)arg20 txNoResourcesCount:(id)arg21 txIOErrorCount:(id)arg22 txMemoryErrorCount:(id)arg23 txChipModeErrorCount:(id)arg24 txNoRemotePeerCount:(id)arg25 txInternalErrorCount:(id)arg26 txDroppedCount:(id)arg27 txFirmwareFreePacketCount:(id)arg28 txMaxRetriesCount:(id)arg29 txForceLifetimeExpiredCount:(id)arg30 channelSequenceMismatchOn5GCount:(id)arg31 channelSequenceMismatchOn2GCount:(id)arg32 infraScanCount:(id)arg33 infraAssocCount:(id)arg34 infraDisassocCount:(id)arg35 countryCode:(id)arg36 txConsecutiveErrorsHistogram:(id)arg37 rxFWDelayHistogram:(id)arg38 rxIPCDelayHistogram:(id)arg39 txPacketExpiryHistogram:(id)arg40;	// IMP=0x0000000000003339

@end

