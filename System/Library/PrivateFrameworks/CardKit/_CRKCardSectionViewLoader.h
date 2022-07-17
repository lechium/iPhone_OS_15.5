//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CardKit/CRKCardSectionViewSourcing-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol CRCard, _CRKCardSectionViewLoaderDelegate;

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing>
{
    NSMutableDictionary *_cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;	// 8 = 0x8
    NSMutableDictionary *_vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;	// 16 = 0x10
    NSMutableSet *_identifiedCardSectionViewProviders;	// 24 = 0x18
    id <_CRKCardSectionViewLoaderDelegate> _delegate;	// 32 = 0x20
    id <CRCard> _loadedCard;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000015462
@property(retain, nonatomic) id <CRCard> loadedCard; // @synthesize loadedCard=_loadedCard;
@property(nonatomic) __weak id <_CRKCardSectionViewLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableSet *identifiedCardSectionViewProviders; // @synthesize identifiedCardSectionViewProviders=_identifiedCardSectionViewProviders;
- (id)_viewConfigurationForCardSection:(id)arg1 providerIdentifier:(id)arg2;	// IMP=0x0000000000015357
- (id)_allViewConfigurations;	// IMP=0x00000000000151bc
- (_Bool)cardSectionShouldBeDisplayed:(id)arg1;	// IMP=0x000000000001514f
- (id)viewConfigurationForCardSection:(id)arg1;	// IMP=0x0000000000014b34
- (void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg1 identifiedProviders:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013d08
- (id)init;	// IMP=0x0000000000013c7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
