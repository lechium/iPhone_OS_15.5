//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKImageElement, IKViewElement, NSArray, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _TVDescriptiveAlertTemplateController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    NSArray *_templateSubviews;	// 16 = 0x10
    NSArray *_templateSubcontrollers;	// 24 = 0x18
    UIView *_preferredFocusView;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    IKImageElement *_bgImageElement;	// 48 = 0x30
    IKImageElement *_bgHeroImageElement;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000745cc
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x000000000007455a
- (long long)_blurEffectStyle;	// IMP=0x000000000007451f
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x00000000000744f8
- (id)_backgroundImageProxy;	// IMP=0x00000000000743db
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x0000000000074377
- (void)_normalizeButtonsInViews:(id)arg1;	// IMP=0x0000000000073f0e
- (void)loadView;	// IMP=0x0000000000073bca
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000007286a

@end

