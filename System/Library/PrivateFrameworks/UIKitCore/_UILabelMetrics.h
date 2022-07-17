//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSStringDrawingContext, _UILabelConfiguration, _UILabelScaledMetrics, _UILabelSynthesizedContent;

@interface _UILabelMetrics : NSObject <NSCopying, NSSecureCoding>
{
    _UILabelConfiguration *_configuration;	// 8 = 0x8
    NSStringDrawingContext *_stringDrawingContext;	// 16 = 0x10
    struct CGRect _sourceRect;	// 24 = 0x18
    _UILabelSynthesizedContent *_synthesizedContent;	// 56 = 0x38
    _UILabelScaledMetrics *_scaledMetrics;	// 64 = 0x40
    double _firstBaselineOffset;	// 72 = 0x48
    double _lastBaselineOffset;	// 80 = 0x50
    struct CGRect _drawingRect;	// 88 = 0x58
    struct CGRect _bounds;	// 120 = 0x78
    struct CGRect _idealBounds;	// 152 = 0x98
    long long _numberOfLines;	// 184 = 0xb8
    double _scaleFactor;	// 192 = 0xc0
    id _textToUse;	// 200 = 0xc8
    NSDictionary *_attributesToUse;	// 208 = 0xd0
    id _layout;	// 216 = 0xd8
    _UILabelScaledMetrics *_associatedScaledMetrics;	// 224 = 0xe0
    struct {
        unsigned int calculated:1;
        unsigned int contentSynthesized:1;
        unsigned int textToUseIsAttributed:1;
        unsigned int forDrawing:1;
        unsigned int intrinsicMeasurement:1;
    } _metricsFlags;	// 232 = 0xe8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f6401
+ (id)intrinsicMetricsWithConfiguration:(id)arg1;	// IMP=0x00000000000f4337
+ (id)metricsWithConfiguration:(id)arg1;	// IMP=0x00000000000f42ca
- (void).cxx_destruct;	// IMP=0x00000000000f7c7a
@property(readonly, nonatomic) _UILabelConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)description;	// IMP=0x00000000000f7a95
- (void)draw;	// IMP=0x00000000000f787b
- (void)_calculatedSynthesizedContentIfNeeded;	// IMP=0x00000000000f738e
- (void)_calculateScaledMetricsUsingSize:(struct CGSize)arg1;	// IMP=0x00000000000f7220
@property(readonly, nonatomic) _UILabelSynthesizedContent *_synthesizedContent;
- (double)_lineSpacing;	// IMP=0x00000000000f7105
- (id)_synthesizedAttributes;	// IMP=0x00000000000f70d6
- (id)_synthesizedAttributedText;	// IMP=0x00000000000f70a7
- (void)_ensureSynthesizedContent;	// IMP=0x00000000000f6f0e
- (_Bool)_hyphenationPossiblyDisabledIfURLsDetected;	// IMP=0x00000000000f6e57
@property(readonly, nonatomic) NSStringDrawingContext *_stringDrawingContext;
@property(readonly, nonatomic) CDStruct_a0add0ba _intrinsicSizeBaselineInfo;
@property(readonly, nonatomic) struct CGSize _intrinsicBaselineSize;
@property(readonly, nonatomic) struct CGRect intrinsicBounds;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect drawingBounds;
@property(readonly, nonatomic) struct CGRect _sourceRect;
@property(readonly, nonatomic) double _lastLineBaselineOffsetFromTop;
@property(readonly, nonatomic) double lastLineBaselineOffsetFromBottom;
@property(readonly, nonatomic) double firstLineBaselineOffsetFromTop;
@property(readonly, nonatomic) double scaleFactor;
@property(readonly, nonatomic) long long numberOfLines;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f67ef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6409
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f62ce
- (unsigned long long)hash;	// IMP=0x00000000000f6264
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f45bc
- (id)_initWithConfiguration:(id)arg1 sourceRect:(struct CGRect)arg2 synthesizedContent:(id)arg3 associatedScaledMetrics:(id)arg4;	// IMP=0x00000000000f43ff

@end
