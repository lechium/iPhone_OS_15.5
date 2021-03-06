//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface PKDiscoveryDismissButton : UIButton
{
    long long _style;	// 8 = 0x8
}

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000252a6a
+ (id)_tintColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000252a34
+ (id)buttonWithStyle:(long long)arg1 primaryAction:(id)arg2;	// IMP=0x0000000000252576
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)_backingEffect;	// IMP=0x0000000000252966
- (id)_tintColor;	// IMP=0x000000000025289b
- (void)_updateStyleWithStyle:(long long)arg1;	// IMP=0x00000000002527a9
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000025275d
- (void)updateStyleWithStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002526bb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002526aa

@end

