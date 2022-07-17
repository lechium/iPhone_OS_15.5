//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSError, PKCloudStoreZoneInvitation, PKSharingDestination;

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding>
{
    PKCloudStoreZoneInvitation *_invitation;	// 8 = 0x8
    PKSharingDestination *_destination;	// 16 = 0x10
    NSError *_invitationError;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d91e7
+ (id)invitationErrorWithProtobuf:(id)arg1;	// IMP=0x0000000000175668
+ (id)cloudStoreZoneInvitationRequestWithProtobuf:(id)arg1;	// IMP=0x00000000001753d0
- (void).cxx_destruct;	// IMP=0x00000000001d95b4
@property(copy, nonatomic) NSError *invitationError; // @synthesize invitationError=_invitationError;
@property(retain, nonatomic) PKSharingDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) PKCloudStoreZoneInvitation *invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x00000000001d94a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d9406
- (unsigned long long)hash;	// IMP=0x00000000001d9382
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d92ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d91ef
- (id)protobuf;	// IMP=0x00000000001754bb

@end
