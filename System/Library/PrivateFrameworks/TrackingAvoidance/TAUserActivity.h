//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/OSLogCoding-Protocol.h>
#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSDate, NSString;

@interface TAUserActivity : NSObject <OSLogCoding, TAEventProtocol>
{
    unsigned long long _activityType;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000033c67
- (void).cxx_destruct;	// IMP=0x0000000000033e58
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
- (id)getDate;	// IMP=0x0000000000033e36
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x0000000000033d8a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033d18
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033c6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033c34
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;	// IMP=0x00000000000339da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033860
@property(readonly) unsigned long long hash;
- (id)initWithActivityType:(unsigned long long)arg1 date:(id)arg2;	// IMP=0x000000000003375c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

