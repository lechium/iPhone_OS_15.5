//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFColorPrimitive-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSString;

@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying>
{
    float _temperatureInMired;	// 8 = 0x8
}

@property(readonly, nonatomic) float temperatureInMired; // @synthesize temperatureInMired=_temperatureInMired;
@property(readonly, copy) NSString *description;
- (id)valueDescriptionInKelvin;	// IMP=0x00000000001d7632
- (id)valueDescription;	// IMP=0x00000000001d75f3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d74f6
- (id)hf_temperatureColorRepresentation;	// IMP=0x00000000001d74ed
- (id)hf_RGBColorRepresentation;	// IMP=0x00000000001d7466
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d741c
@property(readonly, nonatomic) float temperatureInKelvin;
- (id)initWithTemperatureInMired:(float)arg1;	// IMP=0x00000000001d73c6
- (id)initWithTemperatureInKelvin:(float)arg1;	// IMP=0x00000000001d73a5
- (id)init;	// IMP=0x00000000001d72f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

