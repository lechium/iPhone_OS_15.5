//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSSerializedKey : PBCodable
{
    NSData *_key;	// 8 = 0x8
    NSString *_keyclass;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000027b25
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *keyclass; // @synthesize keyclass=_keyclass;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000279ee
- (unsigned long long)hash;	// IMP=0x001000000002796a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002783e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000027754
- (void)copyTo:(id)arg1;	// IMP=0x00100000000276b3
- (void)writeTo:(id)arg1;	// IMP=0x0010000000027624
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000027454
- (id)dictionaryRepresentation;	// IMP=0x0010000000027383
- (id)description;	// IMP=0x00100000000272d4

@end

