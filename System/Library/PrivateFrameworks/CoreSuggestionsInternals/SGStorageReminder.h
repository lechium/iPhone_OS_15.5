//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/SGReminder.h>

@class NSString, SGDuplicateKey, SGStorageLocation;

@interface SGStorageReminder : SGReminder
{
    SGDuplicateKey *_duplicateKey;	// 8 = 0x8
    SGStorageLocation *_dueStorageLocation;	// 16 = 0x10
    NSString *_sourceKey;	// 24 = 0x18
}

+ (id)storageReminderWithPrimaryKey:(long long)arg1 store:(id)arg2;	// IMP=0x00000000002913a0
+ (id)storageReminderFromEntity:(id)arg1 origin:(id)arg2;	// IMP=0x0000000000290bab
+ (id)storageReminderFromDuplicateKey:(id)arg1 store:(id)arg2;	// IMP=0x000000000029067c
+ (id)storageReminderFromEntity:(id)arg1 store:(id)arg2;	// IMP=0x0000000000290506
+ (id)storageReminderFromRecordId:(id)arg1 store:(id)arg2;	// IMP=0x00000000002904f1
- (void).cxx_destruct;	// IMP=0x00000000002904af
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(readonly, nonatomic) SGStorageLocation *dueStorageLocation; // @synthesize dueStorageLocation=_dueStorageLocation;
@property(readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
- (id)loggingIdentifier;	// IMP=0x00000000002903bc
- (long long)commitWithStore:(id)arg1;	// IMP=0x00000000002903a1
- (id)toReminder;	// IMP=0x000000000029017c
- (id)description;	// IMP=0x0000000000290063
- (unsigned long long)hash;	// IMP=0x000000000028ffe0
- (_Bool)isEqualToStorageReminder:(id)arg1;	// IMP=0x000000000028ff1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028feb5
- (id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 origin:(id)arg4 dueDate:(id)arg5 dueLocationType:(unsigned char)arg6 dueLocation:(id)arg7 dueLocationTrigger:(unsigned char)arg8 title:(id)arg9 reminderStatus:(unsigned char)arg10 contactIdentifier:(id)arg11 creationDate:(id)arg12;	// IMP=0x000000000028fb11

@end

