//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>

@class CLKFont, NSDictionary;

@interface CLKTextProviderStyle : NSObject <NSCopying>
{
    _Bool _uppercase;	// 8 = 0x8
    _Bool _shouldEmbedTintColors;	// 9 = 0x9
    _Bool _shouldStyleForTritium;	// 10 = 0xa
    CLKFont *_font;	// 16 = 0x10
    CLKFont *_monospacedDigitsFont;	// 24 = 0x18
    CLKFont *_smallCapsBaseFont;	// 32 = 0x20
    NSDictionary *_otherAttributes;	// 40 = 0x28
    double _minimumScaleFactor;	// 48 = 0x30
}

+ (id)otherAttributesWithParagraphStyle:(id)arg1;	// IMP=0x0000000000051277
+ (id)otherAttributesWithParagraphStyle:(id)arg1 kerning:(double)arg2;	// IMP=0x0000000000051193
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(_Bool)arg3 otherAttributes:(id)arg4;	// IMP=0x000000000005116e
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(_Bool)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5;	// IMP=0x000000000005114c
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(_Bool)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(_Bool)arg6;	// IMP=0x0000000000051053
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(_Bool)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(_Bool)arg6 shouldStyleForTritium:(_Bool)arg7;	// IMP=0x0000000000050fff
- (void).cxx_destruct;	// IMP=0x00000000000515d3
@property(nonatomic) _Bool shouldStyleForTritium; // @synthesize shouldStyleForTritium=_shouldStyleForTritium;
@property(nonatomic) _Bool shouldEmbedTintColors; // @synthesize shouldEmbedTintColors=_shouldEmbedTintColors;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(retain, nonatomic) NSDictionary *otherAttributes; // @synthesize otherAttributes=_otherAttributes;
@property(nonatomic) _Bool uppercase; // @synthesize uppercase=_uppercase;
@property(retain, nonatomic) CLKFont *smallCapsBaseFont; // @synthesize smallCapsBaseFont=_smallCapsBaseFont;
@property(retain, nonatomic) CLKFont *monospacedDigitsFont; // @synthesize monospacedDigitsFont=_monospacedDigitsFont;
@property(retain, nonatomic) CLKFont *font; // @synthesize font=_font;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051477
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000513ad
- (unsigned long long)hash;	// IMP=0x00000000000512c0

@end

