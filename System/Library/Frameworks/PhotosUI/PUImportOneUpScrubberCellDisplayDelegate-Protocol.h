//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUImportOneUpScrubberCell, PXImportItemViewModel;

@protocol PUImportOneUpScrubberCellDisplayDelegate
- (void)importOneUpScrubberCell:(PUImportOneUpScrubberCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importOneUpScrubberCell:(PUImportOneUpScrubberCell *)arg1 requestedThumbnailForImportItem:(PXImportItemViewModel *)arg2 completion:(void (^)(UIImage *, _Bool))arg3;
@end

