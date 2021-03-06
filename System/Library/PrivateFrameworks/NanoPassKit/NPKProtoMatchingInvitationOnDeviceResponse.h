//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoMatchingInvitationOnDeviceResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_invitationData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000730b4
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *invitationData; // @synthesize invitationData=_invitationData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000073007
- (unsigned long long)hash;	// IMP=0x0000000000072fba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000072ef2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000072e54
- (void)copyTo:(id)arg1;	// IMP=0x0000000000072df1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000072d94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000072d87
- (id)dictionaryRepresentation;	// IMP=0x0000000000072b70
- (id)description;	// IMP=0x0000000000072ac1
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasInvitationData;

@end

