//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceRibbonConfiguration, MUPlaceDataAvailability;

__attribute__((visibility("hidden")))
@interface MUPlaceRibbonSectionControllerConfiguration : NSObject
{
    GEOPlaceRibbonConfiguration *_ribbonConfiguration;	// 8 = 0x8
    MUPlaceDataAvailability *_availability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004638e
@property(retain, nonatomic) MUPlaceDataAvailability *availability; // @synthesize availability=_availability;
@property(retain, nonatomic) GEOPlaceRibbonConfiguration *ribbonConfiguration; // @synthesize ribbonConfiguration=_ribbonConfiguration;

@end
