//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPTokenRegistrationBody;

@interface CKDPTokenUnregistrationRequest : PBRequest <NSCopying>
{
    CKDPTokenRegistrationBody *_tokenRegistrationBody;	// 8 = 0x8
}

+ (id)options;	// IMP=0x000000000023aea0
- (void).cxx_destruct;	// IMP=0x000000000023b422
@property(retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody; // @synthesize tokenRegistrationBody=_tokenRegistrationBody;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023b3a3
- (unsigned long long)hash;	// IMP=0x000000000023b386
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023b2ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023b274
- (void)copyTo:(id)arg1;	// IMP=0x000000000023b24a
- (Class)responseClass;	// IMP=0x000000000023b239
- (unsigned int)requestTypeCode;	// IMP=0x000000000023b22e
- (void)writeTo:(id)arg1;	// IMP=0x000000000023b20a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023b1fd
- (id)dictionaryRepresentation;	// IMP=0x000000000023afb4
- (id)description;	// IMP=0x000000000023af05
@property(readonly, nonatomic) _Bool hasTokenRegistrationBody;

@end
