//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLPreviewController.h>

#import <VideosUI/QLPreviewControllerDataSource-Protocol.h>

@class ARQuickLookPreviewItem, ARQuickLookWebKitItem;

__attribute__((visibility("hidden")))
@interface VUIARQLPreviewController : QLPreviewController <QLPreviewControllerDataSource>
{
    ARQuickLookWebKitItem *_quickLookWebKitItem;	// 8 = 0x8
    ARQuickLookPreviewItem *_quickLookPreviewItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021b361
@property(retain, nonatomic) ARQuickLookPreviewItem *quickLookPreviewItem; // @synthesize quickLookPreviewItem=_quickLookPreviewItem;
@property(retain, nonatomic) ARQuickLookWebKitItem *quickLookWebKitItem; // @synthesize quickLookWebKitItem=_quickLookWebKitItem;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x000000000021b268
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x000000000021b25d
- (id)initWithQuickLookWebKitItem:(id)arg1;	// IMP=0x000000000021b1dd
- (id)initWithQuickLookPreviewItem:(id)arg1;	// IMP=0x000000000021b15d

@end

