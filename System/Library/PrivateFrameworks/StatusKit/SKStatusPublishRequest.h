//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString, SKStatusPayload;

@interface SKStatusPublishRequest : NSObject <NSSecureCoding>
{
    _Bool _isScheduledRequest;	// 8 = 0x8
    _Bool _isSecondaryDeviceRepublish;	// 9 = 0x9
    SKStatusPayload *_statusPayload;	// 16 = 0x10
    NSString *_statusUniqueIdentifier;	// 24 = 0x18
    NSDate *_dateCreated;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000080c2
- (void).cxx_destruct;	// IMP=0x0000000000008423
@property(nonatomic) _Bool isSecondaryDeviceRepublish; // @synthesize isSecondaryDeviceRepublish=_isSecondaryDeviceRepublish;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *statusUniqueIdentifier; // @synthesize statusUniqueIdentifier=_statusUniqueIdentifier;
@property(nonatomic) _Bool isScheduledRequest; // @synthesize isScheduledRequest=_isScheduledRequest;
@property(readonly, copy, nonatomic) SKStatusPayload *statusPayload; // @synthesize statusPayload=_statusPayload;
- (id)description;	// IMP=0x00000000000082bd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000817c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000080ca
- (id)initWithStatusPayload:(id)arg1 isScheduledRequest:(_Bool)arg2;	// IMP=0x000000000000809e
- (id)initWithStatusPayload:(id)arg1;	// IMP=0x0000000000007fd9

@end
