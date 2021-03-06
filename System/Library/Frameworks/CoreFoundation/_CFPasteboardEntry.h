//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardEntry : NSObject
{
    const struct __CFString *_flavorName;	// 8 = 0x8
    const struct __CFUUID *_uuid;	// 16 = 0x10
    const struct __CFData *_data;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcData;	// 32 = 0x20
    unsigned long long _dataFlags;	// 40 = 0x28
    unsigned char _isHidden;	// 48 = 0x30
    CDUnknownBlockType _promisor;	// 56 = 0x38
    CDUnknownBlockType _asyncPromisor;	// 64 = 0x40
    _Atomic int _promiseState;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_promiseGroup;	// 80 = 0x50
    struct os_unfair_lock_s _lock;	// 88 = 0x58
    NSObject<OS_xpc_object> *_promisorConnection;	// 96 = 0x60
    int _itemIdentifier;	// 104 = 0x68
    unsigned char _isPendingFlush;	// 108 = 0x6c
    unsigned char _extensionConsumed;	// 109 = 0x6d
}

@property unsigned char extensionConsumed; // @synthesize extensionConsumed=_extensionConsumed;
@property unsigned char isPendingFlush; // @synthesize isPendingFlush=_isPendingFlush;
@property(getter=isHidden) unsigned char hidden; // @synthesize hidden=_isHidden;
@property(readonly) const struct __CFUUID *promiseUUID; // @synthesize promiseUUID=_uuid;
@property(readonly) int itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property unsigned long long dataFlags; // @synthesize dataFlags=_dataFlags;
@property(readonly) const struct __CFString *flavorName; // @synthesize flavorName=_flavorName;
- (CDUnknownBlockType)requestDataForPasteboard:(struct __CFPasteboard *)arg1 generation:(long long)arg2 immediatelyAvailableResult:(CDStruct_55991ab6 *)arg3;	// IMP=0x0000000000069718
- (void)resolveClientPromisedDataWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000693ea
- (unsigned char)resolveLocalPromisedData;	// IMP=0x000000000006933d
- (void)promiseDataWithBlock:(CDUnknownBlockType)arg1 forPasteboard:(struct __CFPasteboard *)arg2 generation:(long long)arg3;	// IMP=0x0000000000069214
- (id)createXPCObjectWithMetadataOnly:(unsigned char)arg1;	// IMP=0x00000000000690dc
- (id)initFromXPCObject:(id)arg1 fromConnection:(id)arg2;	// IMP=0x0000000000068d2a
@property(readonly) unsigned char promisorExistsInCurrentProcess;
- (void)_setLocalPromiseState:(int)arg1;	// IMP=0x0000000000068bce
@property(readonly) unsigned char hasLocalPromise;
- (const struct __CFData *)createDataAndReturnError:(int *)arg1;	// IMP=0x0000000000068a7d
- (id)_createXPCData;	// IMP=0x0000000000068a28
- (void)setData:(struct __CFData *)arg1;	// IMP=0x0000000000068992
@property(readonly) unsigned char hasData;
- (id)description;	// IMP=0x00000000000687e8
- (void)dealloc;	// IMP=0x0000000000068718
- (id)initWithFlavorName:(const struct __CFString *)arg1 itemIdentifier:(int)arg2;	// IMP=0x000000000006867d
- (void)promiseDataWithFetchOperation:(id)arg1;	// IMP=0x000000000008f207

@end

