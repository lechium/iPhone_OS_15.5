//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAAlarmAceAlarmWrap <SASyncWrap>
{
}

+ (id)aceAlarmWrapWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000008c34
+ (id)aceAlarmWrap;	// IMP=0x0000000000008c22
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;	// IMP=0x0000000000008c15
- (id)groupIdentifier;	// IMP=0x0000000000008c01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end
