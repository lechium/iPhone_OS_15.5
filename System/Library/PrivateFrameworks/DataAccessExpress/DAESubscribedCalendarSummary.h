//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataAccessExpress/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface DAESubscribedCalendarSummary : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_notes;	// 16 = 0x10
    NSString *_color;	// 24 = 0x18
    double _refreshInterval;	// 32 = 0x20
    NSString *_subscriptionID;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
    NSURL *_subscriptionURL;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016e5d
- (void).cxx_destruct;	// IMP=0x0000000000016f1d
@property(retain, nonatomic) NSURL *subscriptionURL; // @synthesize subscriptionURL=_subscriptionURL;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016d86
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016bc7

@end

