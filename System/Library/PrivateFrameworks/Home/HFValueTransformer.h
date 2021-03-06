//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HFValueTransformer : NSObject
{
    Class _valueClass;	// 8 = 0x8
    CDUnknownBlockType _transformBlock;	// 16 = 0x10
    CDUnknownBlockType _reverseTransformBlock;	// 24 = 0x18
}

+ (id)identityTransformer;	// IMP=0x000000000021aefb
+ (id)transformerForValueClass:(Class)arg1 transformBlock:(CDUnknownBlockType)arg2 reverseTransformBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000021ad72
- (void).cxx_destruct;	// IMP=0x000000000021b112
@property(copy, nonatomic) CDUnknownBlockType reverseTransformBlock; // @synthesize reverseTransformBlock=_reverseTransformBlock;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(retain, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
- (id)valueForTransformedValue:(id)arg1;	// IMP=0x000000000021b053
- (id)transformedValueForValue:(id)arg1;	// IMP=0x000000000021af78

@end

