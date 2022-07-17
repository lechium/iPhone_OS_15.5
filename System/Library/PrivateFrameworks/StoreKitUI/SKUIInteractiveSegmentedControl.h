//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface SKUIInteractiveSegmentedControl : UIControl
{
    NSMutableArray *_dividerViews;	// 8 = 0x8
    CDUnknownBlockType _dividerCreationBlock;	// 16 = 0x10
    double _dividerWidth;	// 24 = 0x18
    NSArray *_segments;	// 32 = 0x20
    double _selectionProgress;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000017f658
@property(nonatomic) double selectionProgress; // @synthesize selectionProgress=_selectionProgress;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) double dividerWidth; // @synthesize dividerWidth=_dividerWidth;
@property(copy, nonatomic) CDUnknownBlockType dividerCreationBlock; // @synthesize dividerCreationBlock=_dividerCreationBlock;
- (void)_unregisterForObservationOfSegment:(id)arg1;	// IMP=0x000000000017f5e3
- (_Bool)_setSelectionProgress:(double)arg1;	// IMP=0x000000000017f58c
- (void)_registerForObservationOfSegment:(id)arg1;	// IMP=0x000000000017f55d
- (void)_notifyClientsOfSelectionProgressChange;	// IMP=0x000000000017f546
- (id)_createDividerViewWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017f47e
- (void)_applySelectionProgressToSegments;	// IMP=0x000000000017f3af
- (void)_segmentControlTouchUpInsideAction:(id)arg1;	// IMP=0x000000000017f31c
- (long long)selectedSegmentIndexForSelectionProgress:(double)arg1;	// IMP=0x000000000017f280
- (double)selectionProgressForSelectedSegmentAtIndex:(long long)arg1;	// IMP=0x000000000017f210
- (double)selectionProgressForRelativeSectionProgress:(double)arg1 segmentIndex:(long long)arg2;	// IMP=0x000000000017f173
- (double)relativeSelectionProgressForSelectionProgress:(double)arg1 segmentIndex:(long long)arg2;	// IMP=0x000000000017f0d4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000017e6b4
- (void)layoutSubviews;	// IMP=0x000000000017daf9
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000017d790
- (void)dealloc;	// IMP=0x000000000017d63a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017d5e0

@end
