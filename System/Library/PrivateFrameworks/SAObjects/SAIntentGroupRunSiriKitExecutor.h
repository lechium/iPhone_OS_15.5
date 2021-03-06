//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SATurnIdContaining-Protocol.h>

@class NSArray, NSString, SAIntentGroupAceBargeInState, SAIntentGroupParse, SAIntentGroupSiriKitAppSelectionState, SAIntentGroupSiriKitListPosition, SAIntentGroupSiriKitMetrics, SAIntentGroupSiriKitRemoteExecution, SAPerson;

@interface SAIntentGroupRunSiriKitExecutor <SATurnIdContaining>
{
}

+ (id)runSiriKitExecutorWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000ca72
+ (id)runSiriKitExecutor;	// IMP=0x000000000000ca60
- (_Bool)mutatingCommand;	// IMP=0x000000000000cdf2
- (_Bool)requiresResponse;	// IMP=0x000000000000cdea
@property(nonatomic) _Bool voiceTriggerEnabled;
@property(copy, nonatomic) NSString *usoVerb;
@property(copy, nonatomic) NSString *userInitiatedAction;
@property(copy, nonatomic) NSString *turnId;
@property(nonatomic) _Bool textToSpeechEnabled;
@property(retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property(copy, nonatomic) NSString *sessionHandOffContinuityID;
@property(nonatomic) _Bool requiresConditionalMultiUserGrounding;
@property(retain, nonatomic) SAIntentGroupSiriKitRemoteExecution *remoteExecution;
@property(retain, nonatomic) SAIntentGroupSiriKitListPosition *readingListPosition;
@property(retain, nonatomic) SAIntentGroupParse *parse;
@property(copy, nonatomic) NSString *parentGoalID;
@property(copy, nonatomic) NSArray *parameterPrompts;
@property(copy, nonatomic) NSArray *parameterMetadata;
@property(nonatomic) _Bool multiUser;
@property(copy, nonatomic) NSString *mode;
@property(copy, nonatomic) NSString *interactionType;
@property(copy, nonatomic) NSString *inputOrigin;
@property(retain, nonatomic) SAPerson *identifiedUserMeCard;
@property(copy, nonatomic) NSString *goalID;
@property(nonatomic) _Bool eyesFree;
@property(nonatomic) _Bool directAction;
@property(copy, nonatomic) NSString *confirmationState;
@property(retain, nonatomic) SAIntentGroupAceBargeInState *bargeInState;
@property(retain, nonatomic) SAIntentGroupSiriKitAppSelectionState *appSelectionState;
- (id)encodedClassName;	// IMP=0x000000000000ca53
- (id)groupIdentifier;	// IMP=0x000000000000ca3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

