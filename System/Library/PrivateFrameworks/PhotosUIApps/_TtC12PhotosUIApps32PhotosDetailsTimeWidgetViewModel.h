//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/PHPhotoLibraryChangeObserver-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps32PhotosDetailsTimeWidgetViewModel <PHPhotoLibraryChangeObserver>
{
    MISSING_TYPE *fileName;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *isiCloudEnabled;	// 0 = 0x0
    MISSING_TYPE *isSyndicatedGuestAsset;	// 1109360 = 0x10ed70
    MISSING_TYPE *preferredContentSize;	// 49982 = 0xc33e
    MISSING_TYPE *_cloudLocalState;	// 0 = 0x0
    MISSING_TYPE *_date;	// 0 = 0x0
    MISSING_TYPE *_timeZone;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007c140
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000000007a9f0
- (void)clipBoardChangedWithPasteboardNotification:(id)arg1;	// IMP=0x000000000007a130

@end
