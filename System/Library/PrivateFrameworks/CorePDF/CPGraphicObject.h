//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPChunk, CPParagraph, CPTextLine;
@protocol CPGraphicUser;

__attribute__((visibility("hidden")))
@interface CPGraphicObject
{
    unsigned int clipIndex;	// 96 = 0x60
    struct CGRect renderedBounds;	// 104 = 0x68
    _Bool isInZoneBorder;	// 136 = 0x88
    int zoneGraphicType;	// 140 = 0x8c
    CPTextLine *anchoringTextLine;	// 144 = 0x90
    CPParagraph *anchoringParagraph;	// 152 = 0x98
    CPChunk<CPGraphicUser> *user;	// 160 = 0xa0
}

@property(retain, nonatomic) CPParagraph *anchoringParagraph; // @synthesize anchoringParagraph;
@property(nonatomic) unsigned int clipIndex; // @synthesize clipIndex;
- (id)user;	// IMP=0x000000000000b8e1
- (void)setUser:(id)arg1;	// IMP=0x000000000000b8a0
- (id)anchoringTextLine;	// IMP=0x000000000000b88f
- (void)setAnchoringTextLine:(id)arg1;	// IMP=0x000000000000b87e
- (void)setZoneGraphicType:(int)arg1;	// IMP=0x000000000000b86e
- (int)zoneGraphicType;	// IMP=0x000000000000b85e
- (void)setIsInZoneBorder:(_Bool)arg1;	// IMP=0x000000000000b84e
- (_Bool)isInZoneBorder;	// IMP=0x000000000000b83e
- (_Bool)isIndivisible;	// IMP=0x000000000000b836
- (_Bool)isVisible;	// IMP=0x000000000000b82e
- (_Bool)canBeContainer;	// IMP=0x000000000000b7cf
- (_Bool)isNarrow;	// IMP=0x000000000000b732
- (unsigned short)unicode;	// IMP=0x000000000000b72a
- (struct CGRect)renderedBounds;	// IMP=0x000000000000b69c
- (void)dealloc;	// IMP=0x000000000000b64e
- (id)init;	// IMP=0x000000000000b5e3

@end

