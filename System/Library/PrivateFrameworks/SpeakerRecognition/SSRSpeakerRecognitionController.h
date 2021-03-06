//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/SSRSpeakerRecognitionOrchestratorDelegate-Protocol.h>

@class NSDictionary, NSString, SSRSpeakerRecognitionContext, SSRSpeakerRecognitionOrchestrator;
@protocol SSRSpeakerRecognitionControllerDelegate;

@interface SSRSpeakerRecognitionController : NSObject <SSRSpeakerRecognitionOrchestratorDelegate>
{
    SSRSpeakerRecognitionContext *_context;	// 8 = 0x8
    id <SSRSpeakerRecognitionControllerDelegate> _delegate;	// 16 = 0x10
    SSRSpeakerRecognitionOrchestrator *_orchestrator;	// 24 = 0x18
    NSDictionary *_lastScoreCard;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041b86
@property(retain, nonatomic) NSDictionary *lastScoreCard; // @synthesize lastScoreCard=_lastScoreCard;
@property(retain, nonatomic) SSRSpeakerRecognitionOrchestrator *orchestrator; // @synthesize orchestrator=_orchestrator;
@property(nonatomic) __weak id <SSRSpeakerRecognitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSRSpeakerRecognitionContext *context; // @synthesize context=_context;
- (void)voiceRecognitionOrchestratorFinishedProcessing:(id)arg1 withFinalVoiceRecognitionInfo:(id)arg2;	// IMP=0x00000000000418ea
- (void)voiceRecognitionOrchestrator:(id)arg1 hasVoiceRecognitionInfo:(id)arg2;	// IMP=0x0000000000041483
- (id)getLatestSpeakerInfo;	// IMP=0x000000000004146d
- (id)resetWithContext:(id)arg1;	// IMP=0x000000000004144c
- (void)endAudio;	// IMP=0x0000000000041436
- (void)processAudio:(id)arg1 withNumberOfSamples:(unsigned long long)arg2;	// IMP=0x0000000000041420
- (id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000412de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

