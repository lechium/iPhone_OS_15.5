//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AKDeviceListResponse : NSObject
{
    NSDictionary *_deviceMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000816b
@property(readonly, copy, nonatomic) NSDictionary *deviceMap; // @synthesize deviceMap=_deviceMap;
- (id)_parseDevicesFromResponseBody:(id)arg1;	// IMP=0x0010000000007f41
- (id)initWithResponseBody:(id)arg1;	// IMP=0x0010000000007ec3

@end
