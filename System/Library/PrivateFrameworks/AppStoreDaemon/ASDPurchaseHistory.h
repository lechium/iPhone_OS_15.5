//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;	// 8 = 0x8
    int _databaseChangedNotificationToken;	// 16 = 0x10
}

+ (id)interface;	// IMP=0x00000000000415b7
+ (id)sharedInstance;	// IMP=0x000000000004088d
- (void).cxx_destruct;	// IMP=0x000000000004166a
- (void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000413ad
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041396
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041175
- (void)updateForAccountID:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004115e
- (void)showAllWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f64
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040d44
- (void)executeQuery:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040b4e
- (id)_initWithServiceBroker:(id)arg1;	// IMP=0x0000000000040ae3
- (void)dealloc;	// IMP=0x0000000000040aaa
- (id)init;	// IMP=0x0000000000040912

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
