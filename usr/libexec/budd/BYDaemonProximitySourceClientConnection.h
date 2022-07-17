//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BYDaemonBackupController, NSObject, NSString, SASProximitySession;
@protocol OS_voucher;

@interface BYDaemonProximitySourceClientConnection
{
    SASProximitySession *_session;	// 8 = 0x8
    BYDaemonBackupController *_backupController;	// 16 = 0x10
    NSObject<OS_voucher> *_clientVoucher;	// 24 = 0x18
}

+ (id)daemonProtocolInterface;	// IMP=0x0020000000004e5c
- (void).cxx_destruct;	// IMP=0x00200000000057ae
@property(retain) NSObject<OS_voucher> *clientVoucher; // @synthesize clientVoucher=_clientVoucher;
@property(retain) BYDaemonBackupController *backupController; // @synthesize backupController=_backupController;
@property(retain) SASProximitySession *session; // @synthesize session=_session;
- (void)syncCompletedWithErrors:(id)arg1;	// IMP=0x00100000000055f8
- (void)syncProgress:(double)arg1;	// IMP=0x0010000000005584
- (void)backupUpdatedProgress:(double)arg1 estimatedTimeRemaining:(unsigned long long)arg2;	// IMP=0x001000000000548c
- (void)backupCompletedWithError:(id)arg1 dateOfLastBackup:(id)arg2;	// IMP=0x001000000000535c
- (void)startMigration;	// IMP=0x0010000000005356
- (void)prepareForMigrationToDevice:(id)arg1;	// IMP=0x0010000000005350
- (void)receivedBackupAction:(id)arg1;	// IMP=0x001000000000526f
- (void)finishedWithError:(id)arg1;	// IMP=0x00100000000051df
- (void)invalidate;	// IMP=0x00100000000050f8
- (void)activateWithSharingChannel:(id)arg1;	// IMP=0x0010000000004f15
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000004e7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
