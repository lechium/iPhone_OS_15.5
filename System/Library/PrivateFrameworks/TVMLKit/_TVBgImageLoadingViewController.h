//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVAppTemplateController-Protocol.h>

@class IKViewElement, NSString, UIView;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController>
{
    id _imageProxy;	// 8 = 0x8
    _Bool _loaded;	// 16 = 0x10
    UIView *_rightLargeTitleButton;	// 24 = 0x18
    struct {
        _Bool respondsToBackroundImageProxy;
        _Bool respondsToBackgroundImageRequiresBlur;
        _Bool respondsToBackdropNeeded;
        _Bool respondsToImageProxySize;
        _Bool respondsToBlurEffectStyle;
        _Bool respondsToPurgeBgImages;
        _Bool respondsToConfigureBgImageBackdropImage;
        _Bool respondsToShouldLoadBackgroundImageAsynchronously;
    } _bgImageLoadingOptions;	// 32 = 0x20
    _Bool _appliedNavigationItem;	// 40 = 0x28
    IKViewElement *_navigationItemElement;	// 48 = 0x30
}

+ (id)_decorateImage:(id)arg1 decorator:(id)arg2;	// IMP=0x00000000000972bb
- (void).cxx_destruct;	// IMP=0x00000000000990a2
@property(nonatomic) _Bool appliedNavigationItem; // @synthesize appliedNavigationItem=_appliedNavigationItem;
@property(retain, nonatomic) IKViewElement *navigationItemElement; // @synthesize navigationItemElement=_navigationItemElement;
- (id)_stackViewWithMinSpacing:(double)arg1 layoutMargin:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000098fb5
- (void)_updateNavigationItem;	// IMP=0x0000000000097bfc
- (void)_updateNavigationBarPadding;	// IMP=0x000000000009795d
- (void)_reparentNavigationItem:(id)arg1;	// IMP=0x0000000000097551
- (_Bool)_isNewiOSTVApp;	// IMP=0x00000000000974d5
- (long long)_overrideLargeTitleDisplayMode;	// IMP=0x00000000000974cd
- (void)_dismissViewController:(id)arg1;	// IMP=0x0000000000097404
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000973f2
- (void)updateNavigationItem:(id)arg1;	// IMP=0x00000000000973a1
- (void)loadFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000096e54
- (void)configureAppearanceTransition;	// IMP=0x0000000000096992
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000096907
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000009689d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000096861
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000096639
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000096631
- (_Bool)_shouldLoadBackgroundImageAsynchronously;	// IMP=0x0000000000096629
- (long long)_blurEffectStyle;	// IMP=0x0000000000096619
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x0000000000096603
- (_Bool)_isBackdropNeeded;	// IMP=0x00000000000965fb
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x00000000000965f3
- (id)_backgroundImageProxy;	// IMP=0x00000000000965eb
- (void)dealloc;	// IMP=0x00000000000965a2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000009649d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

