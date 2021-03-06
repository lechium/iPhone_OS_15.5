//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface URLRestorationAction
{
    _Bool _resetUI;	// 8 = 0x8
    _Bool _compatibleWithNavigation;	// 9 = 0x9
}

@property(nonatomic) _Bool compatibleWithNavigation; // @synthesize compatibleWithNavigation=_compatibleWithNavigation;
@property(nonatomic) _Bool resetUI; // @synthesize resetUI=_resetUI;
- (_Bool)shouldResetUI;	// IMP=0x001000000090ef56
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x001000000090ef4e
- (_Bool)isCompatibleWithNavigation;	// IMP=0x001000000090ef3e
- (id)initWithResetUI:(_Bool)arg1 compatibleWithNavigation:(_Bool)arg2;	// IMP=0x001000000090eec9

@end

