//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject
{
    void *_line;	// 8 = 0x8
    NSATSTypesetter *_typesetter;	// 16 = 0x10
    struct _NSRange _glyphRange;	// 24 = 0x18
    struct _NSRange _characterRange;	// 40 = 0x28
    double _minPosition;	// 56 = 0x38
    double _maxPosition;	// 64 = 0x40
    long long _elasticCharIndex;	// 72 = 0x48
    double _elasticRangeWidth;	// 80 = 0x50
    unsigned int _hyphenGlyph;	// 88 = 0x58
    double _hyphenGlyphWidth;	// 96 = 0x60
    struct {
        unsigned int _directionState:2;
        unsigned int _drawsOutside:1;
        unsigned int _standaloneAttachment:1;
        unsigned int _wrappedByCluster:1;
        unsigned int _reserved:27;
    } _flags;	// 104 = 0x68
}

- (void)finalize;	// IMP=0x000000000003eff7
- (void)dealloc;	// IMP=0x000000000003efc1

@end

