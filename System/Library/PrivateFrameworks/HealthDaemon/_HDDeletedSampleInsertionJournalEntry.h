//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCodableObjectCollection, HDDataOriginProvenance, NSArray;

__attribute__((visibility("hidden")))
@interface _HDDeletedSampleInsertionJournalEntry
{
    HDCodableObjectCollection *_objectCollection;	// 8 = 0x8
    NSArray *_samples;	// 16 = 0x10
    HDDataOriginProvenance *_provenance;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000063855a
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;	// IMP=0x00000000006382a3
- (void).cxx_destruct;	// IMP=0x0000000000638860
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000638645
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000638562

@end

