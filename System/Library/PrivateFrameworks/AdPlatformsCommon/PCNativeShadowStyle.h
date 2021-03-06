//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class NSArray, PCNativeColor;

@interface PCNativeShadowStyle : NSObject <NSSecureCoding>
{
    PCNativeColor *_color;	// 8 = 0x8
    double _opacity;	// 16 = 0x10
    double _radius;	// 24 = 0x18
    NSArray *_offsets;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015613
- (void).cxx_destruct;	// IMP=0x00000000000158ad
@property(retain, nonatomic) NSArray *offsets; // @synthesize offsets=_offsets;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) PCNativeColor *color; // @synthesize color=_color;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001575c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001561b

@end

