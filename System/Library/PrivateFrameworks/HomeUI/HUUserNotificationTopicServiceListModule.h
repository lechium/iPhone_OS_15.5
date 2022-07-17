//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemModule.h>

@class HFTransformItemProvider, HFUserNotificationServiceTopic, HMHome;

@interface HUUserNotificationTopicServiceListModule : HFItemModule
{
    HMHome *_home;	// 8 = 0x8
    HFUserNotificationServiceTopic *_topic;	// 16 = 0x10
    HFTransformItemProvider *_transformServiceItemProvider;	// 24 = 0x18
    HFTransformItemProvider *_transformCameraItemProvider;	// 32 = 0x20
}

+ (id)_createTransformItemForItem:(id)arg1 notificationSettingsProvider:(id)arg2;	// IMP=0x00000000001c3fef
- (void).cxx_destruct;	// IMP=0x00000000001c4e5b
@property(readonly, nonatomic) HFTransformItemProvider *transformCameraItemProvider; // @synthesize transformCameraItemProvider=_transformCameraItemProvider;
@property(readonly, nonatomic) HFTransformItemProvider *transformServiceItemProvider; // @synthesize transformServiceItemProvider=_transformServiceItemProvider;
@property(readonly, nonatomic) HFUserNotificationServiceTopic *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)serviceLikeItemForItem:(id)arg1;	// IMP=0x00000000001c4d3b
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000001c4b73
- (id)itemProviders;	// IMP=0x00000000001c4ad3
- (void)_buildItemProviders;	// IMP=0x00000000001c43a4
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 topic:(id)arg3;	// IMP=0x00000000001c3f35
- (id)initWithItemUpdater:(id)arg1;	// IMP=0x00000000001c3e80

@end
