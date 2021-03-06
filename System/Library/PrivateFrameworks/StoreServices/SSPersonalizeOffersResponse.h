//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding>
{
    NSMutableDictionary *_actionDisplayNames;	// 8 = 0x8
    NSMutableDictionary *_actionParameters;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSMutableDictionary *_priceDisplayNames;	// 32 = 0x20
}

- (id)copyXPCEncoding;	// IMP=0x00000000000ccc28
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000ccafc
- (void)_setPersonalizedItems:(id)arg1;	// IMP=0x00000000000ccac7
- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;	// IMP=0x00000000000cca5c
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x00000000000cc9f1
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;	// IMP=0x00000000000cc986
- (id)actionParametersForItemIdentifier:(id)arg1;	// IMP=0x00000000000cc95f
- (id)priceDisplayForItemType:(id)arg1;	// IMP=0x00000000000cc938
@property(readonly, nonatomic) NSArray *personalizedItems;
- (id)actionDisplayNameForItemType:(id)arg1;	// IMP=0x00000000000cc8fa
- (void)dealloc;	// IMP=0x00000000000cc8a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

