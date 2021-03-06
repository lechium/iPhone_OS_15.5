//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZone, DNDSModeConfigurationsRecord, NSArray;

@interface DNDSModeConfigurationsRecordDiff : NSObject
{
    DNDSModeConfigurationsRecord *_original;	// 8 = 0x8
    DNDSModeConfigurationsRecord *_updated;	// 16 = 0x10
    NSArray *_modifiedIDs;	// 24 = 0x18
    NSArray *_removedIDs;	// 32 = 0x20
    CKRecordZone *_zone;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000049f77
@property(readonly, copy, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(readonly, copy, nonatomic) NSArray *removedIDs; // @synthesize removedIDs=_removedIDs;
@property(readonly, copy, nonatomic) NSArray *modifiedIDs; // @synthesize modifiedIDs=_modifiedIDs;
@property(readonly, copy, nonatomic) DNDSModeConfigurationsRecord *updated; // @synthesize updated=_updated;
@property(readonly, copy, nonatomic) DNDSModeConfigurationsRecord *original; // @synthesize original=_original;
- (id)_removedConfigurations;	// IMP=0x0000000000049d05
- (id)_modifiedConfigurations;	// IMP=0x0000000000049a84
- (id)_recordIDsInModeConfigurations:(id)arg1;	// IMP=0x00000000000497ff
- (void)_generateDiff;	// IMP=0x0000000000049751
- (id)initWithOriginalModeConfigurations:(id)arg1 updatedModeConfigurations:(id)arg2 zone:(id)arg3;	// IMP=0x000000000004965e

@end

