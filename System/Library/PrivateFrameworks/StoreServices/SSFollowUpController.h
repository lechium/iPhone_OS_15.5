//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpController;

@interface SSFollowUpController : NSObject
{
    FLFollowUpController *_followUpController;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x00000000000c9c3d
- (void).cxx_destruct;	// IMP=0x00000000000cbaa0
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
- (id)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000cb540
- (id)_dismissFollowUpWithIdentifier:(id)arg1;	// IMP=0x00000000000cb3c4
- (id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg1;	// IMP=0x00000000000cabb8
- (id)_createFollowUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000ca91a
- (id)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000ca903
- (id)postFollowUpWithIdentifier:(id)arg1 account:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000ca639
- (id)pendingFollowUpWithIdentifier:(id)arg1;	// IMP=0x00000000000ca392
- (id)dismissFollowUpWithIdentifier:(id)arg1 account:(id)arg2;	// IMP=0x00000000000c9ca6
- (id)dismissFollowUpWithIdentifier:(id)arg1;	// IMP=0x00000000000c9c92
- (id)init;	// IMP=0x00000000000c9b30

@end
