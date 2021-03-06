//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration
{
    _Bool _canRequestInvitation;	// 16 = 0x10
    _Bool _declineRelatedInvitations;	// 17 = 0x11
    PKAppletSubcredentialSharingInvitation *_invitation;	// 24 = 0x18
    PKPaymentWebService *_remoteDeviceWebService;	// 32 = 0x20
    PKPaymentWebService *_localDeviceWebService;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000026464a
@property(readonly, nonatomic) PKPaymentWebService *localDeviceWebService; // @synthesize localDeviceWebService=_localDeviceWebService;
@property(readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService; // @synthesize remoteDeviceWebService=_remoteDeviceWebService;
@property(readonly, nonatomic) _Bool declineRelatedInvitations; // @synthesize declineRelatedInvitations=_declineRelatedInvitations;
@property(readonly, nonatomic) _Bool canRequestInvitation; // @synthesize canRequestInvitation=_canRequestInvitation;
@property(readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x0000000000264589
- (long long)startingState;	// IMP=0x000000000026456f
- (id)transitionTable;	// IMP=0x0000000000264556
- (id)initWithInvitation:(id)arg1 canRequestInvitation:(_Bool)arg2 declineRelatedInvitations:(_Bool)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 configurationType:(long long)arg6;	// IMP=0x0000000000264477
- (id)initWithInvitation:(id)arg1 canRequestInvitation:(_Bool)arg2 declineRelatedInvitations:(_Bool)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5;	// IMP=0x000000000026445b

@end

