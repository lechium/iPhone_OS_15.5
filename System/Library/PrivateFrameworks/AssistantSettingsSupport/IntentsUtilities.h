//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IntentsUtilities : NSObject
{
}

+ (id)_displayNameForApp:(id)arg1;	// IMP=0x000000000001c27b
+ (void)setAccess:(_Bool)arg1 appID:(id)arg2;	// IMP=0x000000000001c1c1
+ (_Bool)isIntentsEnabledForAppId:(id)arg1;	// IMP=0x000000000001c025
+ (id)fetchEnabledAppIds;	// IMP=0x000000000001bde8
+ (void)intentsAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b92a

@end
