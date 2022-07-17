//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolDOMStorageDomainHandler-Protocol.h>

@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject <RWIProtocolDOMStorageDomainHandler>
{
    IKJSInspectorController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006d7f4
@property(readonly, nonatomic) __weak IKJSInspectorController *controller; // @synthesize controller=_controller;
- (id)_storageForStorageId:(id)arg1;	// IMP=0x000000000006d6e1
- (id)_storageIdForStorage:(id)arg1;	// IMP=0x000000000006d4ea
- (void)_itemsCleared:(id)arg1;	// IMP=0x000000000006d290
- (void)_itemRemoved:(id)arg1;	// IMP=0x000000000006cfc3
- (void)_itemUpdated:(id)arg1;	// IMP=0x000000000006cc93
- (void)_itemAdded:(id)arg1;	// IMP=0x000000000006c993
- (void)removeDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4;	// IMP=0x000000000006c904
- (void)setDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;	// IMP=0x000000000006c856
- (void)getDOMStorageItemsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3;	// IMP=0x000000000006c59b
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c586
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c57b
- (void)stopListeningForStorageNotifications;	// IMP=0x000000000006c528
- (void)startListeningForStorageNotifications;	// IMP=0x000000000006c3ed
- (void)dealloc;	// IMP=0x000000000006c378
- (id)initWithInspectorController:(id)arg1;	// IMP=0x000000000006c314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
