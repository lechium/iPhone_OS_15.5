//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying>
{
    MPPMediaPredicate *_conditionalPredicate;	// 8 = 0x8
    MPPMediaPredicate *_elsePredicate;	// 16 = 0x10
    MPPMediaPredicate *_thenPredicate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d0db8
@property(retain, nonatomic) MPPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(retain, nonatomic) MPPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(retain, nonatomic) MPPMediaPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
- (unsigned long long)hash;	// IMP=0x00000000000d0cdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d0c01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d0b3d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d0a2e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d089b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d088e
- (id)dictionaryRepresentation;	// IMP=0x00000000000d076d
- (id)description;	// IMP=0x00000000000d06be
@property(readonly, nonatomic) _Bool hasElsePredicate;
@property(readonly, nonatomic) _Bool hasThenPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
- (void)dealloc;	// IMP=0x00000000000d0619

@end

