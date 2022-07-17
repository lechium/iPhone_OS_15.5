//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInteractionProtocolEvent-Protocol.h>

@class NSString, TIDocumentState, TIKeyboardCandidate, TIKeyboardInput;

@interface TIKeyboardInteractionProtocolEventCandidateAccepted <TIKeyboardInteractionProtocolEvent>
{
    _Bool _predictionBarHit;	// 16 = 0x10
    _Bool _useCandidateSelection;	// 17 = 0x11
    TIKeyboardCandidate *_candWord;	// 24 = 0x18
    TIKeyboardInput *_input;	// 32 = 0x20
    TIDocumentState *_documentState;	// 40 = 0x28
    NSString *_context;	// 48 = 0x30
    NSString *_inputStem;	// 56 = 0x38
    long long _candidateIndex;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029e18
- (void).cxx_destruct;	// IMP=0x0000000000029db4
@property(readonly, nonatomic) long long candidateIndex; // @synthesize candidateIndex=_candidateIndex;
@property(readonly, nonatomic) _Bool useCandidateSelection; // @synthesize useCandidateSelection=_useCandidateSelection;
@property(readonly, nonatomic) _Bool predictionBarHit; // @synthesize predictionBarHit=_predictionBarHit;
@property(readonly, nonatomic) NSString *inputStem; // @synthesize inputStem=_inputStem;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(readonly, nonatomic) TIKeyboardInput *input; // @synthesize input=_input;
@property(readonly, nonatomic) TIKeyboardCandidate *candWord; // @synthesize candWord=_candWord;
@property(readonly, copy) NSString *description;
- (void)sendTo:(id)arg1;	// IMP=0x0000000000029bb4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029938
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029776
- (id)initWithCandidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(_Bool)arg6 useCandidateSelection:(_Bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;	// IMP=0x0000000000029629

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
