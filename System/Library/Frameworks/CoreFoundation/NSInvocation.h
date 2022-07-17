//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject
{
    void *_frame;	// 8 = 0x8
    void *_retdata;	// 16 = 0x10
    NSMethodSignature *_signature;	// 24 = 0x18
    NSMutableArray *_container;	// 32 = 0x20
    _Bool *_replacedByPointerBacking;	// 40 = 0x28
    unsigned int _magic;	// 48 = 0x30
    unsigned char _retainedArgs;	// 52 = 0x34
    unsigned char _stackAllocated;	// 53 = 0x35
}

+ (id)invocationWithMethodSignature:(id)arg1;	// IMP=0x000000000011842f
+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void *)arg2;	// IMP=0x00000000001182b2
- (void)invokeWithTarget:(id)arg1;	// IMP=0x000000000011959c
- (void)invokeUsingIMP:(CDUnknownFunctionPointerType)arg1;	// IMP=0x000000000011941c
- (void)invoke;	// IMP=0x000000000011921e
- (void)setArgument:(void *)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000118e47
- (void)getArgument:(void *)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000118c55
- (void)setReturnValue:(void *)arg1;	// IMP=0x0000000000118c41
- (void)getReturnValue:(void *)arg1;	// IMP=0x0000000000118c2d
@property SEL selector;
@property id target;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000118a21
- (void)_addAttachedObject:(id)arg1;	// IMP=0x00000000001189da
@property(readonly) _Bool argumentsRetained;
- (void)retainArguments;	// IMP=0x000000000011850e
@property(readonly, retain) NSMethodSignature *methodSignature;
- (void)dealloc;	// IMP=0x000000000011844c
- (id)init;	// IMP=0x000000000011843e

@end
