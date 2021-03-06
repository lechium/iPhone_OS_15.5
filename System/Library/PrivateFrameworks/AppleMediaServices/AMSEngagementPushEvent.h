//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSEngagementRequest, NSArray, NSDictionary;

@interface AMSEngagementPushEvent : NSObject <NSSecureCoding>
{
    NSDictionary *_data;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    AMSEngagementRequest *_request;	// 24 = 0x18
}

+ (id)archiveClasses;	// IMP=0x000000000012786e
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000127866
- (void).cxx_destruct;	// IMP=0x0000000000127983
@property(retain, nonatomic) AMSEngagementRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012771f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012763c

@end

