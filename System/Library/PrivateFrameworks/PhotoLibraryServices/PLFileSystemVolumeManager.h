//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLFileSystemVolumeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    NSMutableDictionary *_mountedVolumeURLsByUuid;	// 24 = 0x18
    NSMutableDictionary *_registeredFileSystemVolumesByUuid;	// 32 = 0x20
    NSMapTable *_mocsByVolume;	// 40 = 0x28
}

+ (id)sharedFileSystemVolumeManager;	// IMP=0x00000000000c3f89
- (void).cxx_destruct;	// IMP=0x00000000000c384c
- (void)_updateMountedVolumeURLs;	// IMP=0x00000000000c35af
- (void)_updateOfflineStates;	// IMP=0x00000000000c3092
- (void)unregisterPLFileSystemVolume:(id)arg1;	// IMP=0x00000000000c2f4b
- (void)registerPLFileSystemVolume:(id)arg1;	// IMP=0x00000000000c2cd6
- (id)volumeForURL:(id)arg1 context:(id)arg2;	// IMP=0x00000000000c28b2
- (void)dealloc;	// IMP=0x00000000000c2883
- (id)initSharedVolumeManager;	// IMP=0x00000000000c273d

@end
