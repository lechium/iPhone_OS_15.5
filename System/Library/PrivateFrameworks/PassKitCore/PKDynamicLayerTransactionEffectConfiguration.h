//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _style;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f136b
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f141a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f13f7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f1373
- (void)configureTransactionEffectEmitterLayer:(id)arg1 withBounds:(struct CGRect)arg2;	// IMP=0x00000000003f12df
- (id)configureTransactionEffectEmitterLayer:(id)arg1 withImage:(struct CGImage *)arg2 andEmitterShapeData:(id)arg3;	// IMP=0x00000000003f0970
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003f083e

@end

