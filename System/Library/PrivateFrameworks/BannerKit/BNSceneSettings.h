//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplicationSceneSettings.h>

#import <BannerKit/BSSettingDescriptionProvider-Protocol.h>

@class NSString;

@interface BNSceneSettings : UIApplicationSceneSettings <BSSettingDescriptionProvider>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000002d4c
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000002cc4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002c96
@property(readonly, copy, nonatomic) Class clientContainerViewControllerClass;
@property(readonly, nonatomic, getter=isUserInteractionInProgress) _Bool userInteractionInProgress;
@property(readonly, copy, nonatomic) NSString *revocationReason;
@property(readonly, nonatomic) int bannerAppearState;
@property(readonly, nonatomic) int viewControllerAppearState;
@property(readonly, nonatomic) struct CGSize presentationSize;
@property(readonly, nonatomic) struct CGSize containerSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
