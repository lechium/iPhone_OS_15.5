//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLTransportUpdateTask
{
}

- (id)taskIdentifier;	// IMP=0x00000000000280d6
- (_Bool)shouldSkipScopesWithMissingTransportScope;	// IMP=0x00000000000280ce
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;	// IMP=0x0000000000027fef
- (id)enumerateScopesForTaskInTransaction:(id)arg1;	// IMP=0x0000000000027f9f

@end
