//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider
{
    UIDocumentInteractionController *_documentInteractionController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000088bf7
@property(readonly, nonatomic) __weak UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;	// IMP=0x0000000000088b29
- (void)main;	// IMP=0x0000000000088a94
- (id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2;	// IMP=0x0000000000088a44
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x000000000008897d
- (id)item;	// IMP=0x000000000008896b
- (id)loadedURL;	// IMP=0x000000000008891b
- (id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2;	// IMP=0x00000000000888aa

@end
