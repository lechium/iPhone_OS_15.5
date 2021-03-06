//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitSoftwareUpdateAutomaticUpdateToggled : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    _Bool _isEnabled;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int isEnabled:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000092d9c0
- (unsigned long long)hash;	// IMP=0x000000000092d97a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000092d8b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000092d838
- (void)copyTo:(id)arg1;	// IMP=0x000000000092d7dc
- (void)writeTo:(id)arg1;	// IMP=0x000000000092d769
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000092d75c
- (id)dictionaryRepresentation;	// IMP=0x000000000092d663
- (id)description;	// IMP=0x000000000092d5b4
@property(nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool hasTimestamp;

@end

