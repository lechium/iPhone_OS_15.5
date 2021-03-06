//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView
{
    _Bool _useInPlaceFilteredBlur;	// 8 = 0x8
    UIColor *_baseTintColor;	// 16 = 0x10
}

+ (double)backgroundViewBlurAlphaForProgress:(double)arg1 isDarkBackground:(_Bool)arg2;	// IMP=0x0000000000015980
- (void).cxx_destruct;	// IMP=0x0000000000015a0d
@property(retain) UIColor *baseTintColor; // @synthesize baseTintColor=_baseTintColor;
@property(nonatomic) _Bool useInPlaceFilteredBlur; // @synthesize useInPlaceFilteredBlur=_useInPlaceFilteredBlur;
- (void)updateEffect;	// IMP=0x0000000000015683
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000015604
- (id)init;	// IMP=0x0000000000015553

@end

