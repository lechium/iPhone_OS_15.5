//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSDate;

@interface PrivacyProxyServiceStatusTime : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _serviceStatus;	// 8 = 0x8
    NSDate *_serviceStatusStartTime;	// 16 = 0x10
    NSDate *_serviceStatusEndTime;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ccc40
- (void).cxx_destruct;	// IMP=0x00000000000cd01a
@property(retain) NSDate *serviceStatusEndTime; // @synthesize serviceStatusEndTime=_serviceStatusEndTime;
@property(retain) NSDate *serviceStatusStartTime; // @synthesize serviceStatusStartTime=_serviceStatusStartTime;
@property unsigned long long serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (id)diagnostics;	// IMP=0x00000000000cce5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ccd89
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ccc48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ccb75
- (id)description;	// IMP=0x00000000000ccb5c
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000cc9b3

@end
