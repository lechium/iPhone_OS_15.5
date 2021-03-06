//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache;

@interface MCMGroupManager : NSObject
{
    MCMUserIdentityCache *_userIdentityCache;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x004000000001e4bc
- (void).cxx_destruct;	// IMP=0x002000000001e101
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (id)groupContainerIdentifiersForOwnerIdentifier:(id)arg1 groupContainerClass:(unsigned long long)arg2 entitlements:(id)arg3 useLocking:(_Bool)arg4 withError:(unsigned long long *)arg5;	// IMP=0x001000000001daf4
- (void)_cleanupUnreferencedGroupContainersForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 referenceCounts:(id)arg3 commandQueue:(id)arg4;	// IMP=0x001000000001d38b
- (void)reconcileGroupContainersForContainerClass:(unsigned long long)arg1 commandQueue:(id)arg2;	// IMP=0x001000000001d114
- (id)initWithUserIdentityCache:(id)arg1;	// IMP=0x001000000001d0a9

@end

