//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItemCollection, MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource
{
    NSArray *_entities;	// 8 = 0x8
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;	// 16 = 0x10
    _Bool _hasValidEmpty;	// 24 = 0x18
    _Bool _hasValidRepresentativeCollection;	// 25 = 0x19
    _Bool _invalidateWhenEnteringForeground;	// 26 = 0x1a
    _Bool _isEmpty;	// 27 = 0x1b
    MPMediaItemCollection *_representativeCollection;	// 32 = 0x20
    MPMediaQuerySectionInfo *_sectionInfo;	// 40 = 0x28
    _Bool _ignoringInvalidationDueToBackgroundApplicationState;	// 48 = 0x30
    MPMediaQuery *_query;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001217e
@property(nonatomic) _Bool ignoringInvalidationDueToBackgroundApplicationState; // @synthesize ignoringInvalidationDueToBackgroundApplicationState=_ignoringInvalidationDueToBackgroundApplicationState;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (id)_sectionInfo;	// IMP=0x00000000000120df
- (void)_invalidateForDisplayValuesChangeIfNeeded;	// IMP=0x0000000000012061
- (_Bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out _Bool *)arg2;	// IMP=0x0000000000011ce0
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;	// IMP=0x0000000000011cce
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;	// IMP=0x0000000000011cbc
- (void)_mediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000000011caa
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;	// IMP=0x0000000000011c98
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000000011c2c
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000011c15
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000011c01
- (id)_representativeCollection;	// IMP=0x0000000000011b9b
- (void)_invalidateIfNeeded;	// IMP=0x0000000000011b59
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;	// IMP=0x0000000000011a99
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;	// IMP=0x00000000000119b6
- (_Bool)showsEntityCountFooter;	// IMP=0x00000000000119ae
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000118d4
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011881
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000117da
- (id)localizedSectionIndexTitles;	// IMP=0x000000000001178a
- (unsigned long long)numberOfSections;	// IMP=0x00000000000116e8
- (_Bool)showsIndexBar;	// IMP=0x00000000000116a8
- (_Bool)isEmpty;	// IMP=0x0000000000011604
- (void)_invalidateCalculatedEntities;	// IMP=0x0000000000011575
- (id)queryForEntityAtIndexPath:(id)arg1;	// IMP=0x0000000000011544
- (id)queryForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011408
- (id)entities;	// IMP=0x000000000001136e
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001106b
- (void)deleteEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010e93
- (unsigned long long)count;	// IMP=0x0000000000010e28
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010b9b
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010b26
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000109f5
- (unsigned long long)hash;	// IMP=0x000000000001095a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001088a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010763
- (void)dealloc;	// IMP=0x000000000001065d
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;	// IMP=0x00000000000104ea
- (id)initWithEntityType:(long long)arg1;	// IMP=0x00000000000104d3

@end

