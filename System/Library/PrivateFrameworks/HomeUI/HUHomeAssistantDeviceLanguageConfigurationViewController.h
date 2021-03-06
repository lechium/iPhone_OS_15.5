//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class NAFuture, NSArray, NSLayoutConstraint, NSString, NSTimer, OBLinkTrayButton, OBTrayButton, UIActivityIndicatorView;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;	// 8 = 0x8
    OBTrayButton *_changeLanguageButton;	// 16 = 0x10
    OBLinkTrayButton *_cancelButton;	// 24 = 0x18
    NSArray *_supportedVoiceRecognitionLanguages;	// 32 = 0x20
    NSArray *_languageMismatchedHomeAssistantDevices;	// 40 = 0x28
    long long _selectedLanguageIndex;	// 48 = 0x30
    NSLayoutConstraint *_heightAnchor;	// 56 = 0x38
    UIActivityIndicatorView *_spinner;	// 64 = 0x40
    NAFuture *_changeLanguageFuture;	// 72 = 0x48
    NSTimer *_changeLanguageTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000016f22c
@property(retain, nonatomic) NSTimer *changeLanguageTimer; // @synthesize changeLanguageTimer=_changeLanguageTimer;
@property(retain, nonatomic) NAFuture *changeLanguageFuture; // @synthesize changeLanguageFuture=_changeLanguageFuture;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(nonatomic) long long selectedLanguageIndex; // @synthesize selectedLanguageIndex=_selectedLanguageIndex;
@property(retain, nonatomic) NSArray *languageMismatchedHomeAssistantDevices; // @synthesize languageMismatchedHomeAssistantDevices=_languageMismatchedHomeAssistantDevices;
@property(retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages; // @synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages;
@property(retain, nonatomic) OBLinkTrayButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) OBTrayButton *changeLanguageButton; // @synthesize changeLanguageButton=_changeLanguageButton;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000016ef81
- (void)viewDidLoad;	// IMP=0x000000000016e8e1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000016e747
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000016e2be
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000016e279
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000016e268
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;	// IMP=0x000000000016ddd9
- (void)viewDidLayoutSubviews;	// IMP=0x000000000016dcb2
- (void)loadView;	// IMP=0x000000000016d944
- (id)hu_preloadContent;	// IMP=0x000000000016d92b
- (void)_showSpinner;	// IMP=0x000000000016d42f
- (void)_hideSpinner;	// IMP=0x000000000016d30f
- (void)_cancelLanguageChange;	// IMP=0x000000000016d1c3
- (void)_changeLanguage;	// IMP=0x000000000016c164
- (void)dealloc;	// IMP=0x000000000016c0f9
- (id)initWithSupportedVoiceRecognitionLanguages:(id)arg1 languageMismatchedHomeAssistantDevices:(id)arg2;	// IMP=0x000000000016be94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end

