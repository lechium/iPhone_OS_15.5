//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBSetupAssistantSupport-Protocol.h>

@class NSString, OBPrivacyLinkController, UIActivityIndicatorView, UILabel, UIScrollView, UIView;

@interface OBSetupAssistantSpinnerController <OBSetupAssistantSupport>
{
    _Bool _activityIndicatorHidden;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLinkController;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    UIView *_scrollContentView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000034121
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(nonatomic, getter=isActivityIndicatorHidden) _Bool activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
- (_Bool)_shouldUseScrollView;	// IMP=0x0000000000033efa
- (long long)_activityIndicatorViewStyle;	// IMP=0x0000000000033ed9
- (void)_updateLayout;	// IMP=0x00000000000328f2
- (void)_updateTextColor;	// IMP=0x0000000000032861
- (id)_textStyle;	// IMP=0x000000000003284d
- (void)updateDirectionalLayoutMargins;	// IMP=0x000000000003269b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003249e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000032434
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000323b6
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000031a59
- (void)loadView;	// IMP=0x0000000000031982
- (id)initWithSpinnerText:(id)arg1;	// IMP=0x0000000000031811

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
