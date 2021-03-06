//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLGnssDisablementAssertion : NSObject
{
    struct unique_ptr<CLGnssDisablementAssertionInternal, std::default_delete<CLGnssDisablementAssertionInternal>> fInternal;	// 8 = 0x8
}

+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e901
+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e7da
- (id).cxx_construct;	// IMP=0x000000000002ea47
- (void).cxx_destruct;	// IMP=0x000000000002ea37
- (void)dealloc;	// IMP=0x000000000002e3e6
- (void)invalidate;	// IMP=0x000000000002e3d1
- (id)initWithRegistrationMessageName:(const char *)arg1 messagePayload:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e004

@end

