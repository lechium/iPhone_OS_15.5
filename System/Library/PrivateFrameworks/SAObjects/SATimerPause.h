//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SATimerTimerAction-Protocol.h>

@class NSString;

@interface SATimerPause <SATimerTimerAction>
{
}

+ (id)pauseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001188a
+ (id)pause;	// IMP=0x0000000000011878
- (_Bool)mutatingCommand;	// IMP=0x000000000001189c
- (_Bool)requiresResponse;	// IMP=0x0000000000011894
- (id)encodedClassName;	// IMP=0x000000000001186b
- (id)groupIdentifier;	// IMP=0x0000000000011857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

