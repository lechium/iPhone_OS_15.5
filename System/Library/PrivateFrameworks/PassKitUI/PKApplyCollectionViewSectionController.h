//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKApplyController, PKDynamicProvisioningPageContent;
@protocol PKApplyCollectionViewSectionControllerDelegate;

@interface PKApplyCollectionViewSectionController
{
    PKApplyController *_controller;	// 8 = 0x8
    PKDynamicProvisioningPageContent *_page;	// 16 = 0x10
    id <PKApplyCollectionViewSectionControllerDelegate> _dynamicCollectionDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004049e0
@property(nonatomic) id <PKApplyCollectionViewSectionControllerDelegate> dynamicCollectionDelegate; // @synthesize dynamicCollectionDelegate=_dynamicCollectionDelegate;
@property(retain, nonatomic) PKDynamicProvisioningPageContent *page; // @synthesize page=_page;
@property(readonly, nonatomic) PKApplyController *controller; // @synthesize controller=_controller;
- (_Bool)_hasFooterContentForIdentifier:(id)arg1;	// IMP=0x0000000000404912
- (_Bool)_hasHeaderContentForIdentifier:(id)arg1;	// IMP=0x000000000040489c
- (_Bool)shouldHighlightItem:(id)arg1;	// IMP=0x0000000000404810
- (void)didSelectItem:(id)arg1;	// IMP=0x0000000000404758
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x00000000004043d9
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000004042f7
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x0000000000404143
- (id)cellRegistrationForItem:(id)arg1;	// IMP=0x0000000000403fe2
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x0000000000403f3b
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;	// IMP=0x0000000000403f26
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x0000000000403f20
- (Class)footerViewClassForSectionIdentifier:(id)arg1;	// IMP=0x0000000000403f18
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x0000000000403f12
- (Class)headerViewClassForSectionIdentifier:(id)arg1;	// IMP=0x0000000000403f0a
- (id)initWithController:(id)arg1 applyPage:(id)arg2;	// IMP=0x0000000000403e68

@end
