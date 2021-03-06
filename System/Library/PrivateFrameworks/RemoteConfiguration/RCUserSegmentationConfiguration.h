//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/NSSecureCoding-Protocol.h>

@class NSString;

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding>
{
    unsigned long long _foregroundRefreshRate;	// 8 = 0x8
    unsigned long long _backgroundRefreshRate;	// 16 = 0x10
    unsigned long long _modThreshold;	// 24 = 0x18
    unsigned long long _modMax;	// 32 = 0x20
    NSString *_endpointURLString;	// 40 = 0x28
    NSString *_widgetEndpointURLString;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000040b8
+ (id)userSegmentationConfigurationWithConfigDict:(id)arg1 environment:(unsigned long long)arg2;	// IMP=0x000000000000320f
+ (id)defaultConfiguration;	// IMP=0x00000000000031c1
- (void).cxx_destruct;	// IMP=0x00000000000040fc
@property(readonly, copy, nonatomic) NSString *widgetEndpointURLString; // @synthesize widgetEndpointURLString=_widgetEndpointURLString;
@property(readonly, copy, nonatomic) NSString *endpointURLString; // @synthesize endpointURLString=_endpointURLString;
@property(readonly, nonatomic) unsigned long long modMax; // @synthesize modMax=_modMax;
@property(readonly, nonatomic) unsigned long long modThreshold; // @synthesize modThreshold=_modThreshold;
@property(readonly, nonatomic) unsigned long long backgroundRefreshRate; // @synthesize backgroundRefreshRate=_backgroundRefreshRate;
@property(readonly, nonatomic) unsigned long long foregroundRefreshRate; // @synthesize foregroundRefreshRate=_foregroundRefreshRate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003ed9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003ccb
- (id)description;	// IMP=0x0000000000003bbf
- (unsigned long long)hash;	// IMP=0x0000000000003a00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000037f9
- (id)initWithForegroundRefreshRate:(unsigned long long)arg1 backgroundRefreshRate:(unsigned long long)arg2 modThreshold:(unsigned long long)arg3 modMax:(unsigned long long)arg4 endpointURLString:(id)arg5 widgetEndpointURLString:(id)arg6;	// IMP=0x0000000000003713

@end

