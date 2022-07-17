//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CardKit/CRKIdentifiedCardSectionViewProviding-Protocol.h>

@class NSArray, NSString;
@protocol CRCard, CRKCardSectionViewProviding;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>
{
    NSString *providerIdentifier;	// 8 = 0x8
    id <CRCard> card;	// 16 = 0x10
    NSArray *viewConfigurations;	// 24 = 0x18
    id <CRKCardSectionViewProviding> _realCardSectionViewProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011cd1
@property(retain, nonatomic) id <CRKCardSectionViewProviding> realCardSectionViewProvider; // @synthesize realCardSectionViewProvider=_realCardSectionViewProvider;
@property(copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier;
@property(readonly, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations;
@property(readonly, nonatomic) id <CRCard> card; // @synthesize card;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;	// IMP=0x0000000000011c5b
- (_Bool)vetoDisplayOfCardSection:(id)arg1;	// IMP=0x0000000000011c45
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000011bb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
