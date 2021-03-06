//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKFHIRVersion, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccountProviderGateway : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    HKFHIRVersion *_FHIRVersion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016113
@property(copy, nonatomic) HKFHIRVersion *FHIRVersion; // @synthesize FHIRVersion=_FHIRVersion;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

