//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAFollowUpProtocol-Protocol.h>

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>
{
}

- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002de98
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d8e8
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d37f
- (_Bool)_shouldPostRenewFollowup:(id)arg1;	// IMP=0x000000000002d306
- (id)_followupActionUserInfo:(id)arg1;	// IMP=0x000000000002d2ed
- (id)_recoveryNotificationWithInfo:(id)arg1 type:(id)arg2;	// IMP=0x000000000002cf18
- (id)_followUpItemForCustodianEmbargo:(id)arg1;	// IMP=0x000000000002cb59
- (id)_followUpItemForBeneficiaryIneligible:(id)arg1;	// IMP=0x000000000002c364
- (id)_followUpItemForBeneficiaryRemoved:(id)arg1;	// IMP=0x000000000002bc89
- (id)_followUpItemForCustodianRemoved:(id)arg1;	// IMP=0x000000000002b5ab
- (id)_followUpItemForCustodianInvitationReminder:(id)arg1;	// IMP=0x000000000002b19c
- (id)_followUpItemForRenewCredentials:(id)arg1;	// IMP=0x000000000002ada0
- (id)_followUpItemForVerifyTerms:(id)arg1;	// IMP=0x000000000002a428
- (id)_followUpItemForStartUsing:(id)arg1;	// IMP=0x0000000000029ea7
- (id)_followUpController;	// IMP=0x0000000000029dd2
- (void)_dismissFollowUpWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f715
- (void)pendingFollowUpsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f159
- (void)dismissFollowUpsForAccount:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ec59
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e709
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e3fd
- (id)followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000002e261
- (id)followUpItemForIdentifier:(id)arg1;	// IMP=0x000000000002e24d

@end
