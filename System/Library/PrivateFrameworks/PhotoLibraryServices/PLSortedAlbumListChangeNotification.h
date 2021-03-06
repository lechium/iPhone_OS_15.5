//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PLAssetContainerListChangeNotification, PLSortedAlbumList;

@interface PLSortedAlbumListChangeNotification
{
    PLSortedAlbumList *_albumList;	// 8 = 0x8
    PLAssetContainerListChangeNotification *_backingNotification;	// 16 = 0x10
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;	// IMP=0x00000000005094b1
- (void).cxx_destruct;	// IMP=0x0000000000509480
- (id)_changedObjects;	// IMP=0x0000000000509463
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;	// IMP=0x000000000050945b
- (id)description;	// IMP=0x000000000050939c
- (_Bool)countDidChange;	// IMP=0x000000000050937f
- (_Bool)shouldReload;	// IMP=0x0000000000509377
- (id)albumList;	// IMP=0x0000000000509362
- (id)object;	// IMP=0x000000000050934d
- (id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;	// IMP=0x00000000005092ab
- (id)init;	// IMP=0x000000000050929d

@end

