//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSDIDSServiceStatistics : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    long long _messageCount;	// 16 = 0x10
    long long _bytes;	// 24 = 0x18
    long long _deliveredMessageCount;	// 32 = 0x20
    long long _deliveredBytes;	// 40 = 0x28
}

+ (id)statisticsWithServiceName:(id)arg1 serviceStatisticsDictionary:(id)arg2;	// IMP=0x002000000000da6d
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000da65
- (void).cxx_destruct;	// IMP=0x002000000000e27d
@property(nonatomic) long long deliveredBytes; // @synthesize deliveredBytes=_deliveredBytes;
@property(nonatomic) long long deliveredMessageCount; // @synthesize deliveredMessageCount=_deliveredMessageCount;
@property(nonatomic) long long bytes; // @synthesize bytes=_bytes;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)statisticsAreZero;	// IMP=0x001000000000e1ec
- (_Bool)statisticsAreBogus;	// IMP=0x001000000000e1bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000e10b
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000e013
- (id)description;	// IMP=0x001000000000de79
- (id)statisticsBySummingStatistics:(id)arg1;	// IMP=0x001000000000dd39
- (id)statisticsByDiffingStatistics:(id)arg1;	// IMP=0x001000000000dbf1

@end

