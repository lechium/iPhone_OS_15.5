//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFDailyRoutineShortcutSetupQuestionViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFDailyRoutineShortcutSetupTriggerViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFLocationPickerViewControllerDelegate-Protocol.h>

@class CLCircularRegion, NSMutableArray, NSMutableDictionary, NSString, UINavigationController, WFDailyRoutineShortcutSetupFlow;
@protocol WFDailyRoutineShortcutSetupViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate>
{
    id <WFDailyRoutineShortcutSetupViewControllerDelegate> _delegate;	// 8 = 0x8
    WFDailyRoutineShortcutSetupFlow *_flow;	// 16 = 0x10
    UINavigationController *_setupNavigationController;	// 24 = 0x18
    NSMutableDictionary *_actionsPerQuestionIndex;	// 32 = 0x20
    CLCircularRegion *_selectedRegion;	// 40 = 0x28
    NSMutableArray *_setupStepEvents;	// 48 = 0x30
    unsigned long long _metricsSource;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000017f41d
@property(readonly, nonatomic) unsigned long long metricsSource; // @synthesize metricsSource=_metricsSource;
@property(retain, nonatomic) NSMutableArray *setupStepEvents; // @synthesize setupStepEvents=_setupStepEvents;
@property(retain, nonatomic) CLCircularRegion *selectedRegion; // @synthesize selectedRegion=_selectedRegion;
@property(retain, nonatomic) NSMutableDictionary *actionsPerQuestionIndex; // @synthesize actionsPerQuestionIndex=_actionsPerQuestionIndex;
@property(retain, nonatomic) UINavigationController *setupNavigationController; // @synthesize setupNavigationController=_setupNavigationController;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submitMetrics:(_Bool)arg1;	// IMP=0x000000000017f16b
- (id)currentStepEvent;	// IMP=0x000000000017ef9f
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)arg1;	// IMP=0x000000000017ef45
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)arg1;	// IMP=0x000000000017edb6
- (void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)arg1;	// IMP=0x000000000017eceb
- (void)dailyRoutineShortcutSetupQuestionViewController:(id)arg1 didAddActions:(id)arg2;	// IMP=0x000000000017ebfe
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)arg1;	// IMP=0x000000000017eb4b
- (void)locationPickerDidCancel:(id)arg1;	// IMP=0x000000000017eb39
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;	// IMP=0x000000000017e99b
- (void)finishWithTrigger:(id)arg1;	// IMP=0x000000000017e4b3
- (void)didSelectCancel;	// IMP=0x000000000017e458
- (void)configureBackButtonOnViewController:(id)arg1;	// IMP=0x000000000017e399
- (void)pushToNextStep;	// IMP=0x000000000017e265
- (void)pushStepForQuestion:(id)arg1;	// IMP=0x000000000017e1a6
- (void)pushTriggerSetupStep;	// IMP=0x000000000017e0d0
- (long long)currentQuestionIndex;	// IMP=0x000000000017df44
- (void)viewDidLoad;	// IMP=0x000000000017db04
- (id)initWithFlow:(id)arg1 metricsSource:(unsigned long long)arg2;	// IMP=0x000000000017da3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
