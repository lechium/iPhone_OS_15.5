//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXFeedbackSender : NSObject
{
    unsigned long long _feedbackType;	// 8 = 0x8
    _Bool _userLikedResults;	// 16 = 0x10
}

- (void)_incrementMessageTracerCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;	// IMP=0x00000000003be9f8
- (void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;	// IMP=0x00000000003be9f2
- (void)_incrementAGGDCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;	// IMP=0x00000000003be943
- (void)_incrementCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;	// IMP=0x00000000003be931
- (void)_incrementCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;	// IMP=0x00000000003be91f
- (void)_sendFeedbackEntryToOSService:(id)arg1;	// IMP=0x00000000003be85f
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000000003be859
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000003be7a0
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000003be6ff
- (id)generateFeedbackParamsStringForEntry:(id)arg1;	// IMP=0x00000000003be57c
- (void)testTalkToServer;	// IMP=0x00000000003be481
- (_Bool)sendPendingFeedbackToServer;	// IMP=0x00000000003be46b
- (_Bool)sendFeedbackWithFeedbackEntryUUID:(id)arg1;	// IMP=0x00000000003be455
- (void)sendFeedbackToServer:(id)arg1;	// IMP=0x00000000003be15e
- (void)sendFeedback:(id)arg1 forFeedbackType:(unsigned long long)arg2;	// IMP=0x00000000003be104

@end

