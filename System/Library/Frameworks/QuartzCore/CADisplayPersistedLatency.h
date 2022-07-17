//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedLatency : NSObject <NSSecureCoding>
{
    NSString *_uuid;	// 8 = 0x8
    NSDictionary *_mode;	// 16 = 0x10
    double _latency;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000257706
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(copy, nonatomic) NSDictionary *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002575d1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002574a3
- (id)description;	// IMP=0x000000000025740c
- (void)dealloc;	// IMP=0x000000000025739f

@end
