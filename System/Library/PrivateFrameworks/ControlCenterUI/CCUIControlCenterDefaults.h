//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain
{
}

+ (id)standardDefaults;	// IMP=0x000000000002a3a5
- (void)_bindAndRegisterDefaults;	// IMP=0x000000000002a413
- (id)init;	// IMP=0x000000000002a3fa

// Remaining properties
@property(nonatomic) _Bool hasForceTouchedToExpandModule; // @dynamic hasForceTouchedToExpandModule;
@property(nonatomic) _Bool hasLongPressedToExpandModule; // @dynamic hasLongPressedToExpandModule;
@property(readonly, nonatomic) _Bool shouldAlwaysBeEnabled; // @dynamic shouldAlwaysBeEnabled;
@property(readonly, nonatomic) _Bool shouldExcludeControlCenterFromStatusBarOverrides; // @dynamic shouldExcludeControlCenterFromStatusBarOverrides;

@end
