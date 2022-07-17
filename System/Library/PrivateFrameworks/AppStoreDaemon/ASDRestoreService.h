//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDRestoreService : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;	// 8 = 0x8
}

+ (id)interface;	// IMP=0x0000000000075119
+ (id)sharedInstance;	// IMP=0x000000000007439a
- (void).cxx_destruct;	// IMP=0x0000000000075139
- (void)prioritizeBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000074cb9
- (void)estimateTotalDownloadSizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000748a2
- (void)clearFollowupsForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000074455
- (id)init;	// IMP=0x00000000000743ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
