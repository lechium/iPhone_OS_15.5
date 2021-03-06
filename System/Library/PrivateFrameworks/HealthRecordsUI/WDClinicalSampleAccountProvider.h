//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WDClinicalSampleAccountProviderGateway;

__attribute__((visibility("hidden")))
@interface WDClinicalSampleAccountProvider : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    WDClinicalSampleAccountProviderGateway *_gateway;	// 32 = 0x20
    long long _minCompatibleAPIVersion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000161cb
@property(nonatomic) long long minCompatibleAPIVersion; // @synthesize minCompatibleAPIVersion=_minCompatibleAPIVersion;
@property(retain, nonatomic) WDClinicalSampleAccountProviderGateway *gateway; // @synthesize gateway=_gateway;
@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

