//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAUserConfidenceScore <SAAceSerializable>
{
}

+ (id)userConfidenceScoreWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000712d
+ (id)userConfidenceScore;	// IMP=0x000000000000711b
@property(copy, nonatomic) NSString *sharedUserId;
@property(nonatomic) long long confidenceScore;
- (id)encodedClassName;	// IMP=0x000000000000710e
- (id)groupIdentifier;	// IMP=0x00000000000070fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
