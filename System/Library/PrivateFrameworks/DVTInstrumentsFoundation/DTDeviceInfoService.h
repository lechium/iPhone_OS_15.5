//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTDeviceInfoServiceAuthorizedAPI-Protocol.h>

@class DTDSCSymbolicatorCache, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI>
{
    NSMutableDictionary *_peerTrackingSelectorsByPid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_trackingSymbolicatorQueue;	// 16 = 0x10
    struct TFPPidWatcher _dtsecurityPidWatcher;	// 24 = 0x18
    _Bool _expiredPidTrackingEnabled;	// 28 = 0x1c
    DTDSCSymbolicatorCache *_sharedCacheSymbolicators;	// 32 = 0x20
}

+ (_Bool)isApplication:(id)arg1;	// IMP=0x0000000000006513
+ (void)registerCapabilities:(id)arg1;	// IMP=0x00000000000061e7
- (void).cxx_destruct;	// IMP=0x0000000000009fbb
- (id)sysmonCoalitionAttributes;	// IMP=0x0000000000009fb3
- (id)sysmonSystemAttributes;	// IMP=0x0000000000009fab
- (id)sysmonProcessAttributes;	// IMP=0x0000000000009fa3
- (id)kpepDatabase;	// IMP=0x0000000000009f9b
- (id)traceCodesFile;	// IMP=0x0000000000009f93
- (id)networkInformation;	// IMP=0x0000000000009f8b
- (id)_configurationProperties;	// IMP=0x0000000000009e3c
- (id)productVersion;	// IMP=0x0000000000009dd7
- (id)uniqueID;	// IMP=0x0000000000009d3b
- (id)_getIOMFBProperties;	// IMP=0x0000000000009a72
- (id)_lookupInt64Sysctl:(const char *)arg1;	// IMP=0x0000000000009a0f
- (id)_lookupInt32Sysctl:(const char *)arg1;	// IMP=0x00000000000099ae
- (id)lookupSysctl:(const char *)arg1;	// IMP=0x0000000000009925
- (id)hardwareInformation;	// IMP=0x000000000000972b
- (int)hwCPU64BitCapable;	// IMP=0x000000000000971d
- (int)hwCPUtype;	// IMP=0x00000000000096e9
- (int)hwCPUsubtype;	// IMP=0x00000000000096b5
- (int)numberOfCpus;	// IMP=0x00000000000096a0
- (int)numberOfPhysicalCpus;	// IMP=0x0000000000009665
- (id)createSignatureFromLibraryUUID:(id)arg1 sharedCacheUUID:(id)arg2 andPath:(id)arg3;	// IMP=0x000000000000931a
- (id)iconDescriptionForIconPath:(id)arg1;	// IMP=0x0000000000008ea5
- (id)iconDescriptionFileForAppPath:(id)arg1;	// IMP=0x0000000000008459
- (id)directoryListingForPath:(id)arg1;	// IMP=0x00000000000083c7
- (id)symbolicatorSignaturesForExpiredPids;	// IMP=0x0000000000008370
- (void)enableExpiredPidTracking:(id)arg1;	// IMP=0x00000000000082d2
- (void)unregisterSignatureTrackingForPid:(id)arg1;	// IMP=0x0000000000008219
- (id)symbolicatorSignatureForPid:(id)arg1 trackingSelector:(id)arg2;	// IMP=0x0000000000007e80
- (id)deepSymbolOwnerSignatureForPid:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000007c1c
- (id)machKernelName;	// IMP=0x0000000000007ac5
- (id)isRunningPid:(id)arg1;	// IMP=0x0000000000007a23
- (id)execnameForPid:(id)arg1;	// IMP=0x000000000000782b
- (id)nameForGID:(id)arg1;	// IMP=0x0000000000007733
- (id)nameForUID:(id)arg1;	// IMP=0x0000000000007563
- (id)runningProcesses;	// IMP=0x0000000000006ee3
- (id)machTimeInfo;	// IMP=0x0000000000006cdb
- (void)messageReceived:(id)arg1;	// IMP=0x0000000000006954
- (id)initWithChannel:(id)arg1;	// IMP=0x0000000000006608

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

