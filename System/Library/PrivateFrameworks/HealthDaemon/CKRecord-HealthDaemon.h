//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (HealthDaemon)
+ (id)hd_recordWithSystemData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004a1c69
- (id)hd_systemData;	// IMP=0x00000000004a205b
- (id)hd_optionalEncryptedValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00000000004a1bb6
- (id)hd_optionalValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00000000004a1b2f
- (id)hd_requiredEncryptedValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00000000004a19fe
- (id)hd_requiredValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00000000004a18e9
- (_Bool)hd_setEncryptedValuesIfChanged:(id)arg1;	// IMP=0x00000000004a17ef
- (_Bool)hd_setEncryptedValue:(id)arg1 ifChangedForKey:(id)arg2;	// IMP=0x00000000004a1654
- (_Bool)hd_setValuesIfChanged:(id)arg1;	// IMP=0x00000000004a155a
- (_Bool)hd_setValue:(id)arg1 ifChangedForKey:(id)arg2;	// IMP=0x00000000004a1462
- (_Bool)hd_isCKShare;	// IMP=0x00000000004a145a
- (_Bool)hd_equivalentRecord:(id)arg1;	// IMP=0x00000000004a1270
@end

