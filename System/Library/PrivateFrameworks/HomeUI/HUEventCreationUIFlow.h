//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUEventUIFlowPresentationController-Protocol.h>

@class NSString, UINavigationController;

@interface HUEventCreationUIFlow <HUEventUIFlowPresentationController>
{
    _Bool _modalInPresentation;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ceada
@property(nonatomic) _Bool modalInPresentation; // @synthesize modalInPresentation=_modalInPresentation;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (id)_initialStepForEventType:(unsigned long long)arg1;	// IMP=0x00000000001cea4c
- (id)_summaryStepForEventType:(unsigned long long)arg1;	// IMP=0x00000000001cea25
- (id)_emptyConfigurationInitialStep;	// IMP=0x00000000001cea11
- (id)_viewControllerForStep:(id)arg1;	// IMP=0x00000000001ce95e
- (void)transitionToViewController:(id)arg1;	// IMP=0x00000000001ce8eb
- (_Bool)characteristicServicePickerViewControllerAllowChangingCharacteristic:(id)arg1;	// IMP=0x00000000001ce8e3
- (void)setupNavigationController;	// IMP=0x00000000001ce6e9
- (id)presentationController;	// IMP=0x00000000001ce6e0
- (id)initWithTriggerBuilder:(id)arg1 eventBuilderItem:(id)arg2;	// IMP=0x00000000001ce6a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

