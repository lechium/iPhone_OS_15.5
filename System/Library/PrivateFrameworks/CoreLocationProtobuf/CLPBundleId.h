//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPBundleId : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSString *_fullName;	// 16 = 0x10
    NSString *_shortKey;	// 24 = 0x18
    CDStruct_b5306035 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a4b7
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *shortKey; // @synthesize shortKey=_shortKey;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000a3d4
- (unsigned long long)hash;	// IMP=0x000000000000a270
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a175
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a0b0
- (void)copyTo:(id)arg1;	// IMP=0x000000000000a029
- (void)writeTo:(id)arg1;	// IMP=0x0000000000009fa6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000009f99
- (id)dictionaryRepresentation;	// IMP=0x0000000000009cb1
- (id)description;	// IMP=0x0000000000009c02
@property(readonly, nonatomic) _Bool hasFullName;
@property(readonly, nonatomic) _Bool hasShortKey;
@property(nonatomic) _Bool hasTimestamp;

@end

