//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000037bfd3
- (void).cxx_destruct;	// IMP=0x000000000037bfc2
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)_scanAccounts;	// IMP=0x000000000037ba6d
- (void)_scanCloudZones;	// IMP=0x000000000037b86d
- (void)_scanHomes;	// IMP=0x000000000037b66d
- (void)scanObjects;	// IMP=0x000000000037b58e
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000037b4fc

@end

