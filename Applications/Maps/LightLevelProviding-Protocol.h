//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol LightLevelObserver, LightLevelProviding;

@protocol LightLevelProviding <NSObject>
+ (id <LightLevelProviding>)sharedController;
@property(readonly, nonatomic) _Bool shouldUseNightMode;
@property(readonly, nonatomic) long long currentLightLevel;
- (void)reloadForChangedLightLevelTrackers;
- (void)removeObserver:(id <LightLevelObserver>)arg1;
- (void)addObserver:(id <LightLevelObserver>)arg1;
@end

