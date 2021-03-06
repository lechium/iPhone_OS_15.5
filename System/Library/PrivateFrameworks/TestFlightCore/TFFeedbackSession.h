//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TestFlightCore/TFDataAggregatorDelegate-Protocol.h>

@class ASDBetaAppLaunchInfo, NSString, NSURL, TFDataAggregator, TFFeedbackDataContainer, TFFeedbackFormViewController;
@protocol TFFeedbackSessionDelegate, TFFeedbackSubmissionService;

@interface TFFeedbackSession : NSObject <TFDataAggregatorDelegate>
{
    _Bool _forcePrefilledEmailViewVariant;	// 8 = 0x8
    _Bool _didSnapshot;	// 9 = 0x9
    _Bool _waitingOnAggregatorForSubmission;	// 10 = 0xa
    unsigned long long _context;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSURL *_bundleURL;	// 32 = 0x20
    ASDBetaAppLaunchInfo *_launchInfo;	// 40 = 0x28
    id <TFFeedbackSessionDelegate> _delegate;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
    unsigned long long _currentPhase;	// 64 = 0x40
    TFFeedbackDataContainer *_dataContainer;	// 72 = 0x48
    TFDataAggregator *_aggregator;	// 80 = 0x50
    id <TFFeedbackSubmissionService> _submissionService;	// 88 = 0x58
    TFFeedbackFormViewController *_activeFormViewController;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000023cf6
@property(nonatomic) __weak TFFeedbackFormViewController *activeFormViewController; // @synthesize activeFormViewController=_activeFormViewController;
@property(readonly, nonatomic) id <TFFeedbackSubmissionService> submissionService; // @synthesize submissionService=_submissionService;
@property(readonly, nonatomic) TFDataAggregator *aggregator; // @synthesize aggregator=_aggregator;
@property(readonly, nonatomic) TFFeedbackDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(nonatomic) unsigned long long currentPhase; // @synthesize currentPhase=_currentPhase;
@property(nonatomic, getter=isWaitingOnAggregatorForSubmission) _Bool waitingOnAggregatorForSubmission; // @synthesize waitingOnAggregatorForSubmission=_waitingOnAggregatorForSubmission;
@property(nonatomic) _Bool didSnapshot; // @synthesize didSnapshot=_didSnapshot;
@property(readonly, copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(nonatomic) _Bool forcePrefilledEmailViewVariant; // @synthesize forcePrefilledEmailViewVariant=_forcePrefilledEmailViewVariant;
@property(nonatomic) __weak id <TFFeedbackSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) ASDBetaAppLaunchInfo *launchInfo; // @synthesize launchInfo=_launchInfo;
@property(readonly, copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
- (id)initForContext:(unsigned long long)arg1 betaApplicationBundleURL:(id)arg2;	// IMP=0x0000000000023b32
- (id)initWithBetaApplicationIdentifier:(id)arg1;	// IMP=0x0000000000023a7f
- (id)_currentContextStringDescription;	// IMP=0x00000000000239fc
- (id)_displayableErrorMessageFromService:(id)arg1 submissionError:(id)arg2;	// IMP=0x00000000000236ea
- (void)dataAggregator:(id)arg1 didCompleteTasks:(id)arg2;	// IMP=0x000000000002362c
- (void)_finishFeedbackSubmissionForViewController:(id)arg1;	// IMP=0x00000000000233a0
- (void)_abortFeedbackSubmissionForViewController:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000022fcd
- (void)_beginFeedbackSubmisionForViewController:(id)arg1;	// IMP=0x000000000002297f
- (id)_generateFormForCurrentState;	// IMP=0x000000000002282b
- (id)_associatePrefilledEmailIfNeeded;	// IMP=0x000000000002258e
- (id)_developerName;	// IMP=0x00000000000223b6
- (void)cancelFeedbackForActiveFormViewController;	// IMP=0x0000000000022112
- (void)submitFeedbackForActiveFormViewController;	// IMP=0x0000000000021e50
- (void)submitCrashFeedback;	// IMP=0x0000000000021c46
- (id)createFeedbackViewControllerForCurrentState;	// IMP=0x000000000002181d
- (void)associateEmail:(id)arg1;	// IMP=0x0000000000021610
- (void)associateComments:(id)arg1;	// IMP=0x00000000000213ee
- (void)associateScreenshotImages:(id)arg1;	// IMP=0x00000000000211e1
- (void)associateIncidentId:(id)arg1;	// IMP=0x0000000000020fbf
- (void)initiateFeedbackSnapshot;	// IMP=0x0000000000020e05
- (void)commonInitWithContext:(unsigned long long)arg1;	// IMP=0x0000000000020d2d
- (id)initForContext:(unsigned long long)arg1 withTestingWithLaunchInfo:(id)arg2;	// IMP=0x0000000000020c05
- (id)initForContext:(unsigned long long)arg1 betaApplicationLoadableBundleURL:(id)arg2;	// IMP=0x0000000000020b00
- (id)initForContext:(unsigned long long)arg1 betaApplicationIdentifier:(id)arg2;	// IMP=0x0000000000020a6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

