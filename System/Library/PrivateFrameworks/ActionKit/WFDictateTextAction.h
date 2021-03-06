//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/AFDictationDelegate-Protocol.h>

@class AFDictationConnection, NSString;
@protocol WFDictateTextActionUserInterface;

@interface WFDictateTextAction : WFAction <AFDictationDelegate>
{
    id <WFDictateTextActionUserInterface> _actionUserInterface;	// 8 = 0x8
    AFDictationConnection *_dictationConnection;	// 16 = 0x10
    NSString *_latestTranscription;	// 24 = 0x18
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x0000000000370086
+ (id)userInterfaceProtocol;	// IMP=0x0000000000370075
- (void).cxx_destruct;	// IMP=0x000000000036f4a5
@property(copy, nonatomic) NSString *latestTranscription; // @synthesize latestTranscription=_latestTranscription;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
@property(retain, nonatomic) id <WFDictateTextActionUserInterface> actionUserInterface; // @synthesize actionUserInterface=_actionUserInterface;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000036f3be
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000036f3a5
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x000000000036f27d
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x000000000036ef8e
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x000000000036ede0
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x000000000036ecd2
- (id)recognitionError;	// IMP=0x000000000036ebba
- (void)finishRunningWithError:(id)arg1;	// IMP=0x000000000036ea48
- (void)stopListening;	// IMP=0x000000000036e985
- (void)cancel;	// IMP=0x000000000036e947
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x000000000036e7ae
- (void)runWithRemoteUserInterface:(id)arg1 locale:(id)arg2 stopListeningValue:(id)arg3;	// IMP=0x000000000036e756
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000036e57d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

