//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDEmergencyCallInfoPublisherConfiguration : NSObject <NSSecureCoding>
{
    NSString *_serverHost;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e6b0
- (void).cxx_destruct;	// IMP=0x000000000000e759
@property(copy, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;
- (id)description;	// IMP=0x000000000000e6b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e637
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e58c

@end
