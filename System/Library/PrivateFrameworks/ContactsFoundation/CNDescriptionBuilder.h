//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface CNDescriptionBuilder : NSObject
{
    NSObject *_object;	// 8 = 0x8
    NSMutableString *_description;	// 16 = 0x10
    NSString *_separator;	// 24 = 0x18
}

+ (id)descriptionForBool:(_Bool)arg1;	// IMP=0x0000000000063293
+ (id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2;	// IMP=0x00000000000624cf
+ (id)descriptionBuilderWithObject:(id)arg1;	// IMP=0x0000000000062482
- (void).cxx_destruct;	// IMP=0x00000000000632ca
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
- (id)build;	// IMP=0x0000000000063253
- (void)tryAppendKey:(id)arg1;	// IMP=0x00000000000631bf
- (id)appendKeys:(id)arg1;	// IMP=0x0000000000063027
- (id)appendKey:(id)arg1;	// IMP=0x0000000000062fe1
- (id)appendNamesAndObjects:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000062ee6
- (id)appendNamesAndObjects:(id)arg1;	// IMP=0x0000000000062e2f
- (id)appendName:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000062dc2
- (id)appendName:(id)arg1 pointerValue:(void *)arg2;	// IMP=0x0000000000062d33
- (id)appendName:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000062cac
- (id)appendName:(id)arg1 timeInterval:(double)arg2;	// IMP=0x0000000000062c23
- (id)appendName:(id)arg1 doubleValue:(double)arg2;	// IMP=0x0000000000062b91
- (id)appendName:(id)arg1 intValue:(int)arg2;	// IMP=0x0000000000062b02
- (id)appendName:(id)arg1 u_int64_t:(unsigned long long)arg2;	// IMP=0x0000000000062a73
- (id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2;	// IMP=0x00000000000629e4
- (id)appendName:(id)arg1 integerValue:(long long)arg2;	// IMP=0x0000000000062955
- (id)appendName:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000000062916
- (id)appendableDescriptionOfValue:(id)arg1;	// IMP=0x0000000000062878
- (id)appendName:(id)arg1 object:(id)arg2;	// IMP=0x0000000000062762
- (id)appendObject:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000062747
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000062632
- (id)init;	// IMP=0x00000000000625f5

@end
