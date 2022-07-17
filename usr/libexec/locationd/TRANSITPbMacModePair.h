//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TRANSITPbMacModePair : PBCodable
{
    double _mode;	// 8 = 0x8
    NSString *_mac;	// 16 = 0x10
    CDStruct_ad4540a6 _has;	// 24 = 0x18
}

@property(nonatomic) double mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000931562
- (unsigned long long)hash;	// IMP=0x0010000000931428
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000931394
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009312f8
- (void)copyTo:(id)arg1;	// IMP=0x00100000009312a2
- (void)writeTo:(id)arg1;	// IMP=0x0010000000931249
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000093123c
- (id)dictionaryRepresentation;	// IMP=0x0010000000930fb1
- (id)description;	// IMP=0x0010000000930f3a
@property(nonatomic) _Bool hasMode;
@property(readonly, nonatomic) _Bool hasMac;
- (void)dealloc;	// IMP=0x0010000000930e9e

@end
