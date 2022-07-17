//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCloudStoreZoneInvitation, PKSharingDestination;

@interface PDCloudStoreShareInvitationAcceptKeysRequest
{
    PKCloudStoreZoneInvitation *_invitation;	// 48 = 0x30
    PKSharingDestination *_fromDestination;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000136cfe
@property(readonly, nonatomic) PKSharingDestination *fromDestination; // @synthesize fromDestination=_fromDestination;
@property(readonly, nonatomic) PKCloudStoreZoneInvitation *invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x0010000000136b9b
- (_Bool)canCoalesceRequest:(id)arg1;	// IMP=0x00100000001368c9
- (id)initWithInvitation:(id)arg1 fromDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013681d

@end
