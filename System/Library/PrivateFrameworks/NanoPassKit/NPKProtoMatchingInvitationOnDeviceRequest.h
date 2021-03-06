//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoMatchingInvitationOnDeviceRequest : PBRequest <NSCopying>
{
    unsigned long long _timeoutInSeconds;	// 8 = 0x8
    NSData *_invitationData;	// 16 = 0x10
    struct {
        unsigned int timeoutInSeconds:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004e6ba
@property(nonatomic) unsigned long long timeoutInSeconds; // @synthesize timeoutInSeconds=_timeoutInSeconds;
@property(retain, nonatomic) NSData *invitationData; // @synthesize invitationData=_invitationData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004e620
- (unsigned long long)hash;	// IMP=0x000000000004e5d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e50f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e476
- (void)copyTo:(id)arg1;	// IMP=0x000000000004e412
- (void)writeTo:(id)arg1;	// IMP=0x000000000004e3ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004e3a0
- (id)dictionaryRepresentation;	// IMP=0x000000000004e0cc
- (id)description;	// IMP=0x000000000004e01d
@property(nonatomic) _Bool hasTimeoutInSeconds;
@property(readonly, nonatomic) _Bool hasInvitationData;

@end

