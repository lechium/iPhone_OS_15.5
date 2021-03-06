//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, PLManagedObject;
@protocol PLAlbumProtocol, PLAssetContainer;

@interface PLAssetContainerChangeNotification
{
    _Bool _titleDidChange;	// 8 = 0x8
    _Bool _keyAssetDidChange;	// 9 = 0x9
    NSDictionary *_userInfo;	// 16 = 0x10
}

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;	// IMP=0x00000000002d5576
- (void).cxx_destruct;	// IMP=0x00000000002d5563
- (void)_calculateDiffs;	// IMP=0x00000000002d510d
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;	// IMP=0x00000000002d500d
- (id)_contentRelationshipName;	// IMP=0x00000000002d5000
@property(readonly, nonatomic) id <PLAssetContainer> assetContainer;
- (_Bool)hasDeletes;	// IMP=0x00000000002d4f95
@property(readonly, nonatomic) _Bool keyAssetDidChange;
@property(readonly, nonatomic) _Bool titleDidChange;
@property(readonly, nonatomic) NSObject<PLAlbumProtocol> *album;
@property(readonly, nonatomic) PLManagedObject *container;
- (id)description;	// IMP=0x00000000002d4d47
- (id)userInfo;	// IMP=0x00000000002d4b86
- (id)name;	// IMP=0x00000000002d4b67
- (void)dealloc;	// IMP=0x00000000002d4b1d

@end

