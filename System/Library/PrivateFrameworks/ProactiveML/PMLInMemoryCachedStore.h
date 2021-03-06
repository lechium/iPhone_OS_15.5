//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore
{
    PMLTrainingStoredSessionBatch *_cachedSessions;	// 8 = 0x8
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;	// IMP=0x00000000000028e6
- (void).cxx_destruct;	// IMP=0x00000000000028d3
- (void)_registerUnlockHandler;	// IMP=0x00000000000028cd
- (void)_openDbIfUnlocked;	// IMP=0x00000000000028c7
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x000000000000289d
- (id)initWithSessionBatch:(id)arg1;	// IMP=0x0000000000002828

@end

