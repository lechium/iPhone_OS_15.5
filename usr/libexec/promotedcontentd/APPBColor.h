//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBColor : PBCodable
{
    NSMutableArray *_colors;	// 8 = 0x8
    NSMutableArray *_darkModeColors;	// 16 = 0x10
    int _direction;	// 24 = 0x18
}

+ (Class)darkModeColorsType;	// IMP=0x001000000003423c
+ (Class)colorsType;	// IMP=0x001000000003416a
+ (id)stringsToColorArray:(id)arg1;	// IMP=0x001000000008cb8f
- (void).cxx_destruct;	// IMP=0x00200000000350e1
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSMutableArray *darkModeColors; // @synthesize darkModeColors=_darkModeColors;
@property(retain, nonatomic) NSMutableArray *colors; // @synthesize colors=_colors;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000034e27
- (unsigned long long)hash;	// IMP=0x0010000000034dc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000034cec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000349d8
- (void)copyTo:(id)arg1;	// IMP=0x001000000003486a
- (void)writeTo:(id)arg1;	// IMP=0x001000000003463b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003462e
- (id)dictionaryRepresentation;	// IMP=0x00100000000342fc
- (id)description;	// IMP=0x001000000003424d
- (id)darkModeColorsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003421f
- (unsigned long long)darkModeColorsCount;	// IMP=0x0010000000034202
- (void)addDarkModeColors:(id)arg1;	// IMP=0x0010000000034198
- (void)clearDarkModeColors;	// IMP=0x001000000003417b
- (id)colorsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003414d
- (unsigned long long)colorsCount;	// IMP=0x0010000000034130
- (void)addColors:(id)arg1;	// IMP=0x00100000000340c6
- (void)clearColors;	// IMP=0x00100000000340a9

@end
