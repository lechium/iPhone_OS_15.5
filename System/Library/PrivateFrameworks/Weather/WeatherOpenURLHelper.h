//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WeatherOpenURLHelper : NSObject
{
}

+ (id)transientCityFromURLComponents:(id)arg1;	// IMP=0x000000000005298c
+ (id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2;	// IMP=0x0000000000052750
+ (void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2;	// IMP=0x0000000000052366
+ (void)displayCity:(id)arg1 usingController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000520be
+ (_Bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005201d
+ (_Bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2;	// IMP=0x0000000000052008
+ (id)cityFromURL:(id)arg1 withContainerViewController:(id)arg2;	// IMP=0x0000000000051ccf
+ (id)URLForWeatherCityComponents:(id)arg1;	// IMP=0x00000000000519cc
+ (id)URLForCity:(id)arg1;	// IMP=0x000000000005196a

@end

