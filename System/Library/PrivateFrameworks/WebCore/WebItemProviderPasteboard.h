//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/AbstractPasteboard-Protocol.h>

@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard>
{
    struct RetainPtr<NSArray> _itemProviders;	// 8 = 0x8
    struct RetainPtr<NSArray> _supportedTypeIdentifiers;	// 16 = 0x10
    struct RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>> _stagedRegistrationInfoLists;	// 24 = 0x18
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _loadResults;	// 32 = 0x20
    long long _numberOfItems;	// 48 = 0x30
    long long _changeCount;	// 56 = 0x38
    long long _pendingOperationCount;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000236b0e0
- (id).cxx_construct;	// IMP=0x000000000236ec70
- (void).cxx_destruct;	// IMP=0x000000000236eba0
@property(nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id)takeRegistrationLists;	// IMP=0x000000000236eb30
- (void)clearRegistrationLists;	// IMP=0x000000000236eb10
- (void)stageRegistrationLists:(id)arg1;	// IMP=0x000000000236ead0
- (void)enumerateItemProvidersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000236eab0
- (void)decrementPendingOperationCount;	// IMP=0x000000000236eaa0
- (void)incrementPendingOperationCount;	// IMP=0x000000000236ea90
@property(readonly, nonatomic) _Bool hasPendingOperation;
- (id)itemProviderAtIndex:(unsigned long long)arg1;	// IMP=0x000000000236ea30
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1 synchronousTimeout:(double)arg2;	// IMP=0x000000000236d3e0
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1;	// IMP=0x000000000236d3c0
- (id)typeIdentifiersToLoad:(id)arg1;	// IMP=0x000000000236c770
@property(readonly, nonatomic) long long numberOfFiles;
@property(readonly, nonatomic) NSArray *allDroppedFileURLs;
- (id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id *)arg2;	// IMP=0x000000000236c1a0
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;	// IMP=0x000000000236bc30
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;	// IMP=0x000000000236b930
- (id)dataForPasteboardType:(id)arg1;	// IMP=0x000000000236b8c0
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;	// IMP=0x000000000236b6c0
@property(copy, nonatomic) NSArray *itemProviders;
- (id)pasteboardTypes;	// IMP=0x000000000236b2b0
- (void)updateSupportedTypeIdentifiers:(id)arg1;	// IMP=0x000000000236b270
- (id)init;	// IMP=0x000000000236b170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
