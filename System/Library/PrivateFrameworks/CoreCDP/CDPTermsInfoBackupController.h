//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPDaemonConnection;

@interface CDPTermsInfoBackupController : NSObject
{
    CDPDaemonConnection *_daemonConn;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000011c97
@property(retain, nonatomic) CDPDaemonConnection *daemonConn; // @synthesize daemonConn=_daemonConn;
- (void)fetchTermsAcceptanceForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011997
- (void)saveTermsAcceptance:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000116dd
- (id)init;	// IMP=0x0000000000011687

@end
