//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIMenu, _UIMenuBuilder;

__attribute__((visibility("hidden")))
@interface _UIMainMenuSystem
{
    _UIMenuBuilder *_automaticallyRebuildingBuilder;	// 8 = 0x8
}

+ (id)_sharedSystem;	// IMP=0x00000000000614df
- (void).cxx_destruct;	// IMP=0x0000000000063232
- (_Bool)_buildMenuWithBuilder:(id)arg1 fromResponderChain:(id)arg2 atLocation:(struct CGPoint)arg3 inCoordinateSpace:(id)arg4;	// IMP=0x0000000000062a01
@property(readonly, nonatomic) UIMenu *_rootMenu;
@property(readonly, nonatomic) NSArray *_keyCommands;
- (void)_automaticallyRebuildIfNeeded;	// IMP=0x0000000000062938
- (void)setNeedsRebuild;	// IMP=0x00000000000628ee
- (void)dealloc;	// IMP=0x00000000000628bf
- (id)_init;	// IMP=0x0000000000061574

@end
