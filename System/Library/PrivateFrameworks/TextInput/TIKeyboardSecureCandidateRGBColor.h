//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>
{
    double _colorR;	// 8 = 0x8
    double _colorG;	// 16 = 0x10
    double _colorB;	// 24 = 0x18
    double _colorA;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000061cc9
+ (id)lightGrayColor;	// IMP=0x0000000000061c87
+ (id)blackColor;	// IMP=0x0000000000061c54
+ (id)whiteColor;	// IMP=0x0000000000061c21
@property(nonatomic) double colorA; // @synthesize colorA=_colorA;
@property(nonatomic) double colorB; // @synthesize colorB=_colorB;
@property(nonatomic) double colorG; // @synthesize colorG=_colorG;
@property(nonatomic) double colorR; // @synthesize colorR=_colorR;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061a96
- (id)description;	// IMP=0x00000000000619b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006190d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006183e
- (id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;	// IMP=0x00000000000617ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000061785

@end
