//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKQueryCursor, CPLCloudKitScope, CPLEngineScope, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitQueryTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    CKQueryCursor *_cursor;	// 24 = 0x18
    Class _queriedClass;	// 32 = 0x20
    CPLCloudKitScope *_cloudKitScope;	// 40 = 0x28
    CPLEngineScope *_scope;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000094260
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
@property(readonly, nonatomic) Class queriedClass; // @synthesize queriedClass=_queriedClass;
@property(readonly, copy, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
- (void)_runOperationsWithCurrentUserID:(id)arg1;	// IMP=0x0010000000092900
- (void);	// IMP=0x001000000009287e
- (void)sendProgressBatch:(id)arg1 updatedCursor:(id)arg2;	// IMP=0x0010000000092804
- (id)initWithController:(id)arg1 cursor:(id)arg2 class:(Class)arg3 cloudKitScope:(id)arg4 scope:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000009264d

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

