//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOKConnection, NSMutableArray, TSClock;

@interface TSClockManager : NSObject
{
    IOKConnection *_connection;	// 8 = 0x8
    NSMutableArray *_clockPersonalities;	// 16 = 0x10
    struct mach_timebase_info _timebaseInfo;	// 24 = 0x18
    _Bool _timeSyncTimeIsMachAbsoluteTime;	// 32 = 0x20
    unsigned long long _timeSyncTimeClockIdentifier;	// 40 = 0x28
    unsigned long long _translationClockIdentifier;	// 48 = 0x30
    TSClock *_timeSyncClock;	// 56 = 0x38
    TSClock *_translationClock;	// 64 = 0x40
}

+ (id)diagnosticInfoForClockService:(id)arg1;	// IMP=0x0000000000010736
+ (id)diagnosticDescriptionForClockService:(id)arg1 withIndent:(id)arg2;	// IMP=0x00000000000102e8
+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x0000000000010058
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x000000000000fe1f
+ (id)defaultClockPersonalities;	// IMP=0x000000000000ece8
+ (id)clockManager;	// IMP=0x000000000000ec9c
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1;	// IMP=0x000000000000eb64
+ (id)sharedClockManager;	// IMP=0x000000000000ea62
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000ea3d
+ (void)notifyWhenClockManagerIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e5bb
- (void).cxx_destruct;	// IMP=0x0000000000010b5f
@property(readonly, nonatomic) TSClock *translationClock; // @synthesize translationClock=_translationClock;
@property(readonly, nonatomic) TSClock *timeSyncClock; // @synthesize timeSyncClock=_timeSyncClock;
@property(readonly, nonatomic) _Bool timeSyncTimeIsMachAbsoluteTime; // @synthesize timeSyncTimeIsMachAbsoluteTime=_timeSyncTimeIsMachAbsoluteTime;
@property(readonly, nonatomic) unsigned long long translationClockIdentifier; // @synthesize translationClockIdentifier=_translationClockIdentifier;
@property(readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier; // @synthesize timeSyncTimeClockIdentifier=_timeSyncTimeClockIdentifier;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)arg1;	// IMP=0x000000000000fdd7
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1;	// IMP=0x000000000000fdc5
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)arg1;	// IMP=0x000000000000fd7d
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1;	// IMP=0x000000000000fd6b
- (_Bool)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000fcff
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000000fc6a
- (id)clockWithClockIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000f7ac
- (id)availableClockIdentifiers;	// IMP=0x000000000000f6ef
- (_Bool)removeTSNCaptureServicesWithError:(id *)arg1;	// IMP=0x000000000000f6b2
- (_Bool)addTSNCaptureServicesWithError:(id *)arg1;	// IMP=0x000000000000f675
- (_Bool)removegPTPServicesWithError:(id *)arg1;	// IMP=0x000000000000f638
- (_Bool)addgPTPServicesWithError:(id *)arg1;	// IMP=0x000000000000f5fb
- (_Bool)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000f58f
- (_Bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int *)arg2 error:(id *)arg3;	// IMP=0x000000000000f507
- (_Bool)releaseDynamicClockID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000f49b
- (_Bool)nextAvailableDynamicClockID:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000000f41b
- (_Bool)getTimeSyncTimeIsMachAbsolute:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000000f393
- (_Bool)getTimeSyncTimeClockID:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000000f30f
- (void)removeClockPersonality:(id)arg1;	// IMP=0x000000000000f2f8
- (void)addClockPersonality:(id)arg1;	// IMP=0x000000000000f2e1
- (id)init;	// IMP=0x000000000000ef8b

@end
