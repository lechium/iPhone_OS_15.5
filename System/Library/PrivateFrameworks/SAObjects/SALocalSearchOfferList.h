//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SALocalSearchOfferList <SAAceSerializable>
{
}

+ (id)offerListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002914e
+ (id)offerList;	// IMP=0x000000000002913c
@property(copy, nonatomic) NSString *providerId;
@property(copy, nonatomic) NSArray *offers;
- (id)encodedClassName;	// IMP=0x000000000002912f
- (id)groupIdentifier;	// IMP=0x000000000002911b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
