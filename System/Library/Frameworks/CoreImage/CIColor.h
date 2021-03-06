//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class NSString;

@interface CIColor : NSObject <NSSecureCoding, NSCopying>
{
    void *_priv;	// 8 = 0x8
    void *_pad[3];	// 16 = 0x10
}

+ (id)clearColor;	// IMP=0x000000000003e4e9
+ (id)yellowColor;	// IMP=0x000000000003e4d0
+ (id)magentaColor;	// IMP=0x000000000003e4b7
+ (id)cyanColor;	// IMP=0x000000000003e49e
+ (id)blueColor;	// IMP=0x000000000003e485
+ (id)greenColor;	// IMP=0x000000000003e46c
+ (id)redColor;	// IMP=0x000000000003e453
+ (id)grayColor;	// IMP=0x000000000003e43a
+ (id)whiteColor;	// IMP=0x000000000003e421
+ (id)blackColor;	// IMP=0x000000000003e408
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e20e
+ (id)colorWithString:(id)arg1;	// IMP=0x000000000003da28
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000003da0b
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;	// IMP=0x000000000003d9b1
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;	// IMP=0x000000000003d997
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000003d945
+ (id)colorWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000003d916
- (id)debugQuickLookObject;	// IMP=0x000000000003e502
- (id)description;	// IMP=0x000000000003e2c2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003e216
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003e166
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e12d
- (unsigned long long)hash;	// IMP=0x000000000003e0ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e03e
- (struct CGColor *)cgColor;	// IMP=0x000000000003e034
@property(readonly) struct CGColorSpace *colorSpace;
@property(readonly) NSString *stringRepresentation;
@property(readonly) double blue;
@property(readonly) double green;
@property(readonly) double red;
@property(readonly) double alpha;
@property(readonly) const double *components;
@property(readonly) unsigned long long numberOfComponents;
- (struct CGColor *)rgbColor;	// IMP=0x000000000003de3b
- (void)dealloc;	// IMP=0x000000000003ddf8
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;	// IMP=0x000000000003dd0f
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000003dcf2
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000003dc9d
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;	// IMP=0x000000000003dc83
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000003dbd8
- (id)initWithString:(id)arg1;	// IMP=0x000000000003da75
- (id)init;	// IMP=0x000000000003da57

@end

