//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeSettingsUI/MCProfileConnectionObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STFamilyMemberGroupSpecifierProvider <MCProfileConnectionObserver>
{
    _Bool _presentedAsModal;	// 8 = 0x8
}

+ (id)providerWithCoordinator:(id)arg1 presentedAsModal:(_Bool)arg2;	// IMP=0x000000000005553d
@property(nonatomic) _Bool presentedAsModal; // @synthesize presentedAsModal=_presentedAsModal;
- (id)totalChildUsageTime:(id)arg1;	// IMP=0x00000000000561af
- (void)imageDidUpdate:(id)arg1;	// IMP=0x0000000000055ff1
- (id)familySpecifiers;	// IMP=0x0000000000055d8b
- (id)createSpecifierForUser:(id)arg1 shouldWarn:(_Bool)arg2;	// IMP=0x0000000000055a97
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000559e4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000558b3
- (void)setCoordinator:(id)arg1;	// IMP=0x00000000000557ab
- (void)dealloc;	// IMP=0x0000000000055718
- (id)init;	// IMP=0x000000000005559a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
