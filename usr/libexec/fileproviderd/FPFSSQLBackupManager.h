//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TtC9libfssync19FPFSSQLBackupEngine;

@interface FPFSSQLBackupManager : NSObject
{
    _TtC9libfssync19FPFSSQLBackupEngine *_backupEngine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000058f5
@property(retain, nonatomic) _TtC9libfssync19FPFSSQLBackupEngine *backupEngine; // @synthesize backupEngine=_backupEngine;
- (void)backUpWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005818
- (id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2;	// IMP=0x0010000000005771

@end

