//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFDeviceAttributesResource
{
    NSArray *_requiredDeviceIdioms;	// 8 = 0x8
    NSArray *_requiredCapabilities;	// 16 = 0x10
}

+ (_Bool)mustBeAvailableForDisplay;	// IMP=0x00000000000fac11
- (void).cxx_destruct;	// IMP=0x00000000000fabe0
@property(readonly, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, nonatomic) NSArray *requiredDeviceIdioms; // @synthesize requiredDeviceIdioms=_requiredDeviceIdioms;
- (void)refreshAvailability;	// IMP=0x00000000000fa64e
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000000fa14d

@end

