//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SchoolTime/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SCLPBScheduleSettings : PBCodable <NSCopying>
{
    NSMutableArray *_recurrences;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    _Bool _isEnabled;	// 20 = 0x14
    struct {
        unsigned int version:1;
        unsigned int isEnabled:1;
    } _has;	// 24 = 0x18
}

+ (Class)recurrencesType;	// IMP=0x00000000000068af
- (void).cxx_destruct;	// IMP=0x000000000000771d
@property(retain, nonatomic) NSMutableArray *recurrences; // @synthesize recurrences=_recurrences;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000754a
- (unsigned long long)hash;	// IMP=0x00000000000074e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000073ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000071de
- (void)copyTo:(id)arg1;	// IMP=0x00000000000070de
- (void)writeTo:(id)arg1;	// IMP=0x0000000000006f67
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000006f5a
- (id)dictionaryRepresentation;	// IMP=0x000000000000696f
- (id)description;	// IMP=0x00000000000068c0
- (id)recurrencesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000006892
- (unsigned long long)recurrencesCount;	// IMP=0x0000000000006875
- (void)addRecurrences:(id)arg1;	// IMP=0x000000000000680b
- (void)clearRecurrences;	// IMP=0x00000000000067ee
@property(nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool hasVersion;

@end
