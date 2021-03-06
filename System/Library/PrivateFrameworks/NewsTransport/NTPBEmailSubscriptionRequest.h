//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying>
{
    long long _dsId;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    NSString *_userStorefrontId;	// 24 = 0x18
    struct {
        unsigned int dsId:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005d7b2
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(nonatomic) long long dsId; // @synthesize dsId=_dsId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005d6d3
- (unsigned long long)hash;	// IMP=0x000000000005d656
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d561
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d49f
- (void)writeTo:(id)arg1;	// IMP=0x000000000005d41d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005d410
- (id)dictionaryRepresentation;	// IMP=0x000000000005d0f4
- (id)description;	// IMP=0x000000000005d045
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
@property(nonatomic) _Bool hasDsId;

@end

