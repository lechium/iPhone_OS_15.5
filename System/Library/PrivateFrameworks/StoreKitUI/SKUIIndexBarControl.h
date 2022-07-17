//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSDictionary, NSIndexPath, NSMapTable, SKUIIndexBarEntry;
@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;

@interface SKUIIndexBarControl : UIControl
{
    SKUIIndexBarEntry *_combinedEntry;	// 8 = 0x8
    _Bool _didSendPastBottom;	// 16 = 0x10
    _Bool _didSendPastTop;	// 17 = 0x11
    NSArray *_displayEntries;	// 24 = 0x18
    _Bool _hasValidCombinedEntry;	// 32 = 0x20
    _Bool _hasValidDisplayEntries;	// 33 = 0x21
    _Bool _hasValidNumberOfSections;	// 34 = 0x22
    _Bool _hasValidTotalEntryCount;	// 35 = 0x23
    _Bool _hasValidTotalSize;	// 36 = 0x24
    NSMapTable *_indexPathToEntryMapTable;	// 40 = 0x28
    NSIndexPath *_lastSelectedIndexPath;	// 48 = 0x30
    double _lineSpacing;	// 56 = 0x38
    long long _numberOfSections;	// 64 = 0x40
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;	// 72 = 0x48
    long long _totalEntryCount;	// 80 = 0x50
    struct CGSize _totalSize;	// 88 = 0x58
    CDStruct_2ba00048 _dataSourceDelegateFlags;	// 104 = 0x68
    id <SKUIIndexBarControlDataSource> _dataSource;	// 112 = 0x70
    NSDictionary *_defaultTextAttributes;	// 120 = 0x78
    id <SKUIIndexBarControlDelegate> _delegate;	// 128 = 0x80
    struct UIEdgeInsets _contentEdgeInsets;	// 136 = 0x88
    struct UIEdgeInsets _hitTestEdgeInsets;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000001b23fb
@property(nonatomic) __weak id <SKUIIndexBarControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(nonatomic) __weak id <SKUIIndexBarControlDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (struct CGRect)_visibleBounds;	// IMP=0x00000000001b2054
- (struct CGSize)_totalSize;	// IMP=0x00000000001b1e38
- (long long)_totalEntryCount;	// IMP=0x00000000001b1d58
- (struct CGSize)_sizeForEntryAtIndexPath:(id)arg1;	// IMP=0x00000000001b1cfe
- (struct CGSize)_sizeForEntries:(id)arg1;	// IMP=0x00000000001b1b7c
- (void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b1736
- (_Bool)_reloadLineSpacing;	// IMP=0x00000000001b1692
- (long long)_numberOfSections;	// IMP=0x00000000001b1604
- (void)_invalidateForChangedLayoutProperties;	// IMP=0x00000000001b15d6
- (void)_invalidateDisplayEntries;	// IMP=0x00000000001b1593
- (id)_entryAtIndexPath:(id)arg1;	// IMP=0x00000000001b1481
- (id)_displayEntriesThatFitInViewForGroupedEntries;	// IMP=0x00000000001b1211
- (id)_displayEntries;	// IMP=0x00000000001b09cf
- (void)_configureNewEntry:(id)arg1;	// IMP=0x00000000001b0920
- (id)_combinedEntry;	// IMP=0x00000000001b0833
- (long long)_numberOfEntriesInSection:(long long)arg1;	// IMP=0x00000000001b070d
- (void)_enumerateEntryIndexPathsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b05fd
- (id)_allRequiredEntries;	// IMP=0x00000000001b0450
- (id)_allEntries;	// IMP=0x00000000001b0296
- (void)reloadSections:(id)arg1;	// IMP=0x00000000001afe5c
- (void)reloadEntryAtIndexPath:(id)arg1;	// IMP=0x00000000001afdad
- (void)reloadData;	// IMP=0x00000000001afd0f
- (void)reloadCombinedEntry;	// IMP=0x00000000001afcbf
- (long long)numberOfEntriesInSection:(long long)arg1;	// IMP=0x00000000001afcad
@property(readonly, nonatomic) long long numberOfSections;
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x00000000001af7a9
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001af6ee
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001af65f
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001af5d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001af4ee
- (void)tintColorDidChange;	// IMP=0x00000000001af332
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001af2d9
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000001af1e8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001af134
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000001af080
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001aeff0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001aeca2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001aec4d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001aeb11

@end
