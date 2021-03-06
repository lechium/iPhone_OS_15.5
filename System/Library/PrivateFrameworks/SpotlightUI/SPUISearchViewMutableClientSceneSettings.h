//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

#import <SpotlightUI/SPUISearchViewClientSceneSettings-Protocol.h>

@class NSString;

@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;	// IMP=0x000000000000c015
- (id)keyDescriptionForSetting:(long long)arg1;	// IMP=0x000000000000bf98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bf6a
@property(nonatomic) unsigned int searchHeaderContextID;
@property(nonatomic) unsigned long long searchHeaderLayerRenderID;
@property(nonatomic) double distanceToTopOfIcons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

