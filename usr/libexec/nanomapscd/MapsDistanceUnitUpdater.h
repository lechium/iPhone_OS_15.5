//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOKeyBagNotification, NSString;

__attribute__((visibility("hidden")))
@interface MapsDistanceUnitUpdater : NSObject
{
    int _unitChangedToken;	// 8 = 0x8
    GEOKeyBagNotification *_keybagNotification;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003f555
@property(retain, nonatomic) GEOKeyBagNotification *keybagNotification; // @synthesize keybagNotification=_keybagNotification;
@property(nonatomic) int unitChangedToken; // @synthesize unitChangedToken=_unitChangedToken;
- (void)_updateDistanceUnit;	// IMP=0x001000000003f104
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x001000000003eff0
- (void)_localeDidChange:(id)arg1;	// IMP=0x001000000003eecf
- (void)stop;	// IMP=0x001000000003edc4
- (void)start;	// IMP=0x001000000003eb29
- (void)dealloc;	// IMP=0x001000000003eaeb
- (id)initWithKeyBagNotification:(id)arg1;	// IMP=0x001000000003ea80
- (id)init;	// IMP=0x001000000003ea26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

