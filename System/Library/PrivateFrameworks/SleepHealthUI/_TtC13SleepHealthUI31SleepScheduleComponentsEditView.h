//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC13SleepHealthUI31SleepScheduleComponentsEditView : UIView
{
    MISSING_TYPE *model;	// 3 = 0x3
    MISSING_TYPE *componentsHeader;	// 66 = 0x42
    MISSING_TYPE *clock;	// 0 = 0x0
    MISSING_TYPE *timeInBed;	// 0 = 0x0
    MISSING_TYPE *clockCaption;	// 0 = 0x0
    MISSING_TYPE *clockWidthConstraint;	// 0 = 0x0
    MISSING_TYPE *captionTopConstraint;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_formatter;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000001b7e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b780
- (id)accessibilityTimeInBedLabel;	// IMP=0x000000000001b6b0
- (id)accessibilityClockCaption;	// IMP=0x000000000001b690
- (id)accessibilityClock;	// IMP=0x000000000001b670
- (id)accessibilityComponentsHeader;	// IMP=0x000000000001b650
- (void)clockDidChange:(id)arg1;	// IMP=0x000000000001b1e0
- (void)layoutSubviews;	// IMP=0x0000000000019520
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000190a0
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000018c90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017870

@end
