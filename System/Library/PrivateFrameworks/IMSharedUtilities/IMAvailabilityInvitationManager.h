//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, SKStatusPublishingService;
@protocol OS_dispatch_queue;

@interface IMAvailabilityInvitationManager : NSObject
{
    SKStatusPublishingService *_publishingService;	// 8 = 0x8
    NSCache *_dateAttemptedInvitationByHandleCache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dndBackgroundQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000002639
- (void).cxx_destruct;	// IMP=0x00000000000055c3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dndBackgroundQueue; // @synthesize dndBackgroundQueue=_dndBackgroundQueue;
@property(retain, nonatomic) NSCache *dateAttemptedInvitationByHandleCache; // @synthesize dateAttemptedInvitationByHandleCache=_dateAttemptedInvitationByHandleCache;
@property(retain, nonatomic) SKStatusPublishingService *publishingService; // @synthesize publishingService=_publishingService;
- (_Bool)availabilityEnabled;	// IMP=0x0000000000005531
- (_Bool)_isHandleIDEligibleToReceiveAutomaticInvitation:(id)arg1;	// IMP=0x00000000000053b6
- (id)_skHandleForString:(id)arg1;	// IMP=0x000000000000535d
- (id)_invitationCacheKeyForHandleID:(id)arg1 fromHandleID:(id)arg2;	// IMP=0x000000000000528f
- (id)_dndHandleForHandleID:(id)arg1;	// IMP=0x00000000000051ec
- (void)_republishCurrentAvailabilityStatus;	// IMP=0x0000000000005016
- (id)_newDNDModeConfigurationService;	// IMP=0x0000000000004f36
- (void)_invitationPayloadForHandleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004b9f
- (void)_isFocusStatusSharedWithHandle:(id)arg1 fromHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000481c
- (void)isFocusStatusSharedWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004762
- (void)_invitablityForHandle:(id)arg1 fromHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000044e8
- (void)_sharePersonalAvailabilityWithSKHandle:(id)arg1 fromSKHandle:(id)arg2 allowingInvitationOfRemovedUsers:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003d5a
- (void)manuallyRemoveSharingOfFocusStatusWithHandleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003b00
- (id)newDNDGlobalConfigurationService;	// IMP=0x0000000000003a20
@property(readonly, nonatomic, getter=isFocusConfigurationShareAcrossDevicesEnabled) _Bool focusConfigurationShareAcrossDevicesEnabled;
- (void)manuallyShareFocusStatusWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000036b0
- (void)repairSharedFocusStatusFollowingFailedValidationWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002e5c
- (void)attemptIfNeccessaryToAutomaticallyShareFocusStatusWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002705
- (id)init;	// IMP=0x000000000000268e

@end

