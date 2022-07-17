//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class STStorageSpace;
@protocol OS_dispatch_source;

@interface STStorageDiskMonitor : NSObject
{
    long long _deviceSize;	// 8 = 0x8
    long long _updateDelta;	// 16 = 0x10
    STStorageSpace *_storageSpace;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_diskSizeTimer;	// 32 = 0x20
}

+ (id)sharedMonitor;	// IMP=0x000000000001aac0
- (void).cxx_destruct;	// IMP=0x000000000001b105
@property(retain) NSObject<OS_dispatch_source> *diskSizeTimer; // @synthesize diskSizeTimer=_diskSizeTimer;
@property(readonly) STStorageSpace *storageSpace; // @synthesize storageSpace=_storageSpace;
@property(readonly) long long deviceSize; // @synthesize deviceSize=_deviceSize;
- (void)stopMonitor;	// IMP=0x000000000001b031
- (void)startMonitor;	// IMP=0x000000000001aefa
- (void)updateDiskSpace;	// IMP=0x000000000001ae7c
- (void)sync;	// IMP=0x000000000001ada7
- (void)sendNotify:(id)arg1;	// IMP=0x000000000001acaa
- (void)_sendNotify:(id)arg1;	// IMP=0x000000000001ac32
- (id)init;	// IMP=0x000000000001ab15

@end
