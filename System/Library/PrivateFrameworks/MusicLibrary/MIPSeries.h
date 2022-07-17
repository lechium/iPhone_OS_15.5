//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSString;

@interface MIPSeries : PBCodable <NSCopying>
{
    long long _storeId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_sortName;	// 24 = 0x18
    struct {
        unsigned int storeId:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000cf326
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000cf247
- (unsigned long long)hash;	// IMP=0x00000000000cf1ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cf0d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cf013
- (void)copyTo:(id)arg1;	// IMP=0x00000000000cef8f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cef0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cef00
- (id)dictionaryRepresentation;	// IMP=0x00000000000cee1a
- (id)description;	// IMP=0x00000000000ced6b
@property(readonly, nonatomic) _Bool hasSortName;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasStoreId;

@end
