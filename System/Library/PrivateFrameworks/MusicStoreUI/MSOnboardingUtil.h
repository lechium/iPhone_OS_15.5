//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MSOnboardingUtil : NSObject
{
}

+ (id)viewControllerForMediaType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ace3
+ (_Bool)shouldShowOnboarding;	// IMP=0x000000000000ac9e
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000aa7d
+ (void)markAsShown;	// IMP=0x000000000000a98f

@end

