//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/NSObject-Protocol.h>

@class NSArray, NSItemProvider, PKAttachmentView, PKSelectionInteraction, PKStrokeSelectionImageConfig, UIBezierPath, UIContextMenuConfiguration, UIContextMenuInteraction, UIEvent, UIGestureRecognizer, UITargetedPreview;
@protocol UIContextMenuInteractionAnimating;

@protocol PKSelectionInteractionDelegate <NSObject>

@optional
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 willEndForConfiguration:(UIContextMenuConfiguration *)arg3 animator:(id <UIContextMenuInteractionAnimating>)arg4 forElement:(id)arg5 inAttachment:(PKAttachmentView *)arg6;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 willDisplayMenuForConfiguration:(UIContextMenuConfiguration *)arg3 animator:(id <UIContextMenuInteractionAnimating>)arg4 forElement:(id)arg5 inAttachment:(PKAttachmentView *)arg6;
- (UITargetedPreview *)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg3 forElement:(id)arg4 inAttachment:(PKAttachmentView *)arg5;
- (UIContextMenuConfiguration *)selectionInteraction:(PKSelectionInteraction *)arg1 contextMenuInteraction:(UIContextMenuInteraction *)arg2 configurationForElement:(id)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didDropItemProvider:(NSItemProvider *)arg2 inAttachment:(PKAttachmentView *)arg3 withCompletion:(void (^)(NSArray *))arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 dragInteractionWillEndForElements:(NSArray *)arg2 withOperation:(unsigned long long)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 dragInteractionWillBeginForElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (_Bool)selectionInteraction:(PKSelectionInteraction *)arg1 didLongPressElement:(id)arg2 withGesture:(UIGestureRecognizer *)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didTapElement:(id)arg2 withGesture:(UIGestureRecognizer *)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 renderPreviewForElements:(NSArray *)arg2 inContext:(struct CGContext *)arg3 withConfig:(PKStrokeSelectionImageConfig *)arg4 inAttachment:(PKAttachmentView *)arg5;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 selectedElementsInAttachment:(PKAttachmentView *)arg2;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 elementsInAttachment:(PKAttachmentView *)arg2;
- (_Bool)selectionInteraction:(PKSelectionInteraction *)arg1 selectionContainsPoint:(struct CGPoint)arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 elementsForSpaceInsertedAtPoint:(struct CGPoint)arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 didDuplicateElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didDeleteElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteractionDidPaste:(PKSelectionInteraction *)arg1 inAttachment:(PKAttachmentView *)arg2;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 pasteboardRepresentationsForElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (_Bool)selectionInteraction:(PKSelectionInteraction *)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didClearSelectionForElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didEndDraggingElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didDragElements:(NSArray *)arg2 withTransform:(struct CGAffineTransform)arg3 inAttachment:(PKAttachmentView *)arg4;
- (void)selectionInteraction:(PKSelectionInteraction *)arg1 didSelectElements:(NSArray *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (struct CGRect)selectionInteraction:(PKSelectionInteraction *)arg1 frameForElement:(id)arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 requestElementsInPath:(UIBezierPath *)arg2 inAttachment:(PKAttachmentView *)arg3;
- (NSArray *)selectionInteraction:(PKSelectionInteraction *)arg1 requestElementsInRect:(struct CGRect)arg2 inAttachment:(PKAttachmentView *)arg3;
- (_Bool)selectionInteractionShouldForwardToElements:(PKSelectionInteraction *)arg1 atPoint:(struct CGPoint)arg2 forEvent:(UIEvent *)arg3;
- (_Bool)selectionInteractionShouldBegin:(PKSelectionInteraction *)arg1 atPoint:(struct CGPoint)arg2 forEvent:(UIEvent *)arg3 orGestureRecognizer:(UIGestureRecognizer *)arg4;
@end
