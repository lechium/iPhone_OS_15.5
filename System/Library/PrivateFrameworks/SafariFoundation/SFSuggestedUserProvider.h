//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface SFSuggestedUserProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_suggestedEmails;	// 16 = 0x10
    NSArray *_suggestedNonEmails;	// 24 = 0x18
}

+ (id)sharedProvider;	// IMP=0x0000000000010b3f
- (void).cxx_destruct;	// IMP=0x00000000000117ba
- (void)_getSuggestedUsersFromSavedAccounts:(id)arg1 suggestedEmails:(id *)arg2 suggestedNonEmails:(id *)arg3;	// IMP=0x0000000000011269
- (void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010fc1
- (void)suggestedUsersOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010faa
- (id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2;	// IMP=0x0000000000010e17
- (id)_allCachedSuggestedUsersWithType:(long long)arg1;	// IMP=0x0000000000010d55
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x0000000000010cc9
- (id)init;	// IMP=0x0000000000010b94

@end

