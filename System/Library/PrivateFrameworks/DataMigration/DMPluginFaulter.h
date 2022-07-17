//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataMigration/DMPluginFaulting-Protocol.h>

@class NSString;

@interface DMPluginFaulter : NSObject <DMPluginFaulting>
{
    NSString *_message;	// 8 = 0x8
}

+ (id)_selectorNameFromPluginIdentifier:(id)arg1;	// IMP=0x00000000000020d8
- (void).cxx_destruct;	// IMP=0x0000000000002675
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)vibrationmigrator;	// IMP=0x000000000000264a
- (void)tonemigrator;	// IMP=0x0000000000002638
- (void)timedmigrator;	// IMP=0x0000000000002626
- (void)smsmigrator;	// IMP=0x0000000000002614
- (void)siriSiri;	// IMP=0x0000000000002602
- (void)sbmigrator;	// IMP=0x00000000000025f0
- (void)preferencesInternationalSupportMigrator;	// IMP=0x00000000000025de
- (void)nanomailclientmigrator;	// IMP=0x00000000000025cc
- (void)musiclibrarymigrator;	// IMP=0x00000000000025ba
- (void)mobilemailmigrator;	// IMP=0x00000000000025a8
- (void)mobilebackupmigrator;	// IMP=0x0000000000002596
- (void)messageLegacyAccountsMigrator;	// IMP=0x0000000000002584
- (void)messageAccountsMigrator;	// IMP=0x0000000000002572
- (void)managedconfigurationmigrator;	// IMP=0x0000000000002560
- (void)managedconfigurationmdmmigrator;	// IMP=0x000000000000254e
- (void)managedconfigurationcleanupmigrator;	// IMP=0x000000000000253c
- (void)locationdmigrator;	// IMP=0x000000000000252a
- (void)languageassetmigrator;	// IMP=0x0000000000002518
- (void)keyboardsuimigrator;	// IMP=0x0000000000002506
- (void)keyboardsmigrator;	// IMP=0x00000000000024f4
- (void)iTunesStoremigrator;	// IMP=0x00000000000024e2
- (void)facetimemigrator;	// IMP=0x00000000000024d0
- (void)dataaccessmigratorlegacy;	// IMP=0x00000000000024be
- (void)dataaccessmigrator;	// IMP=0x00000000000024ac
- (void)coreaudioHAENDataMigrator;	// IMP=0x000000000000249a
- (void)cloudrecentsmigrator;	// IMP=0x0000000000002488
- (void)certuimigrator;	// IMP=0x0000000000002476
- (void)calendarmigrator;	// IMP=0x0000000000002464
- (void)appleaccountmigrator;	// IMP=0x0000000000002452
- (void)appleaccountmergebuddyprovisioningresponsemigrator;	// IMP=0x0000000000002440
- (void)airtrafficmigrator;	// IMP=0x000000000000242e
- (void)addressbookmigrator;	// IMP=0x000000000000241c
- (void)accountsobsolescencemigrator;	// IMP=0x000000000000240a
- (void)accountsmigrator;	// IMP=0x00000000000023f8
- (void)accountsettingsmigrator;	// IMP=0x00000000000023e6
- (void)WiFiDataMigrator;	// IMP=0x00000000000023d4
- (void)WebBookmarksmigrator;	// IMP=0x00000000000023c2
- (void)VoiceShortcutsShortcutsMigrator;	// IMP=0x00000000000023b0
- (void)VideosMigrator;	// IMP=0x000000000000239e
- (void)StocksMigrator;	// IMP=0x000000000000238c
- (void)SoftwareUpdateBridge;	// IMP=0x000000000000237a
- (void)PreferencesMigrator;	// IMP=0x0000000000002368
- (void)PassbookDataMigrator;	// IMP=0x0000000000002356
- (void)NanoHealthMigrator;	// IMP=0x0000000000002344
- (void)NanoAudioControlMigrator;	// IMP=0x0000000000002332
- (void)MobileSlideShow;	// IMP=0x0000000000002320
- (void)MobileSafarimigrator;	// IMP=0x000000000000230e
- (void)MobileInstallationSystemAppMigrator;	// IMP=0x00000000000022fc
- (void)MobileInstallationAppUserDataMigrator;	// IMP=0x00000000000022ea
- (void)MobileGestaltMobileGestaltMigrator;	// IMP=0x00000000000022d8
- (void)MobileContainerManagerContainerMigrator;	// IMP=0x00000000000022c6
- (void)MobileAsset;	// IMP=0x00000000000022b4
- (void)MapsDataClassMigratormigrator;	// IMP=0x00000000000022a2
- (void)MSUDataMigrator;	// IMP=0x0000000000002290
- (void)MKBMigrator;	// IMP=0x000000000000227e
- (void)LaunchServicesMigrator;	// IMP=0x000000000000226c
- (void)HealthMigrator;	// IMP=0x000000000000225a
- (void)CookieDataMigratormigrator;	// IMP=0x0000000000002248
- (void)CommCenterMigrator;	// IMP=0x0000000000002236
- (void)CloudTabsMigratormigrator;	// IMP=0x0000000000002224
- (void)CallHistoryDataMigrator;	// IMP=0x0000000000002212
- (void)BuddyMigrator;	// IMP=0x0000000000002200
- (void)AnisetteMigrator;	// IMP=0x00000000000021ee
- (void)AccessibilityAccessibilityDataMigration;	// IMP=0x00000000000021dc
- (void)_fault;	// IMP=0x0000000000002092
- (void)faultWithPluginIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x0000000000001fdd

@end
