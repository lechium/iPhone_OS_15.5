//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>
#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class MNPlannedDestination, NSString;

__attribute__((visibility("hidden")))
@interface MNTimeballSubscription : NSObject <MNJSONOutput, NSCopying, NSSecureCoding>
{
    MNPlannedDestination *_destination;	// 8 = 0x8
    long long _options;	// 16 = 0x10
    unsigned long long _refreshPolicy;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bb465
+ (id)subscriptionForDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;	// IMP=0x00000000000bafa2
- (void).cxx_destruct;	// IMP=0x00000000000bb5f6
@property(readonly, nonatomic) unsigned long long refreshPolicy; // @synthesize refreshPolicy=_refreshPolicy;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) MNPlannedDestination *destination; // @synthesize destination=_destination;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bb539
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bb46d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bb326
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb142
- (id)jsonDictionary;	// IMP=0x00000000000baff4

// Remaining properties
@property(readonly) Class superclass;

@end
