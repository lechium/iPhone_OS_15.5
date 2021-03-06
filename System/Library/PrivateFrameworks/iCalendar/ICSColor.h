//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@interface ICSColor : NSObject <NSSecureCoding>
{
    unsigned char _red;	// 8 = 0x8
    unsigned char _green;	// 9 = 0x9
    unsigned char _blue;	// 10 = 0xa
}

+ (_Bool)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4;	// IMP=0x000000000001dbb1
+ (id)symbolicColorForLegacyRGB:(id)arg1;	// IMP=0x000000000001dba4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001da72
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001db00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001da7a
- (unsigned char)blue;	// IMP=0x000000000001da68
- (unsigned char)green;	// IMP=0x000000000001da5e
- (unsigned char)red;	// IMP=0x000000000001da54
- (id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;	// IMP=0x000000000001da03

@end

