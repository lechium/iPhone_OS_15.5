//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

@interface _TtC8NewsFeed12FormatButton : UIControl
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *onTap;	// 24 = 0x18
    MISSING_TYPE *onLongPress;	// 32 = 0x20
    MISSING_TYPE *isLongPressEnabled;	// 40 = 0x28
    MISSING_TYPE *formatLayoutView;	// 48 = 0x30
    MISSING_TYPE *stateMaskFormatLayoutViews;	// 56 = 0x38
    MISSING_TYPE *longPressGesture;	// 64 = 0x40
    MISSING_TYPE *createMenuElementsBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000001024fb0
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;	// IMP=0x0000000001024cb0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000001024bb0
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x00000000010247d0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000010246d0
- (void)layoutSubviews;	// IMP=0x0000000001024590
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001024500
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001024480

@end
