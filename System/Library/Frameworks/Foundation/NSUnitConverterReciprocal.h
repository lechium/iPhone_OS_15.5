//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSUnitConverterReciprocal <NSSecureCoding>
{
    double _reciprocalValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000086b34
@property(readonly) double reciprocalValue; // @synthesize reciprocalValue=_reciprocalValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086abb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086a2a
- (id)description;	// IMP=0x0000000000086994
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008694f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086944
- (double)valueFromBaseUnitValue:(double)arg1;	// IMP=0x000000000008692a
- (double)baseUnitValueFromValue:(double)arg1;	// IMP=0x0000000000086910
- (id)initWithReciprocalValue:(double)arg1;	// IMP=0x00000000000868a3

@end

