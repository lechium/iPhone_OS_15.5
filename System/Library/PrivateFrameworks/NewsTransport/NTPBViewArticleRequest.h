//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBViewArticleRequest : PBRequest <NSCopying>
{
    NSString *_feedUri;	// 8 = 0x8
    NSString *_storeFrontId;	// 16 = 0x10
    NSString *_webPageUri;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003a25e
@property(retain, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property(retain, nonatomic) NSString *feedUri; // @synthesize feedUri=_feedUri;
@property(retain, nonatomic) NSString *webPageUri; // @synthesize webPageUri=_webPageUri;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003a16c
- (unsigned long long)hash;	// IMP=0x000000000003a0ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a007
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039f43
- (void)writeTo:(id)arg1;	// IMP=0x0000000000039ec9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000039ebc
- (id)dictionaryRepresentation;	// IMP=0x0000000000039c8b
- (id)description;	// IMP=0x0000000000039bdc
@property(readonly, nonatomic) _Bool hasStoreFrontId;
@property(readonly, nonatomic) _Bool hasFeedUri;
@property(readonly, nonatomic) _Bool hasWebPageUri;

@end

