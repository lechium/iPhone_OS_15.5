//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCKeyValueStoreSavePolicy : NSObject
{
}

+ (id)appBackgroundPolicyWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2;	// IMP=0x00000000002e1d5d
+ (id)throttlePolicyWithDelay:(double)arg1;	// IMP=0x00000000002e1d22
+ (id)unthrottledPolicy;	// IMP=0x00000000002e1d0d
+ (id)defaultPolicy;	// IMP=0x00000000002e1cf3
- (void)scheduleSaveOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e1dcd

@end
