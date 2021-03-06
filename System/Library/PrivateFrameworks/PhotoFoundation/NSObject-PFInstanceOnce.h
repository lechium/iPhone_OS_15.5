//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (PFInstanceOnce)
+ (void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2;	// IMP=0x0000000000014567
+ (_Bool)currentContextCanExecuteSelector:(SEL)arg1;	// IMP=0x000000000001455f
+ (void)setExecutionContextCheck:(int)arg1 forClassMethod:(SEL)arg2;	// IMP=0x0000000000014559
+ (void)setExecutionContextCheck:(int)arg1 forInstanceMethod:(SEL)arg2;	// IMP=0x0000000000014553
+ (void)setExecutionContextCheckForAllClassMethods:(int)arg1;	// IMP=0x000000000001454d
+ (void)setExecutionContextCheckForAllInstanceMethods:(int)arg1;	// IMP=0x0000000000014547
+ (Class)implementingClassForInstanceMethod:(SEL)arg1;	// IMP=0x0000000000036341
+ (_Bool)implementsInstanceMethod:(SEL)arg1;	// IMP=0x00000000000362db
+ (_Bool)implementsClassMethod:(SEL)arg1;	// IMP=0x00000000000362b4
- (void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2;	// IMP=0x0000000000014541
- (_Bool)currentContextCanExecuteSelector:(SEL)arg1;	// IMP=0x000000000001451a
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;	// IMP=0x0000000000021d67
- (id)associatedObjectForKey:(id)arg1;	// IMP=0x00000000000362a7
- (void)setAssociatedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000036295
@end

