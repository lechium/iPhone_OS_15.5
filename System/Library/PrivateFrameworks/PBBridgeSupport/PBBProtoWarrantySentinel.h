//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying>
{
    NSMutableArray *_appleLanguages;	// 8 = 0x8
    NSString *_appleLocale;	// 16 = 0x10
    NSString *_deviceName;	// 24 = 0x18
    _Bool _removeSentinel;	// 32 = 0x20
    _Bool _sentinelExists;	// 33 = 0x21
    struct {
        unsigned int removeSentinel:1;
        unsigned int sentinelExists:1;
    } _has;	// 36 = 0x24
}

+ (Class)appleLanguagesType;	// IMP=0x0000000000014f6b
- (void).cxx_destruct;	// IMP=0x0000000000015f2b
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *appleLocale; // @synthesize appleLocale=_appleLocale;
@property(retain, nonatomic) NSMutableArray *appleLanguages; // @synthesize appleLanguages=_appleLanguages;
@property(nonatomic) _Bool removeSentinel; // @synthesize removeSentinel=_removeSentinel;
@property(nonatomic) _Bool sentinelExists; // @synthesize sentinelExists=_sentinelExists;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000015cac
- (unsigned long long)hash;	// IMP=0x0000000000015bf5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015a7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015809
- (void)copyTo:(id)arg1;	// IMP=0x00000000000156c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015501
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000154f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000015055
- (id)description;	// IMP=0x0000000000014fa6
@property(readonly, nonatomic) _Bool hasDeviceName;
@property(readonly, nonatomic) _Bool hasAppleLocale;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014f4e
- (unsigned long long)appleLanguagesCount;	// IMP=0x0000000000014f31
- (void)addAppleLanguages:(id)arg1;	// IMP=0x0000000000014ec7
- (void)clearAppleLanguages;	// IMP=0x0000000000014eaa
@property(nonatomic) _Bool hasRemoveSentinel;
@property(nonatomic) _Bool hasSentinelExists;

@end

