//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SAUIListenForPronunciationCompleted <SAServerBoundCommand>
{
}

+ (id)listenForPronunciationCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000033c34
+ (id)listenForPronunciationCompleted;	// IMP=0x0000000000033c22
- (_Bool)requiresResponse;	// IMP=0x0000000000033ca4
@property(retain, nonatomic) SASPronunciationData *pronunciationData;
@property(copy, nonatomic) NSString *interactionId;
@property(copy, nonatomic) NSNumber *errorCode;
- (id)encodedClassName;	// IMP=0x0000000000033c15
- (id)groupIdentifier;	// IMP=0x0000000000033c01

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
