//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TSgPTPClock
{
    NSArray *_gptpPath;	// 8 = 0x8
    unsigned long long _grandmasterIdentity;	// 16 = 0x10
}

+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000ca4d
+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x000000000000c748
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x000000000000c19b
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000008530
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;	// IMP=0x0000000000008446
+ (id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1;	// IMP=0x0000000000008340
+ (id)availablegPTPClockIdentifiers;	// IMP=0x00000000000081c4
- (void).cxx_destruct;	// IMP=0x000000000000cab6
@property(nonatomic) unsigned long long grandmasterIdentity; // @synthesize grandmasterIdentity=_grandmasterIdentity;
@property(copy, nonatomic) NSArray *gptpPath; // @synthesize gptpPath=_gptpPath;
- (void)dealloc;	// IMP=0x000000000000c16c
- (id)portWithPortNumber:(unsigned short)arg1;	// IMP=0x000000000000bf17
@property(readonly, copy, nonatomic) NSArray *ports; // @dynamic ports;
- (id)clockName;	// IMP=0x000000000000bd58
- (_Bool)removeReverseSyncFromInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x000000000000bc3a
- (_Bool)addReverseSyncOnInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 syncInterval:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x000000000000bb17
- (_Bool)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000b9e3
- (_Bool)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;	// IMP=0x000000000000b846
- (_Bool)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000b81e
- (_Bool)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000b6ea
- (_Bool)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;	// IMP=0x000000000000b54d
- (_Bool)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000b525
- (_Bool)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000b3ec
- (_Bool)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;	// IMP=0x000000000000b24a
- (_Bool)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000b222
- (_Bool)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000b0ee
- (_Bool)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;	// IMP=0x000000000000af51
- (_Bool)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000af29
- (_Bool)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000adf5
- (_Bool)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;	// IMP=0x000000000000ac58
- (_Bool)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id *)arg3;	// IMP=0x000000000000ac30
- (_Bool)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000aaf7
- (_Bool)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 allocatedPortNumber:(unsigned short *)arg3 error:(id *)arg4;	// IMP=0x000000000000a955
- (_Bool)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000a92d
- (_Bool)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a859
- (_Bool)addLinkLayerPortOnInterfaceNamed:(id)arg1 allocatedPortNumber:(unsigned short *)arg2 error:(id *)arg3;	// IMP=0x000000000000a725
- (_Bool)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a6fe
@property(readonly, nonatomic) unsigned char clockAccuracy; // @dynamic clockAccuracy;
@property(readonly, nonatomic) unsigned char clockClass; // @dynamic clockClass;
@property(readonly, nonatomic) unsigned char clockPriority2; // @dynamic clockPriority2;
@property(readonly, nonatomic) unsigned char clockPriority1; // @dynamic clockPriority1;
@property(readonly, nonatomic) unsigned long long clockIdentity; // @dynamic clockIdentity;
- (id)_gptpPath;	// IMP=0x000000000000a3d4
- (unsigned long long)_grandmasterIdentity;	// IMP=0x000000000000a34b
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;	// IMP=0x000000000000a05b
- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void *)arg2;	// IMP=0x0000000000009e2f
- (_Bool)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 timeSyncAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 forGrandmasterIdentity:(unsigned long long *)arg5 portNumber:(unsigned short *)arg6 withError:(id *)arg7;	// IMP=0x0000000000009cf0
- (unsigned long long)convertFromDomainTimeToTimeSyncTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x0000000000009bf1
- (unsigned long long)convertFromTimeSyncTimeToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x0000000000009a65
- (unsigned long long)convertFrom128BitgPTPTimeToTimeSyncTime:(CDStruct_4bcfbbae)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x00000000000098d4
- (CDStruct_4bcfbbae)convertFromTimeSyncTimeTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x00000000000097c8
- (unsigned long long)timeSyncTimeFromgPTPTime:(id)arg1;	// IMP=0x00000000000096b6
- (id)gPTPTimeFromTimeSyncTime:(unsigned long long)arg1;	// IMP=0x0000000000009582
- (_Bool)convertFrom32BitASTime:(unsigned int *)arg1 toTimeSyncTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;	// IMP=0x000000000000935b
- (unsigned long long)convertFrom32BitASToTimeSyncTime:(unsigned int)arg1;	// IMP=0x0000000000009297
- (_Bool)getMachAbsoluteRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 machAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 forGrandmasterIdentity:(unsigned long long *)arg5 portNumber:(unsigned short *)arg6 withError:(id *)arg7;	// IMP=0x0000000000009158
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x0000000000009059
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x0000000000008ecd
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2;	// IMP=0x0000000000008ea8
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(CDStruct_4bcfbbae)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x0000000000008d17
- (CDStruct_4bcfbbae)convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long *)arg2 portNumber:(unsigned short *)arg3;	// IMP=0x0000000000008c0b
- (unsigned long long)machAbsoluteFromgPTPTime:(id)arg1;	// IMP=0x0000000000008af9
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1;	// IMP=0x00000000000089c5
- (_Bool)convertFrom32BitASTime:(unsigned int *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;	// IMP=0x000000000000879e
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1;	// IMP=0x00000000000086da
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1 withFlags:(unsigned int *)arg2;	// IMP=0x00000000000086c8
- (id)initWithClockIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000863f

@end

