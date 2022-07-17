//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INUserActivityExecutionInfo
{
    NSString *_userActivityType;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000000001a1d83
- (void).cxx_destruct;	// IMP=0x00000000001a1d70
@property(readonly, copy, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
- (_Bool)canRunOnLocalDevice;	// IMP=0x00000000001a1c62
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4;	// IMP=0x00000000001a1bc8
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;	// IMP=0x00000000001a1bb0

@end
