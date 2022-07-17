//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WBSSettingsSyncEngineAccess-Protocol.h>

@class NSArray, NSString, WBSStartPageSectionManager;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess>
{
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004503
- (_Bool)_isShowBackgroundImageEnabled;	// IMP=0x000000000000444b
@property(readonly, nonatomic) _Bool backgroundImageAppearanceIsLight;
@property(readonly, nonatomic) _Bool backgroundImageExists;
@property(readonly, nonatomic) NSArray *syncSettingsUpDictionary;
- (id)_startPageSectionOrder;	// IMP=0x0000000000003bd7
- (void)_updateStartPageSectionOrder:(id)arg1;	// IMP=0x000000000000359d
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)arg1;	// IMP=0x0000000000003457
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)arg1 record:(id)arg2;	// IMP=0x0000000000003345
- (id)startPageSectionsManager;	// IMP=0x000000000000330a
- (void)_updateStartPageBackgroundImageWithRecord:(id)arg1;	// IMP=0x0000000000002ea2
- (void)didDeleteRemoteRecordWithID:(id)arg1;	// IMP=0x0000000000002c5c
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)arg1;	// IMP=0x0000000000002a0e
- (_Bool)syncEnabled;	// IMP=0x00000000000029f5
- (long long)_settingForValue:(id)arg1;	// IMP=0x0000000000002888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
