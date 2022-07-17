//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>

@class NSIndexSet, NSString, PLAssetContainerListChangeNotification, PLFilteredAlbumList, PLIndexMapper;

@interface PLFilteredAlbumListChangeNotification <PLIndexMapperDataSource>
{
    PLFilteredAlbumList *_albumList;	// 8 = 0x8
    NSIndexSet *_oldFilteredIndexes;	// 16 = 0x10
    NSIndexSet *_filteredIndexes;	// 24 = 0x18
    PLIndexMapper *_indexMapper;	// 32 = 0x20
    PLAssetContainerListChangeNotification *_backingNotification;	// 40 = 0x28
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;	// IMP=0x000000000030004c
- (void).cxx_destruct;	// IMP=0x00000000002fffc3
- (id)_changedObjects;	// IMP=0x00000000002fffa6
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;	// IMP=0x00000000002ffdf5
- (id)_diffDescription;	// IMP=0x00000000002ffad0
@property(readonly, copy) NSString *description;
- (_Bool)countDidChange;	// IMP=0x00000000002ff95a
- (_Bool)shouldReload;	// IMP=0x00000000002ff919
- (id)albumList;	// IMP=0x00000000002ff904
- (id)object;	// IMP=0x00000000002ff8ef
- (id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;	// IMP=0x00000000002ff7e8
- (id)init;	// IMP=0x00000000002ff7da
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000300232
@property(copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
