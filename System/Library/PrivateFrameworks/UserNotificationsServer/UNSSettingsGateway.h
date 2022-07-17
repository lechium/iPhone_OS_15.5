//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBObserverDelegate-Protocol.h>

@class BBObserver, BBSettingsGateway, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface UNSSettingsGateway : NSObject <BBObserverDelegate>
{
    NSMutableArray *_observers;	// 8 = 0x8
    BBSettingsGateway *_settingsGateway;	// 16 = 0x10
    BBObserver *_settingsObserver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007212f
- (void)observer:(id)arg1 updateGlobalSettings:(id)arg2;	// IMP=0x0000000000071f69
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x0000000000071d3b
- (void)_queue_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;	// IMP=0x0000000000071c9d
- (long long)_queue_globalScheduledDeliveryShowNextSummarySetting;	// IMP=0x0000000000071c09
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)arg1;	// IMP=0x0000000000071b59
- (id)_queue_globalScheduledDeliveryTimes;	// IMP=0x0000000000071ab6
- (void)_queue_setGlobalScheduledDeliverySetting:(long long)arg1;	// IMP=0x0000000000071a18
- (long long)_queue_globalScheduledDeliverySetting;	// IMP=0x0000000000071984
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)arg1;	// IMP=0x00000000000718e6
- (long long)_queue_globalAnnounceCarPlaySetting;	// IMP=0x0000000000071852
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)arg1;	// IMP=0x00000000000717b4
- (long long)_queue_globalAnnounceHeadphonesSetting;	// IMP=0x0000000000071720
- (void)_queue_setGlobalAnnounceSetting:(long long)arg1;	// IMP=0x0000000000071682
- (long long)_queue_globalAnnounceSetting;	// IMP=0x00000000000715ee
- (void)_queue_setGlobalContentPreviewSetting:(long long)arg1;	// IMP=0x0000000000071550
- (long long)_queue_globalContentPreviewSetting;	// IMP=0x00000000000714bc
- (id)_queue_allSectionInfos;	// IMP=0x0000000000071419
- (id)_queue_allEffectiveSectionInfos;	// IMP=0x0000000000071376
- (void)_queue_getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000711ff
- (id)_queue_sectionInfosForSectionIDs:(id)arg1;	// IMP=0x000000000007113d
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)arg1;	// IMP=0x000000000007107b
- (id)_queue_sectionInfoForSectionID:(id)arg1;	// IMP=0x0000000000070f66
- (id)_queue_effectiveSectionInfoForSectionID:(id)arg1;	// IMP=0x0000000000070e51
- (void)_queue_setSectionInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x0000000000070e3b
- (void)_queue_removeObserver:(id)arg1;	// IMP=0x0000000000070e25
- (void)_queue_addObserver:(id)arg1;	// IMP=0x0000000000070e0f
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)arg1;	// IMP=0x0000000000070da3
- (long long)globalScheduledDeliveryShowNextSummarySetting;	// IMP=0x0000000000070ca6
- (void)setGlobalScheduledDeliveryTimes:(id)arg1;	// IMP=0x0000000000070bfc
- (id)globalScheduledDeliveryTimes;	// IMP=0x0000000000070ac1
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;	// IMP=0x0000000000070a55
- (long long)globalScheduledDeliverySetting;	// IMP=0x0000000000070958
- (void)setGlobalAnnounceCarPlaySetting:(long long)arg1;	// IMP=0x00000000000708ec
- (long long)globalAnnounceCarPlaySetting;	// IMP=0x00000000000707ef
- (void)setGlobalAnnounceHeadphonesSetting:(long long)arg1;	// IMP=0x0000000000070783
- (long long)globalAnnounceHeadphonesSetting;	// IMP=0x0000000000070686
- (void)setGlobalAnnounceSetting:(long long)arg1;	// IMP=0x000000000007061a
- (long long)globalAnnounceSetting;	// IMP=0x000000000007051d
- (void)setGlobalContentPreviewSetting:(long long)arg1;	// IMP=0x00000000000704b1
- (long long)globalContentPreviewSetting;	// IMP=0x00000000000703b4
- (id)allSectionInfo;	// IMP=0x0000000000070279
- (id)allEffectiveSectionInfo;	// IMP=0x000000000007013e
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fff6
- (id)sectionInfoForSectionIDs:(id)arg1;	// IMP=0x000000000006fe47
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;	// IMP=0x000000000006fc98
- (id)sectionInfoForSectionID:(id)arg1;	// IMP=0x000000000006fae9
- (id)effectiveSectionInfoForSectionID:(id)arg1;	// IMP=0x000000000006f915
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;	// IMP=0x000000000006f83c
- (void)removeObserver:(id)arg1;	// IMP=0x000000000006f792
- (void)addObserver:(id)arg1;	// IMP=0x000000000006f6e8
- (void)dealloc;	// IMP=0x000000000006f6a6
- (id)init;	// IMP=0x000000000006f58b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
