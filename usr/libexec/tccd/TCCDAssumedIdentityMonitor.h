//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TCCDAssumedIdentityMonitor : NSObject
{
    NSString *_stateFilePath;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_assumedIdentityIdentifiersToProcesses;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004b324
- (id)monitoredProcessesAssumingIdentityWithIdentifier:(id)arg1;	// IMP=0x001000000004b1bc
- (void)stopMonitoringProcess:(id)arg1;	// IMP=0x001000000004adef
- (void)startMonitoringProcess:(id)arg1 assumingIdentity:(id)arg2;	// IMP=0x001000000004ab93
- (void)_createOSStateHandler;	// IMP=0x001000000004a9f4
- (id)_osStateDump;	// IMP=0x001000000004a544
- (void)_saveState;	// IMP=0x001000000004a479
- (void)_loadState;	// IMP=0x0010000000049c46
- (id)_serializeState;	// IMP=0x001000000004982c
- (id)initWithStateDirectoryPath:(id)arg1;	// IMP=0x001000000004972a

@end

