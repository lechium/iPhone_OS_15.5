//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface CLKUIWheelsOfTimeButton : UIButton
{
    struct UIEdgeInsets _touchEdgeInsets;	// 8 = 0x8
}

@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
- (id)_createButtonImage:(struct __CFAttributedString *)arg1;	// IMP=0x0000000000012369
- (void)setButtonText:(id)arg1 selectedFont:(id)arg2 selectedTextColor:(id)arg3 unselectedFont:(id)arg4 unselectedTextColor:(id)arg5 kerning:(double)arg6;	// IMP=0x00000000000121db
- (struct __CFAttributedString *)_newAttributedString:(id)arg1 withFont:(id)arg2 usingKerning:(double)arg3 textColor:(id)arg4;	// IMP=0x0000000000011f80
- (struct CGRect)_getMaxTextBounds;	// IMP=0x0000000000011f26
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000011e96
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000011d95

@end

