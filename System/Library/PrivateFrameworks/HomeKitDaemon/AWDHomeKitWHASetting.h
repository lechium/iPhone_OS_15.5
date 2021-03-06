//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitValue, NSString;

@interface AWDHomeKitWHASetting : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    AWDHomeKitValue *_value;	// 24 = 0x18
    CDStruct_b5306035 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000371e49
@property(retain, nonatomic) AWDHomeKitValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000371d53
- (unsigned long long)hash;	// IMP=0x0000000000371cd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000371be1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000371b1f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000371a9b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000371a19
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000371a0c
- (id)dictionaryRepresentation;	// IMP=0x0000000000371901
- (id)description;	// IMP=0x0000000000371852
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKeyPath;
@property(nonatomic) _Bool hasTimestamp;

@end

