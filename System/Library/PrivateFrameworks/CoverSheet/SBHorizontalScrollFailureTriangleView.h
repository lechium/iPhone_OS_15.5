//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SBHorizontalScrollFailureTriangleView : UIView
{
    int _style;	// 8 = 0x8
    _Bool _pointingRight;	// 12 = 0xc
    UIColor *_contentColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010ea5f
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000010e701
- (id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(struct CGPoint)arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(_Bool)arg6;	// IMP=0x000000000010e4dc

@end
