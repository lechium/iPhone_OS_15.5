//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCAccessChecker : NSObject
{
}

- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ec30
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000003eae2
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;	// IMP=0x000000000003e994
- (id)init;	// IMP=0x000000000003e965

@end

