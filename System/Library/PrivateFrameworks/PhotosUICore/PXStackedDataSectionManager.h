//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDataSectionManagerEnabling-Protocol.h>

@class NSString, PXDataSectionEnablementForwarder;

@interface PXStackedDataSectionManager <PXDataSectionManagerEnabling>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _alwaysContainsObjects;	// 9 = 0x9
    PXDataSectionEnablementForwarder *_enablementForwarder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f2807
@property(nonatomic) _Bool alwaysContainsObjects; // @synthesize alwaysContainsObjects=_alwaysContainsObjects;
@property(retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // @synthesize enablementForwarder=_enablementForwarder;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;	// IMP=0x00000000002f2639
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;	// IMP=0x00000000002f2509
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;	// IMP=0x00000000002f21f2
- (_Bool)isDataSectionEmpty;	// IMP=0x00000000002f2194
- (id)createDataSection;	// IMP=0x00000000002f20be
- (_Bool)_updateDataSectionIfNecessary;	// IMP=0x00000000002f1f6b
- (id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long *)arg2;	// IMP=0x00000000002f1e68
- (id)initWithChildDataSectionManagers:(id)arg1;	// IMP=0x00000000002f1e29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

