//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying>
{
    NSString *_viewId;	// 8 = 0x8
    int _viewType;	// 16 = 0x10
    CDStruct_372a990c _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000224077
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000223fef
- (unsigned long long)hash;	// IMP=0x0000000000223fa2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000223edd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000223e4d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000223de9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000223ddc
- (id)dictionaryRepresentation;	// IMP=0x0000000000223a63
- (id)description;	// IMP=0x00000000002239b4
@property(readonly, nonatomic) _Bool hasViewId;
- (int)StringAsViewType:(id)arg1;	// IMP=0x000000000022382c
- (id)viewTypeAsString:(int)arg1;	// IMP=0x0000000000223760
@property(nonatomic) _Bool hasViewType;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;

@end
