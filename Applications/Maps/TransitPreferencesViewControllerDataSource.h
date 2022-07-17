//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TransitMutablePreferences;
@protocol GEOSurchargeOption;

__attribute__((visibility("hidden")))
@interface TransitPreferencesViewControllerDataSource : NSObject
{
    NSArray *_allTransitPrioritizations;	// 8 = 0x8
    id <GEOSurchargeOption> _surchargeOptions;	// 16 = 0x10
    _Bool _showICFareOption;	// 24 = 0x18
    NSArray *;	// 32 = 0x20
    TransitMutablePreferences *_preferences;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002ddaf7
@property(readonly, copy, nonatomic) TransitMutablePreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) _Bool _isCurrentSelectedTransitModeIndividual;
@property(readonly, nonatomic) int _surchargeOptionValueToDisplayAsSelected;
- (id)_localizedNameForPriorityOption:(int)arg1;	// IMP=0x00100000002dd8db
- (id)_surchargeForIndexPath:(id)arg1;	// IMP=0x00100000002dd7f9
- (int)_sortForIndexPath:(id)arg1;	// IMP=0x00100000002dd74b
- (long long)_modeForIndexPath:(id)arg1;	// IMP=0x00100000002dd66a
- (id)titleForFooterInSection:(long long)arg1;	// IMP=0x00100000002dd62a
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x00100000002dd548
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x00100000002dd49b
@property(readonly, nonatomic) long long numberOfSections;
- (long long)normalizedSectionIndex:(long long)arg1;	// IMP=0x00100000002dd2f5
- (void)_configureWithDisplayHints:(id)arg1;	// IMP=0x00100000002dd171
- (id)initWithPreferences:(id)arg1 displayHints:(id)arg2;	// IMP=0x00100000002dd0c4

@end
