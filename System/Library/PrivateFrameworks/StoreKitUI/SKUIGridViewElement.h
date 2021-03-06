//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUICollectionDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElement
{
    id _persistenceKey;	// 8 = 0x8
    _Bool _showsEditMode;	// 16 = 0x10
}

+ (id)supportedFeatures;	// IMP=0x00000000002b821e
- (void).cxx_destruct;	// IMP=0x00000000002b8868
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2;	// IMP=0x00000000002b86eb
@property(readonly, nonatomic) SKUICollectionDOMFeature *collectionFeature;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
- (id)persistenceKey;	// IMP=0x00000000002b853e
- (long long)pageComponentType;	// IMP=0x00000000002b8533
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b841c
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000002b8301
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000002b8076

@end

