//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying>
{
    unsigned long long _itemsPerRow;	// 8 = 0x8
    unsigned long long _row;	// 16 = 0x10
    unsigned long long _sectionIndex;	// 24 = 0x18
    unsigned long long _timestamp;	// 32 = 0x20
    int _displayContext;	// 40 = 0x28
    int _section;	// 44 = 0x2c
    int _type;	// 48 = 0x30
    struct {
        unsigned int itemsPerRow:1;
        unsigned int row:1;
        unsigned int sectionIndex:1;
        unsigned int timestamp:1;
        unsigned int displayContext:1;
        unsigned int section:1;
        unsigned int type:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003d601
- (unsigned long long)hash;	// IMP=0x000000000003d52e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d3b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d2b4
- (void)copyTo:(id)arg1;	// IMP=0x000000000003d1d5
- (void)writeTo:(id)arg1;	// IMP=0x000000000003d0c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003d0b8
- (id)dictionaryRepresentation;	// IMP=0x000000000003c811
- (id)description;	// IMP=0x000000000003c762
- (int)StringAsSection:(id)arg1;	// IMP=0x000000000003c6d0
- (id)sectionAsString:(int)arg1;	// IMP=0x000000000003c66a
@property(nonatomic) _Bool hasSection;
@property(nonatomic) int section; // @synthesize section=_section;
- (int)StringAsDisplayContext:(id)arg1;	// IMP=0x000000000003c59e
- (id)displayContextAsString:(int)arg1;	// IMP=0x000000000003c549
@property(nonatomic) _Bool hasDisplayContext;
@property(nonatomic) int displayContext; // @synthesize displayContext=_displayContext;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000003c430
- (id)typeAsString:(int)arg1;	// IMP=0x000000000003c3b2
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasSectionIndex;
@property(nonatomic) _Bool hasItemsPerRow;
@property(nonatomic) _Bool hasRow;
@property(nonatomic) _Bool hasTimestamp;

@end

