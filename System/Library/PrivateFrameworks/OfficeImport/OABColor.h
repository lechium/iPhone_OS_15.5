//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABColor : NSObject
{
}

+ (int)writeSystemColorID:(int)arg1;	// IMP=0x00000000003029e8
+ (id)readColor:(const struct EshColor *)arg1 colorPropertiesManager:(id)arg2 state:(id)arg3;	// IMP=0x0000000000302624
+ (struct EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2;	// IMP=0x000000000010a0bf
+ (int)readColorAdjustmentType:(int)arg1;	// IMP=0x000000000010a296
+ (int)readSystemColorID:(int)arg1;	// IMP=0x0000000000302a04

@end

