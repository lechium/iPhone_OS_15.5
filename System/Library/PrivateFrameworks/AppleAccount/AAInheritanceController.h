//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAFXPCSessionDelegate-Protocol.h>
#import <AppleAccount/AAInheritanceDaemonProtocol-Protocol.h>

@class AAFXPCSession, NSString;

@interface AAInheritanceController : NSObject <AAFXPCSessionDelegate, AAInheritanceDaemonProtocol>
{
    AAFXPCSession *_remoteService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000053c49
@property(retain, nonatomic) AAFXPCSession *remoteService; // @synthesize remoteService=_remoteService;
- (void)configureRemoteInterface:(id)arg1;	// IMP=0x00000000000535c0
- (void)setupBeneficiaryAliasWithAccessKey:(id)arg1 password:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 authToken:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000053009
- (void)presentInheritanceInvitationUIWithBeneficiaryID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052916
- (void)fetchAllHealthInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000522a4
- (void)respondToInvitation:(id)arg1 accepted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000051c70
- (void)removeInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000515f2
- (void)fetchInvitationWithBeneficiaryID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050f59
- (void)fetchInvitationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000508e7
- (void)sendInvitationToContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000501f4
- (void)fetchSuggestedBeneficiariesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fb82
- (void)fetchBenefactorsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f510
- (void)fetchBeneficiariesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ee9e
- (void)updateBeneficiaryManifest:(id)arg1 contactInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e76a
- (void)updateAccessCodeWithRecordIdentifier:(id)arg1 contactInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e037
- (void)removeBenefactor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d995
- (void)removeBeneficiary:(id)arg1 manifest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d2cb
- (void)removeAccessCodeWithRecordIdentifier:(id)arg1 contactInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004cb98
- (void)setupBeneficiaryManifest:(id)arg1 contactInfo:(id)arg2 setupAuthToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004c3a2
- (void)isRecipient:(id)arg1 capableOf:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004bce8
- (void)fetchManifestOptionsForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b603
- (id)init;	// IMP=0x000000000004b542

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

