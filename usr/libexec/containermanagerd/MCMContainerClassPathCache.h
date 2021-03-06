//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MCMContainerClassPathCache : NSObject
{
    NSMutableDictionary *_lookup;	// 8 = 0x8
    struct os_unfair_lock_s _lookupLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000055d6a
- (void)_lock_flush;	// IMP=0x0010000000055d23
- (id)_lock_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x00100000000559f3
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x00100000000559ed
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x00100000000559db
- (id)containerClassPathWithURL:(id)arg1 reference:(id)arg2;	// IMP=0x0010000000055820
- (id)referenceForPOSIXUser:(id)arg1;	// IMP=0x0010000000055097
- (void)flush;	// IMP=0x0010000000055065
- (id)containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 typeClass:(Class)arg3;	// IMP=0x0010000000054feb
- (id)containerClassPathForContainerIdentity:(id)arg1 typeClass:(Class)arg2;	// IMP=0x0010000000054f48
- (id)init;	// IMP=0x0010000000054e90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

