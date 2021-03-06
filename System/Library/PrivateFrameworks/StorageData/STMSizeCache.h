//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSLock, NSMutableArray, NSMutableDictionary;
@protocol STMSizeCacheDelegate;

@interface STMSizeCache : NSObject
{
    struct __CFString *_prefsKey;	// 8 = 0x8
    NSMutableDictionary *_itemsByPath;	// 16 = 0x10
    NSMutableArray *_eventsToProcess;	// 24 = 0x18
    id <STMSizeCacheDelegate> _delegate;	// 32 = 0x20
    unsigned long long _cacheEventID;	// 40 = 0x28
    NSDate *_cacheEventDate;	// 48 = 0x30
    NSLock *_itemsLock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000110ab
@property(retain) NSLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain) NSDate *cacheEventDate; // @synthesize cacheEventDate=_cacheEventDate;
@property unsigned long long cacheEventID; // @synthesize cacheEventID=_cacheEventID;
@property __weak id <STMSizeCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateLastCacheEventID:(unsigned long long)arg1;	// IMP=0x0000000000010fed
- (unsigned long long)processCacheEvents:(id)arg1;	// IMP=0x0000000000010b6b
- (void)removeItem:(id)arg1;	// IMP=0x0000000000010b1c
- (void)removeItemForPath:(id)arg1;	// IMP=0x0000000000010a8a
- (void)addItems:(id)arg1;	// IMP=0x0000000000010960
- (void)addItem:(id)arg1;	// IMP=0x0000000000010789
- (void)pruneCache;	// IMP=0x00000000000105bd
- (id)itemsContainedByPath:(id)arg1;	// IMP=0x000000000001024d
- (id)itemsContainingPath:(id)arg1;	// IMP=0x000000000000ffef
- (id)sizeOfItemForPath:(id)arg1;	// IMP=0x000000000000fedf
- (id)updatedSizeOfItemForPath:(id)arg1;	// IMP=0x000000000000fdcd
- (void)updateSizeOfItem:(id)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000000fa61
- (id)itemForPath:(id)arg1;	// IMP=0x000000000000f9e0
@property(readonly) NSArray *items;
- (void)notifySizesChanged:(id)arg1;	// IMP=0x000000000000f8ee
- (void)notifyItemsAdded:(id)arg1;	// IMP=0x000000000000f898
- (void)writeCacheToPref;	// IMP=0x000000000000f886
- (void)flushCacheToPref;	// IMP=0x000000000000f7ca
- (void)_flushCache:(id)arg1;	// IMP=0x000000000000f744
- (void)_writeCache;	// IMP=0x000000000000f0e5
- (void)loadCacheFromPref;	// IMP=0x000000000000ea20
- (void)dealloc;	// IMP=0x000000000000e9e0
- (id)initWithPrefsKey:(id)arg1;	// IMP=0x000000000000e8fc

@end

