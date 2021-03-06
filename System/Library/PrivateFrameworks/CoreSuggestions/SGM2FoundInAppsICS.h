//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2FoundInAppsICS : PBCodable <NSCopying>
{
    int _datetime;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    int _timezone;	// 24 = 0x18
    struct {
        unsigned int datetime:1;
        unsigned int timezone:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000144a2
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001440e
- (unsigned long long)hash;	// IMP=0x000000000001439e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000142b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014202
- (void)copyTo:(id)arg1;	// IMP=0x0000000000014182
- (void)writeTo:(id)arg1;	// IMP=0x00000000000140f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000140e7
- (id)dictionaryRepresentation;	// IMP=0x0000000000013f7a
- (id)description;	// IMP=0x0000000000013ecb
- (int)StringAsDatetime:(id)arg1;	// IMP=0x0000000000013e69
- (id)datetimeAsString:(int)arg1;	// IMP=0x0000000000013e14
@property(nonatomic) _Bool hasDatetime;
@property(nonatomic) int datetime; // @synthesize datetime=_datetime;
- (int)StringAsTimezone:(id)arg1;	// IMP=0x0000000000013d1e
- (id)timezoneAsString:(int)arg1;	// IMP=0x0000000000013cb8
@property(nonatomic) _Bool hasTimezone;
@property(nonatomic) int timezone; // @synthesize timezone=_timezone;
@property(readonly, nonatomic) _Bool hasKey;

@end

