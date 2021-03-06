//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView
{
    EKDayOccurrenceView *_occurrenceView;	// 8 = 0x8
    UIColor *_baseColor;	// 16 = 0x10
    double _radius;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001aa19c
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) __weak EKDayOccurrenceView *occurrenceView; // @synthesize occurrenceView=_occurrenceView;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001a9fee
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000001a9fd5
- (id)initWithFrame:(struct CGRect)arg1 occurrenceView:(id)arg2;	// IMP=0x00000000001a9ee5
- (struct CGRect)_circleRect;	// IMP=0x00000000001a9e82

@end

