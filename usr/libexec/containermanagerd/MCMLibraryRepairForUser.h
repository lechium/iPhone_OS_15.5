//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMManagedUserPathRegistry;

@interface MCMLibraryRepairForUser
{
    MCMManagedUserPathRegistry *_userRegistry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000017b24
@property(readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry; // @synthesize userRegistry=_userRegistry;
- (_Bool)_canRepairLocally;	// IMP=0x0010000000017a17
- (id)_managedPathFromContainerClassPath:(id)arg1 registry:(id)arg2;	// IMP=0x0010000000017838
- (id)_setByAddingContainerClassPathsToSet:(id)arg1 registry:(id)arg2;	// IMP=0x00100000000171b1
- (id)_managedPathsForGenericRepair;	// IMP=0x001000000001712e
- (_Bool)performRepairForContainerPath:(id)arg1 containerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000165c6
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerPath:(id)arg2 containerIdentifier:(id)arg3 error:(id *)arg4 duringBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000164f1
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerRootURL:(id)arg2 error:(id *)arg3 duringBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000016430
- (id)initWithManagedUserPathRegistry:(id)arg1;	// IMP=0x00100000000163bf

@end

