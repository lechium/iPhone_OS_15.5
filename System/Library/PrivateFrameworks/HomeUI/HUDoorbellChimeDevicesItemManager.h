//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HFMediaAccessoryCommonSettingsDelegate-Protocol.h>

@class NSString;

@interface HUDoorbellChimeDevicesItemManager : HFItemManager <HFMediaAccessoryCommonSettingsDelegate>
{
}

- (void)mediaProfileContainer:(id)arg1 didUpdateSettingKeypath:(id)arg2 value:(id)arg3;	// IMP=0x00000000002d53c3
- (id)enableDoorbellChime:(_Bool)arg1 forItem:(id)arg2;	// IMP=0x00000000002d5111
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000002d496c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

