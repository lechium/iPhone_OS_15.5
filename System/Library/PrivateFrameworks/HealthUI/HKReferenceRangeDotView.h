//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, _HKReferenceRangeDotViewDot;

@interface HKReferenceRangeDotView : UIView
{
    _HKReferenceRangeDotViewDot *_dotView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f5c72
@property(nonatomic) __weak _HKReferenceRangeDotViewDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIColor *dotColor;
- (struct CGRect)desiredDotViewFrame;	// IMP=0x00000000000f5b50
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000f5ab4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f5995

@end
