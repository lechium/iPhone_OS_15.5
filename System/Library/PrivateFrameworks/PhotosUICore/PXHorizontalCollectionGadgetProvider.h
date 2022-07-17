//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetProviderDelegate-Protocol.h>
#import <PhotosUICore/PXHorizontalCollectionGadgetDelegate-Protocol.h>

@class NSDictionary, NSString, PXGadgetProvider, PXHorizontalCollectionGadget;

@interface PXHorizontalCollectionGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate>
{
    PXHorizontalCollectionGadget *_horizontalGadget;	// 8 = 0x8
    _Bool _hasLoaded;	// 16 = 0x10
    Class _horizontalCollectionGadgetClass;	// 24 = 0x18
    _Bool _prefersPagingEnabled;	// 32 = 0x20
    _Bool _isFixedHeight;	// 33 = 0x21
    NSString *_title;	// 40 = 0x28
    unsigned long long _gadgetType;	// 48 = 0x30
    unsigned long long _headerStyle;	// 56 = 0x38
    long long _defaultColumnSpan;	// 64 = 0x40
    NSDictionary *_columnSpanForTraitCollection;	// 72 = 0x48
    PXGadgetProvider *_contentGadgetProvider;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000043bdb3
@property(readonly, nonatomic) PXGadgetProvider *contentGadgetProvider; // @synthesize contentGadgetProvider=_contentGadgetProvider;
@property(nonatomic) _Bool isFixedHeight; // @synthesize isFixedHeight=_isFixedHeight;
@property(nonatomic) _Bool prefersPagingEnabled; // @synthesize prefersPagingEnabled=_prefersPagingEnabled;
@property(copy, nonatomic) NSDictionary *columnSpanForTraitCollection; // @synthesize columnSpanForTraitCollection=_columnSpanForTraitCollection;
@property(nonatomic) long long defaultColumnSpan; // @synthesize defaultColumnSpan=_defaultColumnSpan;
@property(nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_createHorizontalGadget;	// IMP=0x000000000043bb49
- (void)_updateHorizontalGadget;	// IMP=0x000000000043ba2d
- (void)invalidateGadgets;	// IMP=0x000000000043ba1b
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1;	// IMP=0x000000000043b9d4
- (void)resetPriorityDate;	// IMP=0x000000000043b9ce
- (void)generateGadgets;	// IMP=0x000000000043b83c
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x000000000043b813
- (void)loadDataForGadgets;	// IMP=0x000000000043b7f6
- (void)loadDataForPriority;	// IMP=0x000000000043b7e4
- (id)initWithIdentifier:(id)arg1 contentGadgetProvider:(id)arg2 title:(id)arg3 horizontalCollectionGadgetClass:(Class)arg4;	// IMP=0x000000000043b6e2
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;	// IMP=0x000000000043b617
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2;	// IMP=0x000000000043b59c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000043b519
- (id)init;	// IMP=0x000000000043b49f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
