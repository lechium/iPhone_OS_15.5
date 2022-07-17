//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDAppStoreService : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;	// 8 = 0x8
}

+ (id)interface;	// IMP=0x0000000000023918
+ (id)defaultService;	// IMP=0x0000000000023241
- (void).cxx_destruct;	// IMP=0x0000000000023938
- (void)launchAppStoreWithURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002332a
- (id)_initWithServiceBroker:(id)arg1;	// IMP=0x00000000000232c6
- (id)init;	// IMP=0x00000000000231e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
