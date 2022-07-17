//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TUNeighborhoodActivityConduit;

@interface CPActivityAuthorizationManager : NSObject
{
    MISSING_TYPE *dataSource;	// 8 = 0x8
    MISSING_TYPE *notificationCenter;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_neighborhoodActivityConduit;	// 56 = 0x38
    MISSING_TYPE *queue;	// 64 = 0x40
    MISSING_TYPE *appPolicyManager;	// 72 = 0x48
    MISSING_TYPE *audioRoutePolicyManager;	// 80 = 0x50
    MISSING_TYPE *lock;	// 88 = 0x58
    MISSING_TYPE *preparedAuthorizedBundleIdentifiers;	// 96 = 0x60
}

+ (id)notificationDisplayInformationForAudioPolicyManager:(id)arg1 activity:(id)arg2 conversation:(id)arg3;	// IMP=0x000000000006d5d0
- (void).cxx_destruct;	// IMP=0x000000000006d7d0
- (id)init;	// IMP=0x000000000006d770
- (void)setAuthorization:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000006d6a0
- (void)requestAuthorizationForApplicationLaunchWithActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d1d0
- (void)requestAuthorizationForApplicationWithBundleIdentifier:(id)arg1 preparing:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c9d0
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;	// IMP=0x000000000006acf0
@property(nonatomic, retain) TUNeighborhoodActivityConduit *neighborhoodActivityConduit;

@end
