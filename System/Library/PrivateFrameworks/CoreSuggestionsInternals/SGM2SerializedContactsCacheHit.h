//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2SerializedContactsCacheHit : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    _Bool _cacheHit;	// 16 = 0x10
    CDStruct_fbc31351 _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000029428
@property(nonatomic) _Bool cacheHit; // @synthesize cacheHit=_cacheHit;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000293a1
- (unsigned long long)hash;	// IMP=0x000000000002934e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002927d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000291e5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000029182
- (void)writeTo:(id)arg1;	// IMP=0x000000000002911d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000029110
- (id)dictionaryRepresentation;	// IMP=0x0000000000029050
- (id)description;	// IMP=0x0000000000028fa1
@property(nonatomic) _Bool hasCacheHit;
@property(readonly, nonatomic) _Bool hasKey;

@end

