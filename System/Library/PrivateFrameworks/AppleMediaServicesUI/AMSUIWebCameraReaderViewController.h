//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>

@class AMSUIWebAppearance, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSDictionary, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIWebCameraReaderViewController <AMSUIWebPagePresenter>
{
    AMSUIWebAppearance *_appearance;	// 8 = 0x8
    UIViewController *_childController;	// 16 = 0x10
    AMSUIWebClientContext *_context;	// 24 = 0x18
    AMSUIWebCameraReaderInfoView *_infoView;	// 32 = 0x20
    AMSUIWebCameraReaderPageModel *_model;	// 40 = 0x28
    AMSUIWebNavigationBarModel *_navigationBarModel;	// 48 = 0x30
    NSDictionary *_output;	// 56 = 0x38
}

+ (_Bool)cameraSupported;	// IMP=0x000000000006551b
- (void).cxx_destruct;	// IMP=0x0000000000066743
@property(retain, nonatomic) NSDictionary *output; // @synthesize output=_output;
@property(retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
@property(retain, nonatomic) AMSUIWebCameraReaderPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewController *childController; // @synthesize childController=_childController;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
- (void)cameraReaderDidEnd:(id)arg1;	// IMP=0x00000000000665f2
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;	// IMP=0x0000000000066537
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000066523
- (void)cameraReaderDidCancel:(id)arg1;	// IMP=0x00000000000664d7
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x00000000000662cb
- (void)_handleCameraOutput:(id)arg1 error:(id)arg2;	// IMP=0x0000000000065f55
- (id)_cameraReader;	// IMP=0x0000000000065f4d
- (void)_applyAppearance;	// IMP=0x0000000000065ded
- (id)_outputForIDCardReaderObjects:(id)arg1;	// IMP=0x0000000000065dd4
- (void)_setupPageForIDCard;	// IMP=0x0000000000065dce
- (id)_outputForGiftCardReaderCode:(id)arg1;	// IMP=0x0000000000065d48
- (id)_outputForGiftCardReaderObjects:(id)arg1;	// IMP=0x0000000000065d40
- (void)_setupPageForGiftCard;	// IMP=0x0000000000065d3a
- (void)_setupPageForCreditCard;	// IMP=0x0000000000065d34
- (id)_outputForCreditCardReaderObjects:(id)arg1;	// IMP=0x0000000000065d1b
- (void)_setCameraToggleButton;	// IMP=0x0000000000065d15
- (void)_setRedeemButton;	// IMP=0x0000000000065d0f
- (void)_setupCameraToggle;	// IMP=0x0000000000065b34
- (void)_setupNavigationModel;	// IMP=0x0000000000065aa7
- (void)_commitNavigationBarModel;	// IMP=0x00000000000659ba
- (void)_layoutTextField;	// IMP=0x00000000000659b4
- (void)_layoutPage;	// IMP=0x00000000000659ae
- (void)_setupTextEntry;	// IMP=0x00000000000659a8
- (void)_setupInfoView;	// IMP=0x0000000000065676
- (void)_setupPage;	// IMP=0x0000000000065578
- (void)_setChild:(id)arg1;	// IMP=0x0000000000065523
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000654ec
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000065366
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000065325
- (void)loadView;	// IMP=0x00000000000652cf
- (void)dealloc;	// IMP=0x0000000000065214
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000065185

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

