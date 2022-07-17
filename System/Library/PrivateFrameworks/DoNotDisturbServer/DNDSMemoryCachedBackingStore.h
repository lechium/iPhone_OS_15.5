//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSCachedBackingStore-Protocol.h>

@class NSString;
@protocol DNDSBackingStore, DNDSBackingStoreRecord, DNDSCachedBackingStoreDelegate;

@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSCachedBackingStore>
{
    id <DNDSBackingStore> _underlyingBackingStore;	// 8 = 0x8
    id <DNDSBackingStoreRecord> _cache;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    id <DNDSCachedBackingStoreDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014112
@property(nonatomic) __weak id <DNDSCachedBackingStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;	// IMP=0x000000000001403f
- (void)purgeCache;	// IMP=0x000000000001400b
- (unsigned long long)writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000013f5a
- (unsigned long long)writeRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013f40
- (id)readRecordWithError:(id *)arg1;	// IMP=0x0000000000013ed8
- (id)initWithUnderlyingBackingStore:(id)arg1;	// IMP=0x0000000000013e53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
