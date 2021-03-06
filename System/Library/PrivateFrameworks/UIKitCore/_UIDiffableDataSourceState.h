//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UIDiffableDataSourceState-Protocol.h>

@class NSOrderedSet, NSString, NSUUID;
@protocol _UIDataSourceSnapshotTranslating;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying>
{
    NSUUID *_generationID;	// 8 = 0x8
    id <_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;	// 16 = 0x10
    NSOrderedSet *_identifiers;	// 24 = 0x18
    NSOrderedSet *_sections;	// 32 = 0x20
    NSOrderedSet *_guaranteedPerformanceIdentifiers;	// 40 = 0x28
    NSOrderedSet *_guaranteedPerformanceSections;	// 48 = 0x30
    unsigned long long _identifierLookupCount;	// 56 = 0x38
    unsigned long long _sectionLookupCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000011fd7de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011fd645
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011fd5fd
- (id)indexPathForItemIdentifier:(id)arg1;	// IMP=0x00000000011fd5aa
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000000011fd553
- (long long)indexForSectionIdentifier:(id)arg1;	// IMP=0x00000000011fd541
- (id)sectionIdentifierForIndex:(long long)arg1;	// IMP=0x00000000011fd4e3
- (_Bool)containsSectionIdentifier:(id)arg1;	// IMP=0x00000000011fd4c4
- (_Bool)containsItemIdentifier:(id)arg1;	// IMP=0x00000000011fd4a5
- (long long)indexOfSectionIdentifier:(id)arg1;	// IMP=0x00000000011fd405
- (long long)indexOfItemIdentifier:(id)arg1;	// IMP=0x00000000011fd365
- (id)sectionIndexesForItemIndexRange:(struct _NSRange)arg1;	// IMP=0x00000000011fd245
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;	// IMP=0x00000000011fd11d
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000000011fcf56
- (long long)numberOfItemsInSection:(id)arg1;	// IMP=0x00000000011fcea6
- (id)itemIdentifiers;	// IMP=0x00000000011fce90
- (id)sectionIdentifiers;	// IMP=0x00000000011fce7a
- (long long)numberOfSections;	// IMP=0x00000000011fce64
- (long long)numberOfItems;	// IMP=0x00000000011fce4e
@property(readonly, nonatomic) id <_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property(readonly, nonatomic) NSOrderedSet *sections;
@property(readonly, nonatomic) NSOrderedSet *identifiers;
@property(readonly, nonatomic) NSUUID *generationID;
@property(readonly, copy) NSString *description;
- (void)willBecomeWiredToDataSource;	// IMP=0x00000000011fcd8a
@property(readonly, nonatomic) NSOrderedSet *guaranteedPerformanceSections;
@property(readonly, nonatomic) NSOrderedSet *guaranteedPerformanceIdentifiers;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;	// IMP=0x00000000011fccee
- (void)validateIdentifiers;	// IMP=0x00000000011fccc6
- (id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4 identifiersHaveGuaranteedPerformance:(_Bool)arg5 sectionsHaveGuaranteedPerformance:(_Bool)arg6;	// IMP=0x00000000011fc4db
- (id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4;	// IMP=0x00000000011fc4c0
- (id)initWithStateAdvancingGenerationID:(id)arg1;	// IMP=0x00000000011fc37c
- (id)initWithState:(id)arg1;	// IMP=0x00000000011fc23c
- (id)init;	// IMP=0x00000000011fc17c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

