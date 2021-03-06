//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UICollectionViewCellRegistration, UIImage;
@protocol PKPaymentServiceProviderProductsListSectionControllerDelegate;

@interface PKPaymentServiceProviderProductsListSectionController
{
    NSArray *_serviceProviderProducts;	// 8 = 0x8
    UICollectionViewCellRegistration *cellRegistration;	// 16 = 0x10
    id <PKPaymentServiceProviderProductsListSectionControllerDelegate> _delegate;	// 24 = 0x18
    UIImage *_cardImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004e8ad
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(nonatomic) __weak id <PKPaymentServiceProviderProductsListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // @synthesize cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x000000000004e777
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000004e766
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000004e6d3
- (id)defaultListLayout;	// IMP=0x000000000004e666
- (void)didSelectItem:(id)arg1;	// IMP=0x000000000004e5f4
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x000000000004e5b4
- (id)initWithIdentifier:(id)arg1 image:(id)arg2 serviceProviderProducts:(id)arg3;	// IMP=0x000000000004e1e2

@end

