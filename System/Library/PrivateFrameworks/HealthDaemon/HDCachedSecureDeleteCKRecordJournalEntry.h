//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDCachedSecureDeleteCKRecordJournalEntry
{
    long long _recordID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004e7537
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x00000000004e710f
@property(nonatomic) long long recordID; // @synthesize recordID=_recordID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004e75b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004e753f

@end

