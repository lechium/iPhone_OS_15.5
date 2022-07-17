//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoProvisionPassForRemoteCredentialWithTypeAndIdentifierRequest : PBRequest <NSCopying>
{
    long long _credentialType;	// 8 = 0x8
    NSString *_credentialIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000121d31
@property(retain, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000121cb7
- (unsigned long long)hash;	// IMP=0x0000000000121c7e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000121bd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000121b4c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000121b13
- (void)writeTo:(id)arg1;	// IMP=0x0000000000121abb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000121aae
- (id)dictionaryRepresentation;	// IMP=0x00000000001217ec
- (id)description;	// IMP=0x000000000012173d
@property(readonly, nonatomic) _Bool hasCredentialIdentifier;

@end
