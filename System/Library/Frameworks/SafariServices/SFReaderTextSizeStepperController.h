//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFSettingsAlertStepperController-Protocol.h>

@class NSString;
@protocol SFReaderContext;

@interface SFReaderTextSizeStepperController : NSObject <_SFSettingsAlertStepperController>
{
    id <SFReaderContext> _readerContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014f947
- (void)_updateStepperControls:(id)arg1;	// IMP=0x000000000014f8c4
- (void)decrementValue:(id)arg1;	// IMP=0x000000000014f865
- (void)incrementValue:(id)arg1;	// IMP=0x000000000014f806
- (void)prepareStepper:(id)arg1;	// IMP=0x000000000014f735
- (id)initWithReaderContext:(id)arg1;	// IMP=0x000000000014f6b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

