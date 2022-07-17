//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISURLBagObserver-Protocol.h>

@class NSDictionary, NSString, SUScriptDictionary;
@protocol OS_dispatch_queue;

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSDictionary *_bagDictionary;	// 16 = 0x10
    SUScriptDictionary *_scriptStoreBagDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000042a40
- (void)_updateWithBagDictionary:(id)arg1 allowsPostingBagDidChangeNotification:(_Bool)arg2;	// IMP=0x00000000000428d9
- (void)bagDidChange:(id)arg1;	// IMP=0x00000000000428c2
- (id)scriptStoreBagDictionary;	// IMP=0x000000000004276e
- (void)dealloc;	// IMP=0x00000000000426f9
- (id)init;	// IMP=0x0000000000042620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
