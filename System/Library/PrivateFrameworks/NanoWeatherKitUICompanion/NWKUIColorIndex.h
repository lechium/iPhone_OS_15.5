//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NWKUIColorIndex : NSObject
{
    double _value;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
}

+ (id)indexWithValue:(double)arg1 color:(id)arg2;	// IMP=0x000000000000668e
+ (id)zeroIndex;	// IMP=0x00000000000065cf
+ (id)indexForValue:(double)arg1;	// IMP=0x0000000000006544
+ (id)colorForValue:(double)arg1;	// IMP=0x000000000000649c
- (void).cxx_destruct;	// IMP=0x0000000000006887
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006767
- (id)initWithValue:(double)arg1 color:(id)arg2;	// IMP=0x00000000000066ed

@end
