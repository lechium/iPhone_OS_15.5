//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPISignedKey : PBCodable <NSCopying>
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000132488
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013243f
- (unsigned long long)hash;	// IMP=0x0000000000132422
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000132388
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000132310
- (void)copyTo:(id)arg1;	// IMP=0x00000000001322e6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001322c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001322b5
- (id)dictionaryRepresentation;	// IMP=0x0000000000132259
- (id)description;	// IMP=0x00000000001321aa
@property(readonly, nonatomic) _Bool hasData;

@end

