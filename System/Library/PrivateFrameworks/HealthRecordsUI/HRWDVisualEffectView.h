//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface HRWDVisualEffectView : UIVisualEffectView
{
    UIView *_tintView;	// 8 = 0x8
}

+ (id)tintViewWithBlurEffectStyle:(long long)arg1 color:(id)arg2;	// IMP=0x000000000001b80a
+ (id)ultraLightTintView;	// IMP=0x000000000001b78b
- (void).cxx_destruct;	// IMP=0x000000000001ba59
@property(retain, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
- (void)layoutSubviews;	// IMP=0x000000000001b990
- (id)initWithEffect:(id)arg1;	// IMP=0x000000000001b8c5

@end

