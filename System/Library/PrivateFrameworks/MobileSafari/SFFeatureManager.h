//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/WBUFeatureManager.h>

@interface SFFeatureManager : WBUFeatureManager
{
    _Bool _tabDocumentCanHideToolbar;	// 8 = 0x8
}

+ (id)sharedFeatureManager;	// IMP=0x00000000000314aa
@property(nonatomic) _Bool tabDocumentCanHideToolbar; // @synthesize tabDocumentCanHideToolbar=_tabDocumentCanHideToolbar;
@property(readonly, nonatomic) _Bool usesCapsuleInCompactPad;
@property(readonly, nonatomic) _Bool usesFormatMenuInUnifiedTabBar;
@property(readonly, nonatomic) _Bool showRectangularTabsInSeparateBar;
@property(readonly, nonatomic) long long preferredCapsuleLayoutStyle;
@property(readonly, nonatomic) _Bool canUseLoweredCapsule;
- (id)init;	// IMP=0x00000000000314ff

@end
