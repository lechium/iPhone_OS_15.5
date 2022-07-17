//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoCanAcceptInvitationRequest : PBRequest <NSCopying>
{
    NSData *_invitationData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000020027
@property(retain, nonatomic) NSData *invitationData; // @synthesize invitationData=_invitationData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ffde
- (unsigned long long)hash;	// IMP=0x000000000001ffc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ff27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001feaf
- (void)copyTo:(id)arg1;	// IMP=0x000000000001fe85
- (void)writeTo:(id)arg1;	// IMP=0x000000000001fe61
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001fe54
- (id)dictionaryRepresentation;	// IMP=0x000000000001fc86
- (id)description;	// IMP=0x000000000001fbd7
@property(readonly, nonatomic) _Bool hasInvitationData;

@end
