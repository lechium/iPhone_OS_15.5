//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveHarvesting/NSCopying-Protocol.h>

@class HVPBContentState, NSString;

@interface HVPBContentStateEntry : PBCodable <NSCopying>
{
    HVPBContentState *_state;	// 8 = 0x8
    NSString *_uniqueId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002b99
@property(retain, nonatomic) HVPBContentState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000002ad5
- (unsigned long long)hash;	// IMP=0x0000000000002a88
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000029c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002922
- (void)copyTo:(id)arg1;	// IMP=0x00000000000028bf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002862
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000002855
- (id)dictionaryRepresentation;	// IMP=0x00000000000027a4
- (id)description;	// IMP=0x00000000000026f5
@property(readonly, nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end

