//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerObserver-Protocol.h>
#import <MapsSupport/MSPQueryDelegate-Protocol.h>

@class MSPContainer, NSArray, NSLock, NSString;
@protocol MSPQueryDelegate, OS_dispatch_queue;

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate>
{
    unsigned long long _contentVersion;	// 8 = 0x8
    _Bool _isReady;	// 16 = 0x10
    MSPContainer *_container;	// 24 = 0x18
    NSArray *_cachedContents;	// 32 = 0x20
    CDUnknownBlockType _filterBlock;	// 40 = 0x28
    NewMSPQuery *_parentQuery;	// 48 = 0x30
    NSLock *_lock;	// 56 = 0x38
    id <MSPQueryDelegate> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_processingQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000157f5
@property _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <MSPQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NewMSPQuery *parentQuery; // @synthesize parentQuery=_parentQuery;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(retain, nonatomic) NSArray *cachedContents; // @synthesize cachedContents=_cachedContents;
@property(readonly) unsigned long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly, nonatomic) MSPContainer *container; // @synthesize container=_container;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2;	// IMP=0x0000000000015711
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;	// IMP=0x00000000000156ff
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;	// IMP=0x00000000000156ed
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;	// IMP=0x00000000000156db
- (void)moveObject:(id)arg1 toIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014c43
- (void)moveObjectToBack:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014bb0
- (void)moveObjectToFront:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014b99
- (void)moveObject:(id)arg1 afterObject:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014994
- (void)moveObject:(id)arg1 beforeObject:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000147ee
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013d54
- (void)removeObject:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013c8e
- (void)addOrUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012914
- (void)addOrUpdateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001284e
- (void)setContents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012148
- (_Bool)isObject:(id)arg1 equalTo:(id)arg2;	// IMP=0x0000000000012130
- (void)fetchContentsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011d73
@property(readonly) NSArray *contents;
- (void)processContentsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000110a2
- (void)processContentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010d8e
- (void)processContents;	// IMP=0x0000000000010d05
- (void)_notifyDelegate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010ad9
- (id)subQueryFilteredWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010a10
- (id)initWithParentQuery:(id)arg1 container:(id)arg2 delegate:(id)arg3 filteredWithBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000010864
- (id)initWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010847
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000010832

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
