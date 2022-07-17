//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController
{
    _Bool _isFamilyAndFriendsConsent;	// 8 = 0x8
    WKWebView *_consentView;	// 16 = 0x10
    id <HUFeedbackConsentViewControllerDelegate> _consentDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000427b8e
@property(retain, nonatomic) id <HUFeedbackConsentViewControllerDelegate> consentDelegate; // @synthesize consentDelegate=_consentDelegate;
@property(nonatomic) _Bool isFamilyAndFriendsConsent; // @synthesize isFamilyAndFriendsConsent=_isFamilyAndFriendsConsent;
@property(retain, nonatomic) WKWebView *consentView; // @synthesize consentView=_consentView;
- (id)consentFormFilePath;	// IMP=0x0000000000427b28
- (void)dealloc;	// IMP=0x0000000000427ab3
- (id)htmlString;	// IMP=0x0000000000427960
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000004277ed
- (void)didDeclineConsent;	// IMP=0x00000000004275f4
- (void)didAcceptConsent;	// IMP=0x0000000000427579
- (void)updateViewConstraints;	// IMP=0x0000000000427101
- (void)viewDidLoad;	// IMP=0x0000000000426dd9
- (void)loadView;	// IMP=0x0000000000426c84
- (id)initWithConsentDelegate:(id)arg1;	// IMP=0x0000000000426c01

@end
