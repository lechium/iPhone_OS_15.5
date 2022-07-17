//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDPrototypeChange-Protocol.h>

@class NSString, TSDPropertySourceForModifyPrototypeChange, TSSMutablePropertySet, TSSPropertyMap;
@protocol TSSPropertySource;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange>
{
    id mPrototype;	// 8 = 0x8
    TSSMutablePropertySet *mChangedPropertySet;	// 16 = 0x10
    TSSPropertyMap *mChangedPropertyMapBeforeChange;	// 24 = 0x18
    TSSPropertyMap *mChangedPropertyMapAfterChange;	// 32 = 0x20
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceBeforeChange;	// 40 = 0x28
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceAfterChange;	// 48 = 0x30
    TSSMutablePropertySet *mPropertiesWithOldValuesRecordedButNotNewValues;	// 56 = 0x38
}

@property(readonly, retain) TSSMutablePropertySet *i_propertiesWithOldValuesRecordedButNotNewValues; // @synthesize i_propertiesWithOldValuesRecordedButNotNewValues=mPropertiesWithOldValuesRecordedButNotNewValues;
@property(readonly, retain) TSSPropertyMap *changedPropertyMapAfterChange; // @synthesize changedPropertyMapAfterChange=mChangedPropertyMapAfterChange;
@property(readonly, retain) TSSPropertyMap *changedPropertyMapBeforeChange; // @synthesize changedPropertyMapBeforeChange=mChangedPropertyMapBeforeChange;
@property(readonly, retain) TSSMutablePropertySet *changedPropertySet; // @synthesize changedPropertySet=mChangedPropertySet;
@property(readonly, retain) id prototype; // @synthesize prototype=mPrototype;
- (_Bool)propertiesAreChanging:(id)arg1;	// IMP=0x000000000025b2b6
- (_Bool)propertyIsChanging:(int)arg1;	// IMP=0x000000000025b2a0
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
@property(readonly, retain) id replacement;
@property(readonly) _Bool prototypeIsBeingDeleted;
@property(readonly) _Bool prototypeIsBeingReplaced;
@property(readonly) _Bool prototypeIsBeingModified;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000025af86
- (id)initModifyPrototypeChangeForPrototype:(id)arg1;	// IMP=0x000000000025aef6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
