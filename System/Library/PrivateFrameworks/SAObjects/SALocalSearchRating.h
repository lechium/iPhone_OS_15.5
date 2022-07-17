//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SALocalSearchRating <SAAceSerializable>
{
}

+ (id)ratingWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001b8df
+ (id)rating;	// IMP=0x000000000001b8cd
@property(nonatomic) double value;
@property(copy, nonatomic) NSString *providerId;
@property(nonatomic) double maxValue;
@property(nonatomic) long long count;
- (id)encodedClassName;	// IMP=0x000000000001b8c0
- (id)groupIdentifier;	// IMP=0x000000000001b8ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
