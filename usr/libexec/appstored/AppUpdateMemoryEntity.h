//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSDate, NSNumber, NSString;

@interface AppUpdateMemoryEntity
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_itemID;	// 16 = 0x10
    NSNumber *_evid;	// 24 = 0x18
    long long _parentalControlsRank;	// 32 = 0x20
    NSDate *_releaseDate;	// 40 = 0x28
}

+ (id)defaultProperties;	// IMP=0x002000000011d3ae
+ (Class)databaseEntityClass;	// IMP=0x001000000011d39d
- (void).cxx_destruct;	// IMP=0x001000000011e361
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) long long parentalControlsRank; // @synthesize parentalControlsRank=_parentalControlsRank;
- (id)_zuluDateFormatter;	// IMP=0x001000000011e2b0
- (MISSING_TYPE *)_appsAppleDictionary: /* Error: Ran out of types for this method. */;	// IMP=0x001000000011e210
- (long long)_parentalControlsRank:(id)arg1;	// IMP=0x001000000011e183
- (id)_parentalControlsName:(id)arg1;	// IMP=0x001000000011e0f0
- (long long)_deviceFamilies:(id)arg1;	// IMP=0x001000000011de1e
- (void)_importFromDictionary:(id)arg1;	// IMP=0x001000000011d81a
- (id)_externalVersionIdentifier:(id)arg1;	// IMP=0x001000000011d5e7
- (id)_buyParams:(id)arg1;	// IMP=0x001000000011d3c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011d36e
- (id)description;	// IMP=0x001000000011d25d
@property(readonly, nonatomic) long long softwarePlatform;
- (void)setUpdateState:(long long)arg1;	// IMP=0x001000000011d1f8
@property(nonatomic, getter=isPerDevice) _Bool perDevice;
- (void)setMetricsData:(id)arg1;	// IMP=0x001000000011d185
@property(nonatomic) NSDate *installDate;
@property(nonatomic, getter=isCodeSignatureUpdate) _Bool codeSignatureUpdate;
@property(nonatomic, getter=isBackground) _Bool background;
@property(nonatomic, getter=isOffloaded) _Bool offloaded;
- (_Bool)runsOnIntel;	// IMP=0x001000000011d00a
- (_Bool)runsOnAppleSilicon;	// IMP=0x001000000011cfb6
- (_Bool)requiresRosetta;	// IMP=0x001000000011cf62
- (id)rawUpdateDictionary;	// IMP=0x001000000011cf49
@property(readonly, nonatomic) NSString *parentalControlsName;
@property(readonly, nonatomic, getter=isAppClip) _Bool appClip;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(readonly, nonatomic) NSDate *currentVersionReleaseDate;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithUpdateDictionary:(id)arg1;	// IMP=0x001000000011ccf7
- (id)init;	// IMP=0x001000000011ccc8
- (id)purchase_purchaseInfoForUpdateUserInitiated:(_Bool)arg1;	// IMP=0x00100000001cd245

@end

