//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBLockScreenPluginMutableAppearance-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext <SBLockScreenPluginMutableAppearance>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017847

// Remaining properties
@property(nonatomic) long long backgroundStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *elementOverrides;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property(nonatomic) long long notificationBehavior;
@property(nonatomic) struct CGRect presentationRegion;
@property(nonatomic) long long presentationStyle;
@property(nonatomic) unsigned long long restrictedCapabilities;
@property(readonly) Class superclass;

@end

