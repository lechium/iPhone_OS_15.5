//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFWorkflowReferencing-Protocol.h>

@class NSDictionary, NSError, NSString, WFImage, WFWorkflow;

@interface WFAccessResource <WFWorkflowReferencing>
{
    int _token;	// 8 = 0x8
    WFWorkflow *_workflow;	// 16 = 0x10
}

+ (id)userInterfaceClasses;	// IMP=0x00000000002dc7c2
+ (id)userInterfaceXPCInterface;	// IMP=0x00000000002dc75e
+ (id)userInterfaceProtocol;	// IMP=0x00000000002dc756
+ (_Bool)isSystemResource;	// IMP=0x00000000002dc74e
- (void).cxx_destruct;	// IMP=0x00000000002dc2c9
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (id)localizedAttemptRecoveryFromErrorMessage;	// IMP=0x00000000002dc24e
@property(readonly, nonatomic) NSString *attemptRecoveryFromErrorMessage;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002dc0e6
@property(readonly, nonatomic) NSError *availabilityError;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;	// IMP=0x00000000002dbe6c
- (id)localizedImportErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x00000000002dbe1a
- (id)importErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x00000000002dbd9b
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x00000000002dbd49
- (id)errorReasonForStatus:(unsigned long long)arg1;	// IMP=0x00000000002dbcca
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002dbae5
@property(readonly, nonatomic) unsigned long long status;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dba6b
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002db8df
- (void)refreshAvailability;	// IMP=0x00000000002db85a
- (void)refreshAvailabilityWithNotification:(_Bool)arg1;	// IMP=0x00000000002db518
@property(readonly, nonatomic) NSString *protectedResourceDescription;
@property(readonly, nonatomic) WFImage *icon;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *associatedAppIdentifier;
- (void)dealloc;	// IMP=0x00000000002db2da
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000002db0bb
@property(readonly, nonatomic) NSDictionary *settingsUIDefinition;
- (void)logOut;	// IMP=0x000000000023eb63
@property(readonly, nonatomic) _Bool supportsMultipleAccounts;
@property(readonly, nonatomic) _Bool logOutAffectsOtherApps;
@property(readonly, nonatomic) _Bool canLogOut;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *resourceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

