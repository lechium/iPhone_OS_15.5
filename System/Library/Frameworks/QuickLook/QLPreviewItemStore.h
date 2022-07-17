//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLook/QLPreviewControllerDataSource-Protocol.h>
#import <QuickLook/QLPreviewItemProvider-Protocol.h>

@class NSPointerArray, QLDataSource;
@protocol QLPreviewItemProvider, QLPreviewItemStoreDelegate;

__attribute__((visibility("hidden")))
@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource>
{
    NSPointerArray *_cache;	// 8 = 0x8
    id <QLPreviewItemProvider> _itemProvider;	// 16 = 0x10
    QLDataSource *_internalItemProvider;	// 24 = 0x18
    _Bool _isArchive;	// 32 = 0x20
    id <QLPreviewItemStoreDelegate> _delegate;	// 40 = 0x28
    struct _NSRange _possibleRange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000043f8f
@property(readonly) _Bool isArchive; // @synthesize isArchive=_isArchive;
@property __weak id <QLPreviewItemStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) struct _NSRange possibleRange; // @synthesize possibleRange=_possibleRange;
@property(nonatomic) __weak id <QLPreviewItemProvider> itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x0000000000043d57
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x0000000000043d45
- (long long)indexOfPreviewItem:(id)arg1;	// IMP=0x0000000000043c58
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000435c5
@property(readonly) unsigned long long numberOfItems;
- (void)clearCache;	// IMP=0x00000000000433c8
- (void)clearItems;	// IMP=0x000000000004329d
- (void)dealloc;	// IMP=0x0000000000043228
- (void)reloadWithNumberOfPreviewItems:(unsigned long long)arg1;	// IMP=0x00000000000431f9
- (void)_commonInit;	// IMP=0x0000000000043192
- (id)initWithItemsOfDirectoryAtURL:(id)arg1;	// IMP=0x0000000000042c31
- (id)initWithPreviewItems:(id)arg1;	// IMP=0x00000000000429d5
- (id)init;	// IMP=0x0000000000042977

@end
