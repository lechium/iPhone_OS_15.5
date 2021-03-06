//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSError, SBFMobileKeyBagState;
@protocol SBFUserAuthenticationModelDelegate;

@protocol SBFUserAuthenticationModel <NSObject>
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isUserRequestedEraseEnabled) _Bool userRequestedEraseEnabled;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate;
- (void)synchronize;
- (void)notePasscodeUnlockFailedWithError:(NSError *)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)performPasswordTest:(void (^)(_Bool *))arg1;

@optional
- (void)noteNewMkbDeviceLockState:(SBFMobileKeyBagState *)arg1;
- (void)refreshBlockedState;
- (void)clearBlockedState;
@end

