//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion;
@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject
{
    BKSProcessAssertion *_assertion;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000061286
- (_Bool)isValid;	// IMP=0x0000000000061270
- (void)invalidate;	// IMP=0x00000000000611bc
- (void)cancelTimer;	// IMP=0x000000000006118d
- (id)initWithName:(id)arg1 preventIdleSleep:(_Bool)arg2;	// IMP=0x0000000000061178
- (id)initWithName:(id)arg1;	// IMP=0x0000000000061161
- (id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(_Bool)arg3;	// IMP=0x0000000000060f22

@end

