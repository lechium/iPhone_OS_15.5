//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSMissingMessageMetric : NSObject
{
    long long _reason;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
    NSDictionary *_additionalInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012f630
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
- (_Bool)_shouldReportReasonForExternal;	// IMP=0x000000000012f5ea
- (_Bool)_shouldReportMetricForExternal;	// IMP=0x000000000012f508
- (_Bool)_shouldReportReason;	// IMP=0x000000000012f4cf
- (_Bool)shouldReportMetric;	// IMP=0x000000000012f3f6
- (_Bool)_isInternal;	// IMP=0x000000000012f3ec
@property(readonly, nonatomic) NSNumber *command;
@property(readonly, nonatomic) NSDictionary *payload;
- (id)initWithReason:(long long)arg1 guid:(id)arg2 service:(id)arg3 additionalInformation:(id)arg4;	// IMP=0x000000000012f1da

@end

