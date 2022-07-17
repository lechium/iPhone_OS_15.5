//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSContentProtectionStrategy-Protocol.h>

@class NSString;

@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy>
{
    unsigned long long _dataWritingFileProtection;	// 8 = 0x8
}

- (unsigned long long)_dataWritingOptionForFileProtectionType:(id)arg1;	// IMP=0x000000000006f4f5
- (void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000006f3b6
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006f2f4
- (_Bool)writeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006f2d1
- (id)dataAtPath:(id)arg1;	// IMP=0x000000000006f2b8
- (_Bool)dataIsAvailableAtPath:(id)arg1;	// IMP=0x000000000006f23d
- (id)initWithFileProtectionType:(id)arg1;	// IMP=0x000000000006f1d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
