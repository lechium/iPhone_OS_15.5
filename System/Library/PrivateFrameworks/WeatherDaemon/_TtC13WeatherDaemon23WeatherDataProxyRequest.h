//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherDaemon/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface _TtC13WeatherDaemon23WeatherDataProxyRequest : NSObject <NSSecureCoding>
{
    MISSING_TYPE *requests;	// 8 = 0x8
    MISSING_TYPE *location;	// 16 = 0x10
    MISSING_TYPE *options;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0000000000092600
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000092590
- (void).cxx_destruct;	// IMP=0x0000000000093370
- (id)init;	// IMP=0x0000000000093310
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093290
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000092bb0

@end
