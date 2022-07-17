//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TFGetImageUploadUrlsResponse : PBCodable
{
    unsigned long long _expiresTimeMillis;	// 8 = 0x8
    NSMutableArray *_uploadUrls;	// 16 = 0x10
    struct {
        unsigned int expiresTimeMillis:1;
    } _has;	// 24 = 0x18
}

+ (Class)uploadUrlsType;	// IMP=0x0020000000040514
- (void).cxx_destruct;	// IMP=0x0020000000041006
@property(nonatomic) unsigned long long expiresTimeMillis; // @synthesize expiresTimeMillis=_expiresTimeMillis;
@property(retain, nonatomic) NSMutableArray *uploadUrls; // @synthesize uploadUrls=_uploadUrls;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000040e59
- (unsigned long long)hash;	// IMP=0x0010000000040e09
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000040d48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000040b54
- (void)copyTo:(id)arg1;	// IMP=0x0010000000040a6d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000040905
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000406da
- (id)dictionaryRepresentation;	// IMP=0x001000000004061a
- (id)description;	// IMP=0x001000000004056b
@property(nonatomic) _Bool hasExpiresTimeMillis;
- (id)uploadUrlsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000404f7
- (unsigned long long)uploadUrlsCount;	// IMP=0x00100000000404da
- (void)addUploadUrls:(id)arg1;	// IMP=0x0010000000040470
- (void)clearUploadUrls;	// IMP=0x0010000000040453

@end
