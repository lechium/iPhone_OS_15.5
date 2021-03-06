//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXTrampoline : NSObject
{
    _Bool _warnAboutUnknownSelectors;	// 8 = 0x8
    id _caller;	// 16 = 0x10
    Class _targetClass;	// 24 = 0x18
}

+ (id)methodNotFoundSentinal;	// IMP=0x000000000005402b
+ (void)methodDoesNotExistSentinal;	// IMP=0x0000000000054025
+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;	// IMP=0x0000000000053fc9
- (void).cxx_destruct;	// IMP=0x000000000005461b
@property(nonatomic) _Bool warnAboutUnknownSelectors; // @synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors;
@property(nonatomic) __weak Class targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) __weak id caller; // @synthesize caller=_caller;
- (CDUnknownFunctionPointerType)_findIMPForSelector:(SEL)arg1;	// IMP=0x0000000000054509
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000543ee
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000541f6
- (_Bool)callerIsClass;	// IMP=0x00000000000541bf
- (id)description;	// IMP=0x000000000005413e
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;	// IMP=0x00000000000540c7

@end

