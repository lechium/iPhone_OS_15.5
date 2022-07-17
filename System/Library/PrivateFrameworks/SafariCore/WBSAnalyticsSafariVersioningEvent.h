//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariVersioningEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _variant;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int variant:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000054471
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000543b6
- (unsigned long long)hash;	// IMP=0x000000000005433f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005424e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054199
- (void)copyTo:(id)arg1;	// IMP=0x0000000000054111
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054084
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054077
- (id)dictionaryRepresentation;	// IMP=0x0000000000053c78
- (id)description;	// IMP=0x0000000000053bc9
- (int)StringAsVariant:(id)arg1;	// IMP=0x0000000000053b67
- (id)variantAsString:(int)arg1;	// IMP=0x0000000000053b12
@property(nonatomic) _Bool hasVariant;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasTimestamp;

@end
