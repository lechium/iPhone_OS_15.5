//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface HDCloudSyncSharedSummaryManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

+ (void)unitTesting_setUrgentLatency:(double)arg1;	// IMP=0x00000000006f674a
- (void).cxx_destruct;	// IMP=0x00000000006f6758
- (void)scheduleUrgentPush;	// IMP=0x00000000006f66c4
- (void)scheduleBackgroundPush;	// IMP=0x00000000006f6498
- (id)revokeParticipantWithOutgoingSummarySharingEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f6124
- (id)pull:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f5d19
- (id)push:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f57af
- (id)synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f54bb
- (id)setupSharingWithOutgoingSummarySharingEntry:(id)arg1 sharingAuthorizations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006f506a
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000006f5006

@end

