//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/VSLogoImageViewModel-Protocol.h>

@class NSItemProvider, NSString, NSURL, UIImage;
@protocol VSOnscreenCodeViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeViewModel <VSLogoImageViewModel>
{
    _Bool _showButtonLockup;	// 8 = 0x8
    NSItemProvider *_logoProvider;	// 16 = 0x10
    UIImage *_logo;	// 24 = 0x18
    NSString *_logoAccessibilityLabel;	// 32 = 0x20
    id <VSOnscreenCodeViewModelDelegate> _delegate;	// 40 = 0x28
    UIImage *_qrCode;	// 48 = 0x30
    NSString *_onscreenCode;	// 56 = 0x38
    NSURL *_webPageURL;	// 64 = 0x40
    NSString *_buttonLockupTitle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000e4be
@property(copy, nonatomic) NSString *buttonLockupTitle; // @synthesize buttonLockupTitle=_buttonLockupTitle;
@property(nonatomic) _Bool showButtonLockup; // @synthesize showButtonLockup=_showButtonLockup;
@property(copy, nonatomic) NSURL *webPageURL; // @synthesize webPageURL=_webPageURL;
@property(copy, nonatomic) NSString *onscreenCode; // @synthesize onscreenCode=_onscreenCode;
@property(retain, nonatomic) UIImage *qrCode; // @synthesize qrCode=_qrCode;
@property(nonatomic) __weak id <VSOnscreenCodeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
- (id)formattedWebsiteURL;	// IMP=0x000000000000e019
- (id)websiteURLWithQueryParameters;	// IMP=0x000000000000db0c
- (void)generateQRCode;	// IMP=0x000000000000db06
- (void)configureWithRequest:(id)arg1;	// IMP=0x000000000000daa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

