//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface TASKEdgeDnsOutput : PBCodable
{
    NSString *_errorMessage;	// 8 = 0x8
    NSMutableArray *_ipv4s;	// 16 = 0x10
    NSMutableArray *_ipv6s;	// 24 = 0x18
    int _status;	// 32 = 0x20
}

+ (Class)ipv6Type;	// IMP=0x0020000000016ec6
+ (Class)ipv4Type;	// IMP=0x0010000000016df4
- (void).cxx_destruct;	// IMP=0x0020000000018326
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSMutableArray *ipv6s; // @synthesize ipv6s=_ipv6s;
@property(retain, nonatomic) NSMutableArray *ipv4s; // @synthesize ipv4s=_ipv4s;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001801f
- (unsigned long long)hash;	// IMP=0x0010000000017f96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017e89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000017b37
- (void)copyTo:(id)arg1;	// IMP=0x00100000000179a6
- (void)writeTo:(id)arg1;	// IMP=0x0010000000017759
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001774c
- (id)dictionaryRepresentation;	// IMP=0x0010000000016f9b
- (id)description;	// IMP=0x0010000000016eec
- (_Bool);	// IMP=0x0010000000016ed7
- (id)ipv6AtIndex:(unsigned long long)arg1;	// IMP=0x0010000000016ea9
- (unsigned long long)ipv6sCount;	// IMP=0x0010000000016e8c
- (void)addIpv6:(id)arg1;	// IMP=0x0010000000016e22
- (void)clearIpv6s;	// IMP=0x0010000000016e05
- (id)ipv4AtIndex:(unsigned long long)arg1;	// IMP=0x0010000000016dd7
- (unsigned long long)ipv4sCount;	// IMP=0x0010000000016dba
- (void)addIpv4:(id)arg1;	// IMP=0x0010000000016d50
- (void)clearIpv4s;	// IMP=0x0010000000016d33
- (int)StringAsStatus:(id)arg1;	// IMP=0x0010000000016c68
- (id)statusAsString:(int)arg1;	// IMP=0x0010000000016bdc

// Remaining properties
@property(readonly, nonatomic) _Bool hasErrorMessage;

@end
