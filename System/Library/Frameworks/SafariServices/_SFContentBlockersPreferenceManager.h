//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSContentBlockersPreferenceManager.h>

#import <SafariServices/SFContentBlockerManagerObserver-Protocol.h>

@class NSString;

@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver>
{
    _Bool _hasEnabledContentBlockers;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool hasEnabledContentBlockers; // @synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;	// IMP=0x000000000005a635
- (void)_checkForContentBlockers;	// IMP=0x000000000005a43f
- (void)invalidate;	// IMP=0x000000000005a3ec
- (id)initWithPerSitePreferencesStore:(id)arg1;	// IMP=0x000000000005a34d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
