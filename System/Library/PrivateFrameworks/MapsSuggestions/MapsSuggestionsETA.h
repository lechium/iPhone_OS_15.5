//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsJSONable-Protocol.h>
#import <MapsSuggestions/NSCopying-Protocol.h>
#import <MapsSuggestions/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate, NSString;

@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying, MapsSuggestionsJSONable>
{
    int _transportType;	// 8 = 0x8
    double _seconds;	// 16 = 0x10
    NSString *_shortTrafficString;	// 24 = 0x18
    NSString *_longTrafficString;	// 32 = 0x20
    NSString *_writtenRouteName;	// 40 = 0x28
    NSString *_spokenRouteName;	// 48 = 0x30
    NSDate *_time;	// 56 = 0x38
    CLLocation *_location;	// 64 = 0x40
    NSString *_originator;	// 72 = 0x48
}

+ (id)ETAWithData:(id)arg1;	// IMP=0x0000000000038b92
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003846b
- (void).cxx_destruct;	// IMP=0x000000000003943a
@property(readonly, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *spokenRouteName; // @synthesize spokenRouteName=_spokenRouteName;
@property(readonly, nonatomic) NSString *writtenRouteName; // @synthesize writtenRouteName=_writtenRouteName;
@property(readonly, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(readonly, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(readonly, nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(readonly, copy) NSString *description;
- (id)objectForJSON;	// IMP=0x0000000000038ec4
- (id)nameForJSON;	// IMP=0x0000000000038eb7
- (id)data;	// IMP=0x0000000000038a28
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038593
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038473
- (_Bool)isBetterThanETA:(id)arg1 requirements:(id)arg2;	// IMP=0x000000000003805b
- (_Bool)isValidForLocation:(id)arg1 requirements:(id)arg2;	// IMP=0x0000000000037bdf
- (id)trafficString;	// IMP=0x0000000000037bcd
@property(readonly, nonatomic) double age;
- (_Bool)isEqualToETA:(id)arg1;	// IMP=0x0000000000037900
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003788d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037831
- (id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4;	// IMP=0x0000000000037763
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8;	// IMP=0x00000000000375b9
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8 originator:(id)arg9;	// IMP=0x00000000000371be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

