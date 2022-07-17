//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKMediaName : NSObject
{
    NSString *_mediaName;	// 8 = 0x8
    NSString *_mediaClass;	// 16 = 0x10
    NSString *_baseName;	// 24 = 0x18
    double _widthInUnits;	// 32 = 0x20
    double _heightInUnits;	// 40 = 0x28
    NSString *_widthStr;	// 48 = 0x30
    long long _units;	// 56 = 0x38
    double _conversionFactor;	// 64 = 0x40
}

+ (id)pkMediaNameWithString:(id)arg1;	// IMP=0x0000000000008c89
@property double conversionFactor; // @synthesize conversionFactor=_conversionFactor;
@property long long units; // @synthesize units=_units;
@property(retain) NSString *widthStr; // @synthesize widthStr=_widthStr;
@property double heightInUnits; // @synthesize heightInUnits=_heightInUnits;
@property double widthInUnits; // @synthesize widthInUnits=_widthInUnits;
@property(retain) NSString *baseName; // @synthesize baseName=_baseName;
@property(retain) NSString *mediaClass; // @synthesize mediaClass=_mediaClass;
@property(retain) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property(readonly) double height; // @dynamic height;
@property(readonly) double width; // @dynamic width;
@property(readonly) _Bool isRoll; // @dynamic isRoll;
@property(readonly, retain) NSString *unitStr; // @dynamic unitStr;
- (void)parseMediaName:(id)arg1;	// IMP=0x0000000000008da2
- (void)dealloc;	// IMP=0x0000000000008d2d
- (id)initWithString:(id)arg1;	// IMP=0x0000000000008cbf

@end
