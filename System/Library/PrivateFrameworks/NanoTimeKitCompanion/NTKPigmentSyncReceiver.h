//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NTKPigmentPersistentStorageController;
@protocol OS_dispatch_queue;

@interface NTKPigmentSyncReceiver : NSObject
{
    _Bool _receivedUpdates;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_privateQueue;	// 16 = 0x10
    NTKPigmentPersistentStorageController *_storageController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012d918
@property(nonatomic) _Bool receivedUpdates; // @synthesize receivedUpdates=_receivedUpdates;
@property(retain, nonatomic) NTKPigmentPersistentStorageController *storageController; // @synthesize storageController=_storageController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void)finishSyncingForDeviceUUID:(id)arg1 success:(_Bool)arg2;	// IMP=0x000000000012d782
- (void)processSyncData:(id)arg1 domain:(id)arg2 deviceUUID:(id)arg3;	// IMP=0x000000000012d546
- (id)init;	// IMP=0x000000000012d4ab

@end
