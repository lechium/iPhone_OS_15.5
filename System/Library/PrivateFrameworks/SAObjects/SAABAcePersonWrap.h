//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAABAcePersonWrap <SASyncWrap>
{
}

+ (id)acePersonWrapWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000282e9
+ (id)acePersonWrap;	// IMP=0x00000000000282d7
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;	// IMP=0x00000000000282ca
- (id)groupIdentifier;	// IMP=0x00000000000282b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

