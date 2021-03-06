//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject
{
    NSString *_productKey;	// 8 = 0x8
    unsigned long long _status;	// 16 = 0x10
    double _downloadPercentComplete;	// 24 = 0x18
}

+ (id)descriptionForStatus:(unsigned long long)arg1;	// IMP=0x0000000000024993
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000246de
- (void).cxx_destruct;	// IMP=0x0000000000024b74
@property(nonatomic) double downloadPercentComplete; // @synthesize downloadPercentComplete=_downloadPercentComplete;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *productKey; // @synthesize productKey=_productKey;
- (id)description;	// IMP=0x00000000000249be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002485f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000246e6
- (id)initWithProductKey:(id)arg1 status:(unsigned long long)arg2 downloadPercentComplete:(double)arg3;	// IMP=0x000000000002463c

@end

