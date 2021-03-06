//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableActivityDataPreview, ASCodableShareLocations, NSString;

@interface ASCodableInviteResponse : PBCodable <NSCopying>
{
    ASCodableActivityDataPreview *_activityDataPreview;	// 8 = 0x8
    NSString *_handshakeToken;	// 16 = 0x10
    NSString *_inviteeBuildNumber;	// 24 = 0x18
    NSString *_inviteeCloudKitAddress;	// 32 = 0x20
    ASCodableShareLocations *_inviteeShareLocations;	// 40 = 0x28
    unsigned int _inviteeVersion;	// 48 = 0x30
    int _responseCode;	// 52 = 0x34
    struct {
        unsigned int inviteeVersion:1;
        unsigned int responseCode:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000419a6
@property(retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // @synthesize activityDataPreview=_activityDataPreview;
@property(nonatomic) unsigned int inviteeVersion; // @synthesize inviteeVersion=_inviteeVersion;
@property(retain, nonatomic) NSString *inviteeBuildNumber; // @synthesize inviteeBuildNumber=_inviteeBuildNumber;
@property(retain, nonatomic) ASCodableShareLocations *inviteeShareLocations; // @synthesize inviteeShareLocations=_inviteeShareLocations;
@property(retain, nonatomic) NSString *inviteeCloudKitAddress; // @synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000041798
- (unsigned long long)hash;	// IMP=0x0000000000041698
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000414d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041380
- (void)copyTo:(id)arg1;	// IMP=0x0000000000041279
- (void)writeTo:(id)arg1;	// IMP=0x0000000000041179
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004116c
- (id)dictionaryRepresentation;	// IMP=0x0000000000040b9a
- (id)description;	// IMP=0x0000000000040aeb
@property(readonly, nonatomic) _Bool hasActivityDataPreview;
@property(nonatomic) _Bool hasInviteeVersion;
@property(readonly, nonatomic) _Bool hasInviteeBuildNumber;
@property(readonly, nonatomic) _Bool hasInviteeShareLocations;
@property(readonly, nonatomic) _Bool hasInviteeCloudKitAddress;
@property(nonatomic) _Bool hasResponseCode;
@property(readonly, nonatomic) _Bool hasHandshakeToken;

@end

