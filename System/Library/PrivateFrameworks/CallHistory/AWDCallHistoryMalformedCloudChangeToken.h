//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryMalformedCloudChangeToken : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    CDStruct_b5306035 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003b070
- (unsigned long long)hash;	// IMP=0x000000000003b048
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003afb5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003af51
- (void)copyTo:(id)arg1;	// IMP=0x000000000003af2b
- (void)writeTo:(id)arg1;	// IMP=0x000000000003aeff
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003aef2
- (id)dictionaryRepresentation;	// IMP=0x000000000003ac78
- (id)description;	// IMP=0x000000000003abc9
@property(nonatomic) _Bool hasTimestamp;

@end
