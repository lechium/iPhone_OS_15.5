//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pasteboard/PBDataProviderProtocol-Protocol.h>

@class NSMutableDictionary, NSString, PBItemCollection;

__attribute__((visibility("hidden")))
@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol>
{
    NSMutableDictionary *_cleanupQueue_cleanupHandlerByUUID;	// 8 = 0x8
    PBItemCollection *_itemCollection;	// 16 = 0x10
}

+ (id)newServicerForConnection:(id)arg1 itemCollection:(id)arg2;	// IMP=0x0000000000013ae3
- (void).cxx_destruct;	// IMP=0x0000000000014b81
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
- (void)waitForItemRequestsDeliveryCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014b5b
- (void)callCleanupBlockWithUUID:(id)arg1;	// IMP=0x0000000000014909
- (void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014037
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001402a
- (id)initWithConnection:(id)arg1 itemCollection:(id)arg2;	// IMP=0x0000000000013b4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
