//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSectionedLayoutEngineDataSourceSnapshot-Protocol.h>

@class NSArray, NSString;

@interface PXMemoriesFeedDataSource <PXSectionedLayoutEngineDataSourceSnapshot>
{
    NSArray *_entries;	// 8 = 0x8
    struct PXSimpleIndexPath _indexPathForFirstPastMemorySection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000eb69
@property(nonatomic) struct PXSimpleIndexPath indexPathForFirstPastMemorySection; // @synthesize indexPathForFirstPastMemorySection=_indexPathForFirstPastMemorySection;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) NSString *diagnosticDescription;
- (id)inputForItem:(id)arg1;	// IMP=0x000000000000e82e
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;	// IMP=0x000000000000e6cb
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x000000000000e692
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 withHintIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000000df97
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de24
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dcb1
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000da46
- (struct PXSimpleIndexPath)_firstSectionIndexPath;	// IMP=0x000000000000d9cf
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000000d841
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000000d839
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000000d7c0
@property(readonly, nonatomic) long long numberOfSections;
- (id)init;	// IMP=0x000000000000d78a
- (id)initWithEntries:(id)arg1;	// IMP=0x000000000000d6f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long identifier;
@property(readonly) Class superclass;

@end

