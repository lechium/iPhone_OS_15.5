//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>
#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@class NSArray, NSLock, NSMutableArray;

@interface SUGradient : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableArray *_colorStops;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    struct SUGradientPoint _p0;	// 24 = 0x18
    struct SUGradientPoint _p1;	// 48 = 0x30
    _Bool _sorted;	// 72 = 0x48
    long long _type;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d7893
+ (id)gradientWithColor:(id)arg1;	// IMP=0x00000000000d75cb
- (id)description;	// IMP=0x00000000000d84a6
@property(readonly) struct SUGradientPoint p1;
@property(readonly) struct SUGradientPoint p0;
@property(readonly) long long numberOfColorStops;
- (id)newPatternColorWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2;	// IMP=0x00000000000d8241
@property(readonly) long long gradientType;
- (struct CGShading *)copyShading;	// IMP=0x00000000000d7ea5
- (struct CGGradient *)copyCGGradient;	// IMP=0x00000000000d7d4c
@property(readonly) NSArray *colorStopOffsets;
@property(readonly) NSArray *colorStopColors;
- (void)addColorStopWithOffset:(double)arg1 color:(struct CGColor *)arg2;	// IMP=0x00000000000d7946
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d789b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d77aa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d7628
- (void)dealloc;	// IMP=0x00000000000d7581
- (id)initWithType:(long long)arg1;	// IMP=0x00000000000d74b7
- (id)initWithPropertyList:(id)arg1;	// IMP=0x00000000000d72cb
- (id)initWithPoint0:(struct SUGradientPoint)arg1 point1:(struct SUGradientPoint)arg2 type:(long long)arg3;	// IMP=0x00000000000d7242

@end

