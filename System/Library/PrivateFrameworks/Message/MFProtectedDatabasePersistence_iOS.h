//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence
{
}

+ (id)journalDatabaseName;	// IMP=0x000000000014494c
+ (id)protectedDatabaseName;	// IMP=0x000000000014493f
- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;	// IMP=0x0000000000144a8d
- (void)finishJournalReconciliation:(unsigned long long)arg1;	// IMP=0x00000000001449c9
- (_Bool)protectedDataAvailable;	// IMP=0x0000000000144961
- (_Bool)supportsJournaling;	// IMP=0x0000000000144959

@end
