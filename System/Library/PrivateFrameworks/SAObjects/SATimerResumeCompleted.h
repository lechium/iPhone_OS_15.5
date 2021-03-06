//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SATimerObject;

@interface SATimerResumeCompleted <SAServerBoundCommand>
{
}

+ (id)resumeCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000011c58
+ (id)resumeCompleted;	// IMP=0x0000000000011c46
- (_Bool)requiresResponse;	// IMP=0x0000000000011c84
@property(retain, nonatomic) SATimerObject *timer;
- (id)encodedClassName;	// IMP=0x0000000000011c39
- (id)groupIdentifier;	// IMP=0x0000000000011c25

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

