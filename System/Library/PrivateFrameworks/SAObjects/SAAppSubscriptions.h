//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSString;

@interface SAAppSubscriptions <SABackgroundContextObject>
{
}

+ (id)appSubscriptionsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000012172
+ (id)appSubscriptions;	// IMP=0x0000000000012160
@property(copy, nonatomic) NSArray *activeSubscriptions;
- (id)encodedClassName;	// IMP=0x0000000000012153
- (id)groupIdentifier;	// IMP=0x000000000001213f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
