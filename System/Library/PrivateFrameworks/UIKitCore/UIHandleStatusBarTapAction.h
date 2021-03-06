//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@interface UIHandleStatusBarTapAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000007193df
- (long long)UIActionType;	// IMP=0x00000000007193d4
@property(readonly, nonatomic) unsigned long long statusBarStyleOverride;
@property(readonly, nonatomic) long long statusBarStyle;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007192d5
- (id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(unsigned long long)arg2;	// IMP=0x00000000007191e1
- (id)initWithStatusBarStyleOverride:(unsigned long long)arg1;	// IMP=0x000000000071912f
- (id)initWithStatusBarStyle:(long long)arg1;	// IMP=0x000000000071907d

@end

