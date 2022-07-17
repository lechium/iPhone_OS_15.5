//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBackgroundActivityScheduler, NSNumber, NSSet;

@interface STPersistLocalAppsOperation
{
    NSSet *_predeterminedInstalledAppIdentifiers;	// 8 = 0x8
    NSBackgroundActivityScheduler *_backgroundActivity;	// 16 = 0x10
}

+ (_Bool)_shouldSkipApplicationWithParentURLResourceValues:(id)arg1;	// IMP=0x0040000000059963
- (void).cxx_destruct;	// IMP=0x002000000005af17
@property(retain) NSBackgroundActivityScheduler *backgroundActivity; // @synthesize backgroundActivity=_backgroundActivity;
@property(retain, nonatomic) NSSet *predeterminedInstalledAppIdentifiers; // @synthesize predeterminedInstalledAppIdentifiers=_predeterminedInstalledAppIdentifiers;
- (void)main;	// IMP=0x001000000005a052
- (void)_collectAppMetadata:(id)arg1;	// IMP=0x00100000000599c7
- (id)_collectInstalledApps:(id)arg1;	// IMP=0x001000000005923f
- (id)initWithPersistenceController:(id)arg1 installedApps:(id)arg2 backgroundActivity:(id)arg3;	// IMP=0x0010000000059195
- (id)initWithPersistenceController:(id)arg1 installedApps:(id)arg2;	// IMP=0x0010000000059180
- (id)initWithPersistenceController:(id)arg1;	// IMP=0x001000000005916c

// Remaining properties
@property(readonly) NSNumber *resultObject; // @dynamic resultObject;

@end
