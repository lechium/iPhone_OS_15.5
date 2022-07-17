//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUI/UICollectionViewDataSource-Protocol.h>
#import <SearchUI/UICollectionViewDelegate-Protocol.h>

@class NSString, SFInfoTuple, SearchUIRowModel, UICollectionView, UICollectionViewDiffableDataSource;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIInfoValueCollectionViewController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isExpanded;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    SFInfoTuple *_tuple;	// 24 = 0x18
    id <SearchUIFeedbackDelegate> _feedbackDelegate;	// 32 = 0x20
    SearchUIRowModel *_rowModel;	// 40 = 0x28
    UICollectionViewDiffableDataSource *_dataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006bd31
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) __weak SearchUIRowModel *rowModel; // @synthesize rowModel=_rowModel;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(retain, nonatomic) SFInfoTuple *tuple; // @synthesize tuple=_tuple;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)_collectionView:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000006bc5a
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000006bb07
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000000006b87c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000006b573
- (_Bool)isShowMoreItemAtIndexPath:(id)arg1;	// IMP=0x000000000006b4d9
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000006b104
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000006b067
- (id)init;	// IMP=0x000000000006ad8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
