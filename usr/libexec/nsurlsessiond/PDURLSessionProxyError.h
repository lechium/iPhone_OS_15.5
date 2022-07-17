//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PDURLSessionProxyError : PBCodable
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSData *_userInfo;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    struct {
        unsigned int code:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00200000000549dd
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000548ca
- (unsigned long long)hash;	// IMP=0x001000000005482e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000054708
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005462a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000054582
- (void)writeTo:(id)arg1;	// IMP=0x00100000000544d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000544cb
- (id)dictionaryRepresentation;	// IMP=0x0010000000054387
- (id)description;	// IMP=0x00100000000542d8
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasVersion;
- (id)_actualError;	// IMP=0x001000000003765b
- (id)_initWithActualError:(id)arg1;	// IMP=0x00100000000373ce

@end
