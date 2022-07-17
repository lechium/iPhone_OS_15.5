//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_attributes;	// 8 = 0x8
    id _reserved1;	// 16 = 0x10
    id _reserved2;	// 24 = 0x18
    id _reserved3;	// 32 = 0x20
    id _reserved4;	// 40 = 0x28
    id _reserved5;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008765b
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;	// IMP=0x0000000000086d7a
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;	// IMP=0x000000000008682b
+ (id)fontDescriptorWithFontAttributes:(id)arg1;	// IMP=0x00000000000867fc
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000867b2
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1;	// IMP=0x0000000000086785
+ (id)_preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 design:(id)arg3 weight:(double)arg4 compatibleWithTraitCollection:(id)arg5;	// IMP=0x0000000000086700
+ (id)_preferredFontDescriptorWithTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3 compatibleWithTraitCollection:(id)arg4;	// IMP=0x0000000000086681
+ (id)_preferredFontDescriptorWithTextStyle:(id)arg1 design:(id)arg2 weight:(double)arg3;	// IMP=0x0000000000086637
+ (id)_preferredFontDescriptorWithTextStyle:(id)arg1 weight:(double)arg2;	// IMP=0x00000000000865f7
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000865a8
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000086559
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1;	// IMP=0x0000000000086518
+ (id)_createMungledDictionary:(id)arg1;	// IMP=0x0000000000086140
- (id)description;	// IMP=0x0000000000087600
- (id)_visibleName;	// IMP=0x00000000000875e3
- (id)fontDescriptorWithDesign:(id)arg1;	// IMP=0x00000000000873c5
- (id)fontDescriptorWithFamily:(id)arg1;	// IMP=0x00000000000872b0
- (id)fontDescriptorWithFace:(id)arg1;	// IMP=0x00000000000871ca
- (id)fontDescriptorWithSize:(double)arg1;	// IMP=0x000000000008716b
@property(readonly, nonatomic) struct CGAffineTransform matrix;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform)arg1;	// IMP=0x0000000000087122
- (id)_NSAffineTransform;	// IMP=0x0000000000087024
- (struct CGAffineTransform)_matrix;	// IMP=0x0000000000086fd0
- (id)_fontDescriptorWithMatrix:(struct CGAffineTransform)arg1;	// IMP=0x0000000000086f67
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1;	// IMP=0x0000000000086f50
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x0000000000086f32
- (id)fontDescriptorByAddingAttributes:(id)arg1;	// IMP=0x0000000000086e90
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;	// IMP=0x0000000000086e88
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;	// IMP=0x0000000000086e7b
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000086e65
@property(readonly, nonatomic) unsigned int symbolicTraits;
@property(readonly, nonatomic) double pointSize;
@property(readonly, nonatomic) NSString *postscriptName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086b8c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086915
- (Class)classForCoder;	// IMP=0x0000000000086904
- (id)_attributes;	// IMP=0x00000000000868ee
@property(readonly, nonatomic) NSDictionary *fontAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086331
- (void)dealloc;	// IMP=0x00000000000862f6
- (id)init;	// IMP=0x00000000000862be
- (id)initWithFontAttributes:(id)arg1;	// IMP=0x00000000000862aa
- (id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000086254

@end
