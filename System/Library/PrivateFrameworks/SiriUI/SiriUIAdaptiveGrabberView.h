//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@interface SiriUIAdaptiveGrabberView : UIControl
{
    long long _style;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x000000000003322c
@property(nonatomic) long long style; // @synthesize style=_style;
- (id)_bezierPathForStyle:(long long)arg1;	// IMP=0x00000000000334f2
- (void)_setupWithStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000332fd
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000332d5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000332bf
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003329d
- (id)shapeLayer;	// IMP=0x000000000003323d
- (void)_commonInit;	// IMP=0x0000000000033098
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000033007
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000032f91

@end

