//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKController, AKSignature, NSArray, NSMutableArray;

@interface AKSignatureModelController : NSObject
{
    int _nextUID;	// 8 = 0x8
    _Bool _signaturesDecryptionAttempted;	// 12 = 0xc
    NSMutableArray *_signatures;	// 16 = 0x10
    AKSignature *_selectedSignature;	// 24 = 0x18
    AKController *_controller;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000de8b
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) AKSignature *selectedSignature; // @synthesize selectedSignature=_selectedSignature;
- (void)_migrateLegacySignaturesFromPreviewContainer;	// IMP=0x000000000000de43
- (id)_createAKSignatureFromItemRef:(id)arg1;	// IMP=0x000000000000dd93
- (_Bool)_createNewKeychainItemWithSignature:(id)arg1;	// IMP=0x000000000000da27
- (_Bool)_deleteSignatureFromKeychain:(id)arg1;	// IMP=0x000000000000d804
- (void)_saveSignatureToPersistentStorage:(id)arg1;	// IMP=0x000000000000d7eb
- (void)_loadSignaturesFromPersistentStorage;	// IMP=0x000000000000d244
- (void)reloadSignaturesFromSource;	// IMP=0x000000000000d171
@property(readonly) NSArray *signatures;
- (void)removeObjectFromSignaturesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000d0c3
- (void)insertObject:(id)arg1 inSignaturesAtIndex:(unsigned long long)arg2;	// IMP=0x000000000000d05e
- (id)initWithController:(id)arg1;	// IMP=0x000000000000cff6

@end
