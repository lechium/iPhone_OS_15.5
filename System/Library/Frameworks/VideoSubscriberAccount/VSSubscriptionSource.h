//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>
{
    long long _kind;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037f15
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;	// IMP=0x0000000000037d0f
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;	// IMP=0x0000000000037bea
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;	// IMP=0x0000000000037af3
+ (id)currentSource;	// IMP=0x00000000000377f5
- (void).cxx_destruct;	// IMP=0x00000000000380c8
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (id)description;	// IMP=0x0000000000038056
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037ffc
- (unsigned long long)hash;	// IMP=0x0000000000037fc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037f73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037f1d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037e95
- (id)init;	// IMP=0x0000000000037e31

@end

