//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REElementDataSourceProperties-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol REElementDataSourceActivityDelegate, REElementDataSourceDelegate;

@interface REElementDataSource : NSObject <REElementDataSourceProperties>
{
    id <REElementDataSourceActivityDelegate> _activityDelegate;	// 8 = 0x8
    _Bool _running;	// 16 = 0x10
    _Bool _allowsLocationUse;	// 17 = 0x11
    _Bool _unlockedSinceBoot;	// 18 = 0x12
    id <REElementDataSourceDelegate> _delegate;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    NSString *_logHeader;	// 40 = 0x28
}

+ (unsigned long long)elementContentMode;	// IMP=0x00000000000186c3
+ (_Bool)wantsAutomaticFetching;	// IMP=0x00000000000186bb
+ (_Bool)wantsReloadForFirstDeviceUnlock;	// IMP=0x00000000000186b3
+ (_Bool)wantsReloadForSignificantTimeChange;	// IMP=0x00000000000186ab
+ (CDStruct_2ec95fd7)minimumSupportedSystemVersion;	// IMP=0x0000000000018640
+ (_Bool)supportsPersistence;	// IMP=0x0000000000018638
+ (_Bool)wantsLocationInUseAsserton;	// IMP=0x0000000000018630
+ (_Bool)wantsAppPrewarm;	// IMP=0x0000000000018628
+ (id)overrideLocalizedDataSourceName;	// IMP=0x0000000000018620
+ (id)overrideDataSourceImage;	// IMP=0x0000000000018618
+ (id)applicationBundleIdentifier;	// IMP=0x0000000000018606
+ (id)bundleIdentifier;	// IMP=0x0000000000105689
+ (_Bool)drivenByUserInteraction;	// IMP=0x00000000000185fe
+ (_Bool)wantsPrivateQueue;	// IMP=0x00000000000185f6
+ (id)contentAttributes;	// IMP=0x00000000000184ed
- (void).cxx_destruct;	// IMP=0x00000000000189db
@property(readonly, nonatomic, getter=hasUnlockedSinceBoot) _Bool unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property(readonly, nonatomic) NSString *logHeader; // @synthesize logHeader=_logHeader;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <REElementDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *dataSourceProperties;
@property(readonly, nonatomic) NSString *name;
- (void)loadLoggingHeader;	// IMP=0x00000000000187e5
- (void)finishActivity:(id)arg1;	// IMP=0x0000000000018789
- (void)beginActivity:(id)arg1;	// IMP=0x000000000001872d
- (void)setActivityDelegate:(id)arg1;	// IMP=0x000000000001871c
- (id)activityDelegate;	// IMP=0x0000000000018706
- (void)finishFetchingData;	// IMP=0x00000000000186ea
- (void)beginFetchingData;	// IMP=0x00000000000186ce
- (id)complicationDescriptor;	// IMP=0x00000000000186a3
- (void)setUnlockedSinceBoot:(_Bool)arg1;	// IMP=0x000000000001869a
- (void)setRunning:(_Bool)arg1;	// IMP=0x0000000000018691
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;	// IMP=0x000000000001868b
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;	// IMP=0x0000000000018685
- (void)resume;	// IMP=0x000000000001867f
- (void)pause;	// IMP=0x0000000000018679
- (void)getElementsInSection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018664
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001056b0
@property(readonly, nonatomic) NSArray *supportedSections;
- (id)init;	// IMP=0x0000000000018499
- (void)collectLoggableState:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018a0a

@end

