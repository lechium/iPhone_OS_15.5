//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface SKAttributeValue : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    float floatValues[4];	// 16 = 0x10
    unsigned short halfFloatValues[4];	// 32 = 0x20
}

+ (id)valueWithVectorFloat4: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000f4f95
+ (id)valueWithVectorFloat3: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000f4f3f
+ (id)valueWithVectorFloat2: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000f4ee7
+ (id)valueWithFloat:(float)arg1;	// IMP=0x00000000000f4e8f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f4e19
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqualToAttributeValue:(id)arg1;	// IMP=0x00000000000f53da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f52d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f5175
- (id)init;	// IMP=0x00000000000f5139
@property(nonatomic) MISSING_TYPE *vectorFloat4Value;
@property(nonatomic) MISSING_TYPE *vectorFloat3Value;
@property(nonatomic) MISSING_TYPE *vectorFloat2Value;
@property(nonatomic) float floatValue;
- (_Bool)copyValueTo:(void *)arg1 type:(long long)arg2 count:(unsigned int)arg3;	// IMP=0x00000000000f4e21

@end

