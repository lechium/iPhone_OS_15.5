//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIAlertControllerGradientView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShadowedScrollView
{
    _UIAlertControllerGradientView *_shadowView;	// 8 = 0x8
    _Bool _shouldPinToBottomOnResize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000064d05
@property(nonatomic) _Bool shouldPinToBottomOnResize; // @synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize;
- (void)_updateScrollabilityAndShadow;	// IMP=0x00000000000647b9
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x0000000000064778
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000646ce
- (struct CGRect)_boundsForPinningToBottomWithNewBounds:(struct CGRect)arg1;	// IMP=0x00000000000645fd

@end
