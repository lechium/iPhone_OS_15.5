//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CARMutableWorkspaceStateChangeRequest
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c2cec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c2cbe
- (void)removeChangeItem:(id)arg1;	// IMP=0x00100000000c2ca1
- (void)addChangeItem:(id)arg1;	// IMP=0x00100000000c2c47
- (void)deactivateSiri;	// IMP=0x00100000000124e5
- (void)activateSiriFloating;	// IMP=0x001000000001246c
- (void)activateSiri;	// IMP=0x0010000000012405
- (void)activateStackedApplication:(id)arg1 withSettings:(id)arg2;	// IMP=0x001000000001230e
- (void)activateStackedApplication:(id)arg1;	// IMP=0x0010000000012248
- (void)activateApplication:(id)arg1 withSettings:(id)arg2;	// IMP=0x0010000000012151
- (void)activateApplication:(id)arg1;	// IMP=0x001000000001208b
- (void)destroyApplication:(id)arg1;	// IMP=0x0010000000011fd4
- (void)deactivateApplication:(id)arg1;	// IMP=0x0010000000011f1d

@end

