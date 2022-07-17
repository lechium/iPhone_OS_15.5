//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NTKPigmentPersistentStorageController : NSObject
{
    NSObject<OS_dispatch_queue> *_privateQueue;	// 8 = 0x8
    NSString *_rootDirectory;	// 16 = 0x10
}

+ (id)perDeviceFolder;	// IMP=0x0000000000298a2b
+ (id)globalStoresFolder;	// IMP=0x00000000002989d4
+ (id)syncStoresFolder;	// IMP=0x00000000002989c7
+ (id)faceColorRootFolder;	// IMP=0x00000000002989ba
- (void).cxx_destruct;	// IMP=0x0000000000298f6c
- (id)serializeFacePigmentSet:(id)arg1;	// IMP=0x0000000000298eb4
- (id)readSharedCollectionsFromData:(id)arg1;	// IMP=0x0000000000298e39
- (id)readPigmentSetFromData:(id)arg1 sharedCollections:(id)arg2;	// IMP=0x0000000000298d4f
- (_Bool)createFolderIfNeeded:(id)arg1;	// IMP=0x0000000000298bb9
- (id)colorDomainFilePath:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0000000000298b02
- (id)colorSyncFolderPathWithDeviceUUID:(id)arg1;	// IMP=0x0000000000298a82
- (_Bool)createColorSyncFolderIfNeededForDeviceUUID:(id)arg1;	// IMP=0x0000000000298922
- (id)transactionLockerFileNameForDeviceUUID:(id)arg1;	// IMP=0x00000000002988cb
- (id)device;	// IMP=0x0000000000298874
- (void)startTransactionForDeviceUUID:(id)arg1;	// IMP=0x000000000029869e
- (void)deleteContent;	// IMP=0x00000000002984d1
- (void)resetCache;	// IMP=0x00000000002984cb
- (void)closeTransactionForDeviceUUID:(id)arg1;	// IMP=0x0000000000298332
- (void)persistSharedCollectionsData:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0000000000298200
- (void)persistSharedCollections:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x000000000029811d
- (void)persistFacePigmentSet:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0000000000297fa8
- (void)_writeData:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000000297e88
- (void)persistFacePigmentSetData:(id)arg1 domain:(id)arg2 deviceUUID:(id)arg3;	// IMP=0x0000000000297d2f
- (id)_sharedCollections;	// IMP=0x0000000000297b2a
- (id)sharedCollections;	// IMP=0x0000000000297a33
- (id)facePigmentSetForDomain:(id)arg1 sharedCollections:(id)arg2;	// IMP=0x000000000029767d
- (id)initWithRootDirectory:(id)arg1;	// IMP=0x00000000002975ca
- (id)init;	// IMP=0x000000000029756f

@end
