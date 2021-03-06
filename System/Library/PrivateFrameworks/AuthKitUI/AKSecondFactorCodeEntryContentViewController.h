//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKSecondFactorCodeEntry-Protocol.h>
#import <AuthKitUI/CAAnimationDelegate-Protocol.h>

@class AKAppleIDAuthenticationContext, AKBasicLoginContentViewController, AKCodeEntryView, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry>
{
    AKCodeEntryView *_codeGeneratorView;	// 8 = 0x8
    AKBasicLoginContentViewController *_titleHeaderViewController;	// 16 = 0x10
    AKAppleIDAuthenticationContext *_authenticationContext;	// 24 = 0x18
    NSArray *_activeConstraints;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011ed8
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(retain, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController; // @synthesize titleHeaderViewController=_titleHeaderViewController;
@property(retain, nonatomic) AKCodeEntryView *codeGeneratorView; // @synthesize codeGeneratorView=_codeGeneratorView;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;	// IMP=0x0000000000011dee
- (void)clearSecondFactorEntry;	// IMP=0x0000000000011d69
- (void)jiggleAView;	// IMP=0x0000000000011b3b
@property(readonly, nonatomic) NSString *generatedCode;
@property(copy, nonatomic) NSString *reason;
- (void)_updateFontContstraints:(id)arg1;	// IMP=0x00000000000119de
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000011995
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000118f8
- (void)loadView;	// IMP=0x0000000000011783
- (void)updateViewConstraints;	// IMP=0x00000000000111f8
- (void)_configureCodeGenView;	// IMP=0x0000000000011155
- (void)_configureTitleHeaderView;	// IMP=0x0000000000010ee1
- (void)dealloc;	// IMP=0x0000000000010e5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

