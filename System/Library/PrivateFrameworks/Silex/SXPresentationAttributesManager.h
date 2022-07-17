//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXPresentationAttributesManager-Protocol.h>

@class NSHashTable, NSString, SXPresentationAttributes;

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager>
{
    SXPresentationAttributes *_presentationAttributes;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008d6a4
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // @synthesize presentationAttributes=_presentationAttributes;
- (void)removeObserver:(id)arg1;	// IMP=0x000000000008d618
- (void)addObserver:(id)arg1;	// IMP=0x000000000008d5a0
- (void)updateAttributes:(id)arg1;	// IMP=0x000000000008d44d
- (void)attributesChangedFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008d2cd
- (id)init;	// IMP=0x000000000008d260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
