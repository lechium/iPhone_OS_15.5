//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RCAdditions)
- (_Bool)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;	// IMP=0x0000000000055c87
- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;	// IMP=0x0000000000055702
- (_Bool)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;	// IMP=0x00000000000555e4
- (_Bool)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;	// IMP=0x0000000000055429
- (_Bool)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;	// IMP=0x0000000000055303
- (long long)rc_dataProtectionKeyBagState;	// IMP=0x00000000000552fb
@end

