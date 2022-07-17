//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class NSString, PKEducationPhone, PKWatchDeviceImageOverlayView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKBarcodePaymentOnboardingViewController <UITextViewDelegate, PKExplanationViewControllerDelegate>
{
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;	// 8 = 0x8
    NSString *_issuerName;	// 16 = 0x10
    PKEducationPhone *_educationPhone;	// 24 = 0x18
    PKWatchDeviceImageOverlayView *_watchView;	// 32 = 0x20
    CDUnknownBlockType _continueHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000018782
@property(copy, nonatomic) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
- (id)_imageForWatchView;	// IMP=0x00000000000186e5
- (void)_terminateSetupFlow;	// IMP=0x0000000000018608
- (void)explanationViewControllerDidSelectDone:(id)arg1;	// IMP=0x00000000000185f6
- (void)explanationViewControllerDidSelectCancel:(id)arg1;	// IMP=0x00000000000185e4
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000001839a
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000182b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000181ee
- (void)viewDidLoad;	// IMP=0x0000000000017b09
- (id)initWithIssuerName:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;	// IMP=0x0000000000017a4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
