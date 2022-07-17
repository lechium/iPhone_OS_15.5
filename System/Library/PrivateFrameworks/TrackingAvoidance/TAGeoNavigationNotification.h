//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSString;

@interface TAGeoNavigationNotification : NSObject <OSLogCoding, TAEventProtocol>
{
    NSDate *_date;	// 8 = 0x8
    unsigned long long _transportType;	// 16 = 0x10
    unsigned long long _navState;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002ab08
- (void).cxx_destruct;	// IMP=0x000000000002ad6a
@property(readonly, nonatomic) unsigned long long navState; // @synthesize navState=_navState;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)getDate;	// IMP=0x000000000002ad3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ad07
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x000000000002ac5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002abd4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ab10
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;	// IMP=0x000000000002a829
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a682
@property(readonly) unsigned long long hash;
- (id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x000000000002a568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
