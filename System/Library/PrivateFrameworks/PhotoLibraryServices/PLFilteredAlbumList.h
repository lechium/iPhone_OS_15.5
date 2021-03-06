//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumListOrigin-Protocol.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;
@protocol NSObject><NSCopying, PLIndexMappingCache;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin>
{
    PLIndexMapper *_indexMapper;	// 8 = 0x8
    NSMutableIndexSet *_filteredIndexes;	// 16 = 0x10
    NSMutableOrderedSet *_weak_albums;	// 24 = 0x18
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];	// 32 = 0x20
    int filter;	// 72 = 0x48
    PLManagedAlbumList *backingAlbumList;	// 80 = 0x50
    NSPredicate *predicate;	// 88 = 0x58
}

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;	// IMP=0x0000000000351e86
- (void).cxx_destruct;	// IMP=0x0000000000351cb7
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic) int filter; // @synthesize filter;
@property(retain, nonatomic) PLManagedAlbumList *backingAlbumList; // @synthesize backingAlbumList;
- (void)enumerateDerivedAlbumLists:(CDUnknownBlockType)arg1;	// IMP=0x0000000000351c03
- (void)unregisterAllDerivedAlbums;	// IMP=0x0000000000351bd9
- (void)registerDerivedAlbumList:(id)arg1;	// IMP=0x0000000000351abb
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;	// IMP=0x00000000003519e8
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000351941
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;	// IMP=0x000000000035188c
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000003517bc
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000351731
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2;	// IMP=0x000000000035168a
- (id)filteredAlbumsAtIndexes:(id)arg1;	// IMP=0x00000000003515c1
- (id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000351524
- (unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1;	// IMP=0x000000000035142c
- (unsigned long long)countOfFilteredAlbums;	// IMP=0x00000000003513e8
@property(retain, nonatomic) NSMutableOrderedSet *_albums;
- (Class)derivedChangeNotificationClass;	// IMP=0x00000000003513b0
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;	// IMP=0x00000000003510e9
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000351020
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
@property(readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
- (void)_invalidateFilteredIndexes;	// IMP=0x0000000000350d52
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
- (id)managedObjectContext;	// IMP=0x0000000000350b88
- (id)identifier;	// IMP=0x0000000000350b38
- (void)_backingContextDidChange:(id)arg1;	// IMP=0x0000000000350a4a
- (id)containersRelationshipName;	// IMP=0x0000000000350a3d
- (_Bool)canEditContainers;	// IMP=0x0000000000350a2b
- (_Bool)isEmpty;	// IMP=0x0000000000350a16
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;	// IMP=0x00000000003509f2
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (_Bool)hasAtLeastOneAlbum;	// IMP=0x00000000003506e5
@property(readonly, nonatomic) unsigned long long albumsCount;
@property(readonly, nonatomic) NSMutableOrderedSet *albums;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;	// IMP=0x000000000035035a
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;	// IMP=0x00000000003502d4
- (void)updateAlbumsOrderIfNeeded;	// IMP=0x0000000000350297
- (_Bool)needsReordering;	// IMP=0x0000000000350253
- (void)setNeedsReordering;	// IMP=0x0000000000350216
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (_Bool)albumHasFixedOrder:(id)arg1;	// IMP=0x000000000035014f
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool canEditAlbums;
@property(readonly, nonatomic) short albumListType;
- (void)dealloc;	// IMP=0x000000000035002f
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;	// IMP=0x000000000034f578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

