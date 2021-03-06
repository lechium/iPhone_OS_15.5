//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface MSASPendingChanges : NSObject
{
    NSMutableSet *_pendingAlbumGUIDsWithKeyValueChanges;	// 8 = 0x8
    NSMutableSet *_pendingAlbumChanges;	// 16 = 0x10
    NSMutableSet *_pendingAlbumGUIDsWithSharingInfoChanges;	// 24 = 0x18
    NSMutableDictionary *_pendingAlbumGUIDToAssetCollections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009c42a
@property(retain, nonatomic) NSMutableDictionary *pendingAlbumGUIDToAssetCollections; // @synthesize pendingAlbumGUIDToAssetCollections=_pendingAlbumGUIDToAssetCollections;
@property(retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithSharingInfoChanges; // @synthesize pendingAlbumGUIDsWithSharingInfoChanges=_pendingAlbumGUIDsWithSharingInfoChanges;
@property(retain, nonatomic) NSMutableSet *pendingAlbumChanges; // @synthesize pendingAlbumChanges=_pendingAlbumChanges;
@property(retain, nonatomic) NSMutableSet *pendingAlbumGUIDsWithKeyValueChanges; // @synthesize pendingAlbumGUIDsWithKeyValueChanges=_pendingAlbumGUIDsWithKeyValueChanges;
- (_Bool)hasPendingChanges;	// IMP=0x000000000009c34f
- (void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1;	// IMP=0x000000000009c29a
- (void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2;	// IMP=0x000000000009c0c8
- (void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2;	// IMP=0x000000000009bf2b
- (void)removePendingChangesForAlbumGUID:(id)arg1;	// IMP=0x000000000009be76
- (void)addPendingChangesForAlbumGUID:(id)arg1;	// IMP=0x000000000009bdc1
- (void)removePendingKeyValueChangesForAlbumGUID:(id)arg1;	// IMP=0x000000000009bd0c
- (id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3;	// IMP=0x000000000009bba9

@end

