//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSValueTransformer : NSObject
{
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000000168744
+ (Class)transformedValueClass;	// IMP=0x000000000016873c
+ (id)valueTransformerNames;	// IMP=0x00000000001686cd
+ (id)valueTransformerForName:(id)arg1;	// IMP=0x0000000000168606
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;	// IMP=0x00000000001682e1
- (id)init;	// IMP=0x0000000000168814
- (id)_initForFoundationOnly;	// IMP=0x00000000001687c2
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000168755
- (id)transformedValue:(id)arg1;	// IMP=0x000000000016874c

@end
