//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariEnterTwoUpEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _method;	// 16 = 0x10
    CDStruct_64f0786c _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f613
- (unsigned long long)hash;	// IMP=0x000000000001f5cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f51a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f49b
- (void)copyTo:(id)arg1;	// IMP=0x000000000001f43f
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f3cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f3c0
- (id)dictionaryRepresentation;	// IMP=0x000000000001efca
- (id)description;	// IMP=0x000000000001ef1b
- (int)StringAsMethod:(id)arg1;	// IMP=0x000000000001ee04
- (id)methodAsString:(int)arg1;	// IMP=0x000000000001ed5e
@property(nonatomic) _Bool hasMethod;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) _Bool hasTimestamp;

@end

