//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentTableModel.h>

@interface ICAttachmentTableModel (UI)
- (struct CGSize)previewInAvailableSize:(struct CGSize)arg1 shouldDraw:(_Bool)arg2;	// IMP=0x0000000000024850
- (void)drawPreviewInRect:(struct CGRect)arg1;	// IMP=0x00000000000247f9
- (id)activityItems;	// IMP=0x0000000000024675
- (id)quicklookPreviewItems;	// IMP=0x0000000000024668
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;	// IMP=0x0000000000024628
- (_Bool)canConvertToHTMLForSharing;	// IMP=0x0000000000024620
- (id)htmlString;	// IMP=0x0000000000024282
- (void)redactAuthorAttributions;	// IMP=0x0000000000023f69
@end
