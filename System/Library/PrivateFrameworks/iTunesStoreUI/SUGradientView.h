//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SUGradient;

@interface SUGradientView : UIView
{
    struct CGGradient *_cgGradient;	// 8 = 0x8
    SUGradient *_gradient;	// 16 = 0x10
}

@property(copy, nonatomic) SUGradient *gradient; // @synthesize gradient=_gradient;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000c16c8
- (void)dealloc;	// IMP=0x00000000000c1538

@end

