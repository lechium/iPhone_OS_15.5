//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitNetworkProtectionReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    CDStruct_b5306035 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004ccfee
- (unsigned long long)hash;	// IMP=0x00000000004ccfc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ccf33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ccecf
- (void)copyTo:(id)arg1;	// IMP=0x00000000004ccea9
- (void)writeTo:(id)arg1;	// IMP=0x00000000004cce7d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004cce70
- (id)dictionaryRepresentation;	// IMP=0x00000000004ccdd7
- (id)description;	// IMP=0x00000000004ccd28
@property(nonatomic) _Bool hasTimestamp;

@end

