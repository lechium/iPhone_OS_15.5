//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/HUCalendarScrubberDataSourceChangeObserver-Protocol.h>

@class HUCalendarScrubberDataSource, NSString;
@protocol HUCalendarScrubberViewDelegate;

@interface HUCalendarScrubberViewController : UICollectionViewController <HUCalendarScrubberDataSourceChangeObserver>
{
    HUCalendarScrubberDataSource *_dataSource;	// 8 = 0x8
    id <HUCalendarScrubberViewDelegate> _scrubberDelegate;	// 16 = 0x10
    long long _currentSection;	// 24 = 0x18
    CDUnknownBlockType _scrollCompletionBlock;	// 32 = 0x20
    double _lastBoundsWidth;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000034af9
@property(nonatomic) double lastBoundsWidth; // @synthesize lastBoundsWidth=_lastBoundsWidth;
@property(copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) __weak id <HUCalendarScrubberViewDelegate> scrubberDelegate; // @synthesize scrubberDelegate=_scrubberDelegate;
@property(retain, nonatomic) HUCalendarScrubberDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)scrubberDataSourceDidReload:(id)arg1;	// IMP=0x0000000000034a02
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000003497a
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000003479a
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000034722
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000003462f
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000345ba
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000034462
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000034457
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000034413
- (void)jumpToSection:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034203
@property(readonly, nonatomic) unsigned long long previousSection;
@property(readonly, nonatomic) unsigned long long nextSection;
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000034107
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000033ea1
- (void)viewDidLoad;	// IMP=0x0000000000033d2e
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0000000000033c79
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000033bc4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033b0f
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000000339fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
