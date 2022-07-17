//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/CPApplicationPolicyManager-Protocol.h>

@class MISSING_TYPE, NSDictionary;

@interface CPApplicationPolicyManager : NSObject <CPApplicationPolicyManager>
{
    MISSING_TYPE *storage;	// 8 = 0x8
    MISSING_TYPE *config;	// 48 = 0x30
    MISSING_TYPE *lock;	// 56 = 0x38
    MISSING_TYPE *queue;	// 64 = 0x40
    MISSING_TYPE *delegates;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000000115530
- (void).cxx_destruct;	// IMP=0x0000000000116a50
- (id)init;	// IMP=0x000000000011dcd0
- (void)handleCNContactStoreDidChangeNotification:(id)arg1;	// IMP=0x000000000011dc50
- (void)handleApplicationUninstalledNotification:(id)arg1;	// IMP=0x000000000011da30
- (void)setAuthorization:(_Bool)arg1 forBundleID:(id)arg2;	// IMP=0x000000000011d3f0
- (void)updateAllowedHandlesForConversation:(id)arg1;	// IMP=0x000000000011c5c0
- (_Bool)shouldLaunchAppInBackgroundForActivity:(id)arg1 onConversation:(id)arg2;	// IMP=0x000000000011c1d0
- (void)addDelegate:(id)arg1 withQueue:(id)arg2;	// IMP=0x000000000011a260
- (void)dealloc;	// IMP=0x0000000000116a30
@property(nonatomic, readonly) _Bool backgroundLaunchEnabled;
@property(nonatomic) _Bool autoSharePlayEnabled;
@property(nonatomic, readonly) NSDictionary *authorizedBundleIdentifiers;

@end
