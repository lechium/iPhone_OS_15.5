//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSettingsAlertStepperController-Protocol.h>

@class NSNumberFormatter, NSString, WBSPageZoomPreferenceManager;
@protocol _SFBrowserDocument, _SFSettingsAlertStepperConfiguration;

@interface SFPageZoomStepperController : NSObject <_SFSettingsAlertStepperController>
{
    WBSPageZoomPreferenceManager *_preferenceManager;	// 8 = 0x8
    id <_SFBrowserDocument> _tab;	// 16 = 0x10
    NSNumberFormatter *_percentFormatter;	// 24 = 0x18
    id <_SFSettingsAlertStepperConfiguration> _stepper;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003b76f
- (void)_pageZoomChanged:(id)arg1;	// IMP=0x000000000003b573
- (void)_updateButtonsEnabledOnMainQueueWithZoomFactor:(double)arg1;	// IMP=0x000000000003b322
- (void)_updateButtonsEnabledWithZoomFactor:(double)arg1;	// IMP=0x000000000003b296
- (id)longestTextForButton:(long long)arg1;	// IMP=0x000000000003b207
- (void)resetValue:(id)arg1;	// IMP=0x000000000003b073
- (void)decrementValue:(id)arg1;	// IMP=0x000000000003af5a
- (void)incrementValue:(id)arg1;	// IMP=0x000000000003ae41
- (void)prepareStepper:(id)arg1;	// IMP=0x000000000003acab
- (void)dealloc;	// IMP=0x000000000003ac36
- (id)initWithDocument:(id)arg1 preferenceManager:(id)arg2;	// IMP=0x000000000003ab10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

