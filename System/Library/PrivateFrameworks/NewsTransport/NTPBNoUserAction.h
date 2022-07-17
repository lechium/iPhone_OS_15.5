//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying>
{
    NSMutableArray *_visibleViews;	// 8 = 0x8
}

+ (Class)visibleViewsType;	// IMP=0x00000000000cafa7
- (void).cxx_destruct;	// IMP=0x00000000000cb975
@property(retain, nonatomic) NSMutableArray *visibleViews; // @synthesize visibleViews=_visibleViews;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000cb81b
- (unsigned long long)hash;	// IMP=0x00000000000cb7fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cb764
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb5a1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cb471
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cb464
- (id)dictionaryRepresentation;	// IMP=0x00000000000cb067
- (id)description;	// IMP=0x00000000000cafb8
- (id)visibleViewsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000caf8a
- (unsigned long long)visibleViewsCount;	// IMP=0x00000000000caf6d
- (void)addVisibleViews:(id)arg1;	// IMP=0x00000000000caf03
- (void)clearVisibleViews;	// IMP=0x00000000000caee6

@end
