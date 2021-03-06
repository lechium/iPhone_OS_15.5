//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAdvertisingSettings-Protocol.h>

@class NSString;
@protocol SXAutoPlacementLayout;

@interface SXDebugAdvertisementSettings : NSObject <SXAdvertisingSettings>
{
    unsigned long long _frequency;	// 8 = 0x8
    unsigned long long _bannerType;	// 16 = 0x10
    id <SXAutoPlacementLayout> _layout;	// 24 = 0x18
    struct _SXConvertibleValue _distanceFromMedia;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003cef2
@property(readonly, nonatomic) struct _SXConvertibleValue distanceFromMedia; // @synthesize distanceFromMedia=_distanceFromMedia;
@property(readonly, nonatomic) id <SXAutoPlacementLayout> layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
@property(readonly, nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
- (id)initWithFrequency:(unsigned long long)arg1 bannerType:(id)arg2 layout:(id)arg3 distanceFromMedia:(struct _SXConvertibleValue)arg4;	// IMP=0x000000000003cd46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

